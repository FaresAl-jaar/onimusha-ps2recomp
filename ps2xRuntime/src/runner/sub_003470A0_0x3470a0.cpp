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

// Function: sub_003470A0
// Address: 0x3470a0 - 0x3471a4
void sub_003470A0_0x3470a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003470A0_0x3470a0");
#endif

    switch (ctx->pc) {
        case 0x3470a0u: goto label_3470a0;
        case 0x3470a4u: goto label_3470a4;
        case 0x3470a8u: goto label_3470a8;
        case 0x3470acu: goto label_3470ac;
        case 0x3470b0u: goto label_3470b0;
        case 0x3470b4u: goto label_3470b4;
        case 0x3470b8u: goto label_3470b8;
        case 0x3470bcu: goto label_3470bc;
        case 0x3470c0u: goto label_3470c0;
        case 0x3470c4u: goto label_3470c4;
        case 0x3470c8u: goto label_3470c8;
        case 0x3470ccu: goto label_3470cc;
        case 0x3470d0u: goto label_3470d0;
        case 0x3470d4u: goto label_3470d4;
        case 0x3470d8u: goto label_3470d8;
        case 0x3470dcu: goto label_3470dc;
        case 0x3470e0u: goto label_3470e0;
        case 0x3470e4u: goto label_3470e4;
        case 0x3470e8u: goto label_3470e8;
        case 0x3470ecu: goto label_3470ec;
        case 0x3470f0u: goto label_3470f0;
        case 0x3470f4u: goto label_3470f4;
        case 0x3470f8u: goto label_3470f8;
        case 0x3470fcu: goto label_3470fc;
        case 0x347100u: goto label_347100;
        case 0x347104u: goto label_347104;
        case 0x347108u: goto label_347108;
        case 0x34710cu: goto label_34710c;
        case 0x347110u: goto label_347110;
        case 0x347114u: goto label_347114;
        case 0x347118u: goto label_347118;
        case 0x34711cu: goto label_34711c;
        case 0x347120u: goto label_347120;
        case 0x347124u: goto label_347124;
        case 0x347128u: goto label_347128;
        case 0x34712cu: goto label_34712c;
        case 0x347130u: goto label_347130;
        case 0x347134u: goto label_347134;
        case 0x347138u: goto label_347138;
        case 0x34713cu: goto label_34713c;
        case 0x347140u: goto label_347140;
        case 0x347144u: goto label_347144;
        case 0x347148u: goto label_347148;
        case 0x34714cu: goto label_34714c;
        case 0x347150u: goto label_347150;
        case 0x347154u: goto label_347154;
        case 0x347158u: goto label_347158;
        case 0x34715cu: goto label_34715c;
        case 0x347160u: goto label_347160;
        case 0x347164u: goto label_347164;
        case 0x347168u: goto label_347168;
        case 0x34716cu: goto label_34716c;
        case 0x347170u: goto label_347170;
        case 0x347174u: goto label_347174;
        case 0x347178u: goto label_347178;
        case 0x34717cu: goto label_34717c;
        case 0x347180u: goto label_347180;
        case 0x347184u: goto label_347184;
        case 0x347188u: goto label_347188;
        case 0x34718cu: goto label_34718c;
        case 0x347190u: goto label_347190;
        case 0x347194u: goto label_347194;
        case 0x347198u: goto label_347198;
        case 0x34719cu: goto label_34719c;
        case 0x3471a0u: goto label_3471a0;
        default: break;
    }

    ctx->pc = 0x3470a0u;

label_3470a0:
    // 0x3470a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3470a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3470a4:
    // 0x3470a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3470a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3470a8:
    // 0x3470a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3470a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3470ac:
    // 0x3470ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3470acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3470b0:
    // 0x3470b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3470b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3470b4:
    // 0x3470b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3470b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3470b8:
    // 0x3470b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3470b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3470bc:
    // 0x3470bc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3470bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3470c0:
    // 0x3470c0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3470c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3470c4:
    // 0x3470c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3470c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3470c8:
    // 0x3470c8: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x3470c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3470cc:
    // 0x3470cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3470ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3470d0:
    // 0x3470d0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3470d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3470d4:
    // 0x3470d4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3470d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3470d8:
    // 0x3470d8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3470d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3470dc:
    // 0x3470dc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3470dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3470e0:
    // 0x3470e0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3470e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3470e4:
    // 0x3470e4: 0xc0a4408  jal         func_291020
label_3470e8:
    if (ctx->pc == 0x3470E8u) {
        ctx->pc = 0x3470E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470E4u;
        // 0x3470e8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3470ECu;
        goto label_3470ec;
    }
    ctx->pc = 0x3470E4u;
    SET_GPR_U32(ctx, 31, 0x3470ECu);
    ctx->pc = 0x3470E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470E4u;
    // 0x3470e8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3470E4u, 0x3470ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470ECu;
