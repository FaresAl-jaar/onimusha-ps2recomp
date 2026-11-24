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

// Function: sub_003F0F20
// Address: 0x3f0f20 - 0x3f1034
void sub_003F0F20_0x3f0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0F20_0x3f0f20");
#endif

    switch (ctx->pc) {
        case 0x3f0f20u: goto label_3f0f20;
        case 0x3f0f24u: goto label_3f0f24;
        case 0x3f0f28u: goto label_3f0f28;
        case 0x3f0f2cu: goto label_3f0f2c;
        case 0x3f0f30u: goto label_3f0f30;
        case 0x3f0f34u: goto label_3f0f34;
        case 0x3f0f38u: goto label_3f0f38;
        case 0x3f0f3cu: goto label_3f0f3c;
        case 0x3f0f40u: goto label_3f0f40;
        case 0x3f0f44u: goto label_3f0f44;
        case 0x3f0f48u: goto label_3f0f48;
        case 0x3f0f4cu: goto label_3f0f4c;
        case 0x3f0f50u: goto label_3f0f50;
        case 0x3f0f54u: goto label_3f0f54;
        case 0x3f0f58u: goto label_3f0f58;
        case 0x3f0f5cu: goto label_3f0f5c;
        case 0x3f0f60u: goto label_3f0f60;
        case 0x3f0f64u: goto label_3f0f64;
        case 0x3f0f68u: goto label_3f0f68;
        case 0x3f0f6cu: goto label_3f0f6c;
        case 0x3f0f70u: goto label_3f0f70;
        case 0x3f0f74u: goto label_3f0f74;
        case 0x3f0f78u: goto label_3f0f78;
        case 0x3f0f7cu: goto label_3f0f7c;
        case 0x3f0f80u: goto label_3f0f80;
        case 0x3f0f84u: goto label_3f0f84;
        case 0x3f0f88u: goto label_3f0f88;
        case 0x3f0f8cu: goto label_3f0f8c;
        case 0x3f0f90u: goto label_3f0f90;
        case 0x3f0f94u: goto label_3f0f94;
        case 0x3f0f98u: goto label_3f0f98;
        case 0x3f0f9cu: goto label_3f0f9c;
        case 0x3f0fa0u: goto label_3f0fa0;
        case 0x3f0fa4u: goto label_3f0fa4;
        case 0x3f0fa8u: goto label_3f0fa8;
        case 0x3f0facu: goto label_3f0fac;
        case 0x3f0fb0u: goto label_3f0fb0;
        case 0x3f0fb4u: goto label_3f0fb4;
        case 0x3f0fb8u: goto label_3f0fb8;
        case 0x3f0fbcu: goto label_3f0fbc;
        case 0x3f0fc0u: goto label_3f0fc0;
        case 0x3f0fc4u: goto label_3f0fc4;
        case 0x3f0fc8u: goto label_3f0fc8;
        case 0x3f0fccu: goto label_3f0fcc;
        case 0x3f0fd0u: goto label_3f0fd0;
        case 0x3f0fd4u: goto label_3f0fd4;
        case 0x3f0fd8u: goto label_3f0fd8;
        case 0x3f0fdcu: goto label_3f0fdc;
        case 0x3f0fe0u: goto label_3f0fe0;
        case 0x3f0fe4u: goto label_3f0fe4;
        case 0x3f0fe8u: goto label_3f0fe8;
        case 0x3f0fecu: goto label_3f0fec;
        case 0x3f0ff0u: goto label_3f0ff0;
        case 0x3f0ff4u: goto label_3f0ff4;
        case 0x3f0ff8u: goto label_3f0ff8;
        case 0x3f0ffcu: goto label_3f0ffc;
        case 0x3f1000u: goto label_3f1000;
        case 0x3f1004u: goto label_3f1004;
        case 0x3f1008u: goto label_3f1008;
        case 0x3f100cu: goto label_3f100c;
        case 0x3f1010u: goto label_3f1010;
        case 0x3f1014u: goto label_3f1014;
        case 0x3f1018u: goto label_3f1018;
        case 0x3f101cu: goto label_3f101c;
        case 0x3f1020u: goto label_3f1020;
        case 0x3f1024u: goto label_3f1024;
        case 0x3f1028u: goto label_3f1028;
        case 0x3f102cu: goto label_3f102c;
        case 0x3f1030u: goto label_3f1030;
        default: break;
    }

    ctx->pc = 0x3f0f20u;

label_3f0f20:
    // 0x3f0f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f0f24:
    // 0x3f0f24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f0f28:
    // 0x3f0f28: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3f0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0f2c:
    // 0x3f0f2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f0f30:
    // 0x3f0f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0f34:
    // 0x3f0f34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f0f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f38:
    // 0x3f0f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0f3c:
    // 0x3f0f3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3f0f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f40:
    // 0x3f0f40: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0f44:
    // 0x3f0f44: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f0f44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0f48:
    // 0x3f0f48: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0f4c:
    // 0x3f0f4c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0f50:
    // 0x3f0f50: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0f54:
    // 0x3f0f54: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f0f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f0f58:
    // 0x3f0f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f5c:
    // 0x3f0f5c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0f60:
    // 0x3f0f60: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f0f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0f64:
    // 0x3f0f64: 0xc0a4408  jal         func_291020
label_3f0f68:
    if (ctx->pc == 0x3F0F68u) {
        ctx->pc = 0x3F0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F64u;
        // 0x3f0f68: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0F6Cu;
        goto label_3f0f6c;
    }
    ctx->pc = 0x3F0F64u;
    SET_GPR_U32(ctx, 31, 0x3F0F6Cu);
    ctx->pc = 0x3F0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F64u;
    // 0x3f0f68: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0F64u, 0x3F0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F6Cu;