label_3470ec:
    // 0x3470ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3470ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3470f0:
    // 0x3470f0: 0xc0a43fc  jal         func_290FF0
label_3470f4:
    if (ctx->pc == 0x3470F4u) {
        ctx->pc = 0x3470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470F0u;
        // 0x3470f4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3470F8u;
        goto label_3470f8;
    }
    ctx->pc = 0x3470F0u;
    SET_GPR_U32(ctx, 31, 0x3470F8u);
    ctx->pc = 0x3470F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470F0u;
    // 0x3470f4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3470F0u, 0x3470F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470F8u;
label_3470f8:
    // 0x3470f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3470f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3470fc:
    // 0x3470fc: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3470fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_347100:
    // 0x347100: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x347100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_347104:
    // 0x347104: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_347108:
    // 0x347108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34710c:
    // 0x34710c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x34710cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_347110:
    // 0x347110: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x347110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_347114:
    // 0x347114: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x347114u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347118:
    // 0x347118: 0xc0510e0  jal         func_144380
label_34711c:
    if (ctx->pc == 0x34711Cu) {
        ctx->pc = 0x34711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347118u;
        // 0x34711c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347120u;
        goto label_347120;
    }
    ctx->pc = 0x347118u;
    SET_GPR_U32(ctx, 31, 0x347120u);
    ctx->pc = 0x34711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347118u;
    // 0x34711c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x347118u, 0x347120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347120u;
label_347120:
    // 0x347120: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x347120u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347124:
    // 0x347124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x347124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347128:
    // 0x347128: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x347128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_34712c:
    // 0x34712c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347130:
    // 0x347130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x347130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_347134:
    // 0x347134: 0x2405020b  addiu       $a1, $zero, 0x20B
    ctx->pc = 0x347134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_347138:
    // 0x347138: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x347138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_34713c:
    // 0x34713c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34713cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_347140:
    // 0x347140: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x347140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_347144:
    // 0x347144: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x347144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_347148:
    // 0x347148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34714c:
    // 0x34714c: 0x0  nop
    ctx->pc = 0x34714cu;
    // NOP
label_347150:
    // 0x347150: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x347150u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_347154:
    // 0x347154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_347158:
    // 0x347158: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x347158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_34715c:
    // 0x34715c: 0x0  nop
    ctx->pc = 0x34715cu;
    // NOP
label_347160:
    // 0x347160: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x347160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_347164:
    // 0x347164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_347168:
    // 0x347168: 0xc0d0484  jal         func_341210
label_34716c:
    if (ctx->pc == 0x34716Cu) {
        ctx->pc = 0x34716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347168u;
        // 0x34716c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x347170u;
        goto label_347170;
    }
    ctx->pc = 0x347168u;
    SET_GPR_U32(ctx, 31, 0x347170u);
    ctx->pc = 0x34716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347168u;
    // 0x34716c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x347168u, 0x347170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347170u;
label_347170:
    // 0x347170: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x347170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_347174:
    // 0x347174: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x347174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_347178:
    // 0x347178: 0x320f809  jalr        $t9
label_34717c:
    if (ctx->pc == 0x34717Cu) {
        ctx->pc = 0x34717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347178u;
        // 0x34717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347180u;
        goto label_347180;
    }
    ctx->pc = 0x347178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347180u);
        ctx->pc = 0x34717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347178u;
        // 0x34717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347178u, 0x347180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x347180u;
label_347180:
    // 0x347180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347184:
    // 0x347184: 0xc0e300c  jal         func_38C030
label_347188:
    if (ctx->pc == 0x347188u) {
        ctx->pc = 0x347188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347184u;
        // 0x347188: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34718Cu;
        goto label_34718c;
    }
    ctx->pc = 0x347184u;
    SET_GPR_U32(ctx, 31, 0x34718Cu);
    ctx->pc = 0x347188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347184u;
    // 0x347188: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C030u, 0x347184u, 0x34718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34718Cu;
label_34718c:
    // 0x34718c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34718cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_347190:
    // 0x347190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_347194:
    // 0x347194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347198:
    // 0x347198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34719c:
    // 0x34719c: 0x3e00008  jr          $ra
label_3471a0:
    if (ctx->pc == 0x3471A0u) {
        ctx->pc = 0x3471A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34719Cu;
        // 0x3471a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3471A4u;
        goto label_fallthrough_0x34719c;
    }
    ctx->pc = 0x34719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3471A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34719Cu;
        // 0x3471a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34719c:
    ctx->pc = 0x3471A4u;
}