label_3f0f6c:
    // 0x3f0f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f70:
    // 0x3f0f70: 0xc0a43fc  jal         func_290FF0
label_3f0f74:
    if (ctx->pc == 0x3F0F74u) {
        ctx->pc = 0x3F0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F70u;
        // 0x3f0f74: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0F78u;
        goto label_3f0f78;
    }
    ctx->pc = 0x3F0F70u;
    SET_GPR_U32(ctx, 31, 0x3F0F78u);
    ctx->pc = 0x3F0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F70u;
    // 0x3f0f74: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F0F70u, 0x3F0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F78u;
label_3f0f78:
    // 0x3f0f78: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f0f7c:
    // 0x3f0f7c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f0f7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f0f80:
    // 0x3f0f80: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f0f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0f84:
    // 0x3f0f84: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0f88:
    // 0x3f0f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f8c:
    // 0x3f0f8c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f0f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f0f90:
    // 0x3f0f90: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f0f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0f94:
    // 0x3f0f94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f98:
    // 0x3f0f98: 0xc0510e0  jal         func_144380
label_3f0f9c:
    if (ctx->pc == 0x3F0F9Cu) {
        ctx->pc = 0x3F0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F98u;
        // 0x3f0f9c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0FA0u;
        goto label_3f0fa0;
    }
    ctx->pc = 0x3F0F98u;
    SET_GPR_U32(ctx, 31, 0x3F0FA0u);
    ctx->pc = 0x3F0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F98u;
    // 0x3f0f9c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0F98u, 0x3F0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FA0u;
label_3f0fa0:
    // 0x3f0fa0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3f0fa0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0fa4:
    // 0x3f0fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0fa8:
    // 0x3f0fa8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f0fac:
    // 0x3f0fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0fb0:
    // 0x3f0fb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f0fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f0fb4:
    // 0x3f0fb4: 0x2405020f  addiu       $a1, $zero, 0x20F
    ctx->pc = 0x3f0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
label_3f0fb8:
    // 0x3f0fb8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f0fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f0fbc:
    // 0x3f0fbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f0fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0fc0:
    // 0x3f0fc0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f0fc4:
    // 0x3f0fc4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f0fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f0fc8:
    // 0x3f0fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f0fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0fcc:
    // 0x3f0fcc: 0x0  nop
    ctx->pc = 0x3f0fccu;
    // NOP
label_3f0fd0:
    // 0x3f0fd0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f0fd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f0fd4:
    // 0x3f0fd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0fd8:
    // 0x3f0fd8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f0fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f0fdc:
    // 0x3f0fdc: 0x0  nop
    ctx->pc = 0x3f0fdcu;
    // NOP
label_3f0fe0:
    // 0x3f0fe0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f0fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f0fe4:
    // 0x3f0fe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f0fe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f0fe8:
    // 0x3f0fe8: 0xc0d0484  jal         func_341210
label_3f0fec:
    if (ctx->pc == 0x3F0FECu) {
        ctx->pc = 0x3F0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FE8u;
        // 0x3f0fec: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0FF0u;
        goto label_3f0ff0;
    }
    ctx->pc = 0x3F0FE8u;
    SET_GPR_U32(ctx, 31, 0x3F0FF0u);
    ctx->pc = 0x3F0FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0FE8u;
    // 0x3f0fec: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F0FE8u, 0x3F0FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0FF0u;
label_3f0ff0:
    // 0x3f0ff0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f0ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f0ff4:
    // 0x3f0ff4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f0ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f0ff8:
    // 0x3f0ff8: 0x320f809  jalr        $t9
label_3f0ffc:
    if (ctx->pc == 0x3F0FFCu) {
        ctx->pc = 0x3F0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FF8u;
        // 0x3f0ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1000u;
        goto label_3f1000;
    }
    ctx->pc = 0x3F0FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1000u);
        ctx->pc = 0x3F0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FF8u;
        // 0x3f0ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0FF8u, 0x3F1000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F1000u;
label_3f1000:
    // 0x3f1000: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3f1000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3f1004:
    // 0x3f1004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1008:
    // 0x3f1008: 0xc0d0490  jal         func_341240
label_3f100c:
    if (ctx->pc == 0x3F100Cu) {
        ctx->pc = 0x3F100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1008u;
        // 0x3f100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1010u;
        goto label_3f1010;
    }
    ctx->pc = 0x3F1008u;
    SET_GPR_U32(ctx, 31, 0x3F1010u);
    ctx->pc = 0x3F100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1008u;
    // 0x3f100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3F1008u, 0x3F1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1010u;
label_3f1010:
    // 0x3f1010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f1014:
    // 0x3f1014: 0xc0e2b0c  jal         func_38AC30
label_3f1018:
    if (ctx->pc == 0x3F1018u) {
        ctx->pc = 0x3F1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1014u;
        // 0x3f1018: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F101Cu;
        goto label_3f101c;
    }
    ctx->pc = 0x3F1014u;
    SET_GPR_U32(ctx, 31, 0x3F101Cu);
    ctx->pc = 0x3F1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1014u;
    // 0x3f1018: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AC30u, 0x3F1014u, 0x3F101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F101Cu;
label_3f101c:
    // 0x3f101c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1020:
    // 0x3f1020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1024:
    // 0x3f1024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1028:
    // 0x3f1028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f102c:
    // 0x3f102c: 0x3e00008  jr          $ra
label_3f1030:
    if (ctx->pc == 0x3F1030u) {
        ctx->pc = 0x3F1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F102Cu;
        // 0x3f1030: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1034u;
        goto label_fallthrough_0x3f102c;
    }
    ctx->pc = 0x3F102Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F102Cu;
        // 0x3f1030: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F102Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f102c:
    ctx->pc = 0x3F1034u;
}
