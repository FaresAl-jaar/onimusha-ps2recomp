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

// Function: sub_00275090
// Address: 0x275090 - 0x275238
void sub_00275090_0x275090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275090_0x275090");
#endif

    switch (ctx->pc) {
        case 0x2750e0u: goto label_2750e0;
        case 0x275150u: goto label_275150;
        case 0x275164u: goto label_275164;
        case 0x275218u: goto label_275218;
        default: break;
    }

    ctx->pc = 0x275090u;

    // 0x275090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x275090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x275094: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x275094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27509c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2750a0: 0xffa00058  sd          $zero, 0x58($sp)
    ctx->pc = 0x2750a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x2750a4: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x2750a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x2750a8: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2750a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2750ac: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2750acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2750b0: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2750B0u;
    {
        const bool branch_taken_0x2750b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750B0u;
        // 0x2750b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750b0) {
            ctx->pc = 0x275220u;
            goto label_275220;
        }
    }
    ctx->pc = 0x2750B8u;
    // 0x2750b8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x2750b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2750bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2750bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2750c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2750c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2750c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2750c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2750c8: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2750c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2750cc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2750ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2750d0: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x2750d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x2750d4: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x2750d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2750d8: 0xc09d334  jal         func_274CD0
    ctx->pc = 0x2750D8u;
    SET_GPR_U32(ctx, 31, 0x2750E0u);
    ctx->pc = 0x2750DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750D8u;
    // 0x2750dc: 0xffa20048  sd          $v0, 0x48($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274CD0u, 0x2750D8u, 0x2750E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750E0u;
label_2750e0:
    // 0x2750e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2750e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2750e4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2750e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2750e8: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x2750e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2750ec: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2750ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2750f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2750F0u;
    {
        const bool branch_taken_0x2750f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2750F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750F0u;
        // 0x2750f4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750f0) {
            ctx->pc = 0x275120u;
            goto label_275120;
        }
    }
    ctx->pc = 0x2750F8u;
    // 0x2750f8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2750f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2750fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2750FCu;
    {
        const bool branch_taken_0x2750fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750FCu;
        // 0x275100: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750fc) {
            ctx->pc = 0x275120u;
            goto label_275120;
        }
    }
    ctx->pc = 0x275104u;
    // 0x275104: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x275108: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275108u;
    {
        const bool branch_taken_0x275108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275108u;
        // 0x27510c: 0xa204000e  sb          $a0, 0xE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275108) {
            ctx->pc = 0x275120u;
            goto label_275120;
        }
    }
    ctx->pc = 0x275110u;
    // 0x275110: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x275110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275114: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x275114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x275118: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x275118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27511c: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x27511cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
label_275120:
    // 0x275120: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x275120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x275124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x275128: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275128u;
    {
        const bool branch_taken_0x275128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275128) {
            ctx->pc = 0x275158u;
            goto label_275158;
        }
    }
    ctx->pc = 0x275130u;
    // 0x275130: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x275130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x275134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275138: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x275138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x27513c: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x27513cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x275140: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x275140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x275144: 0x9205000e  lbu         $a1, 0xE($s0)
    ctx->pc = 0x275144u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x275148: 0xc09d3e8  jal         func_274FA0
    ctx->pc = 0x275148u;
    SET_GPR_U32(ctx, 31, 0x275150u);
    ctx->pc = 0x27514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275148u;
    // 0x27514c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FA0u, 0x275148u, 0x275150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275150u;
label_275150:
    // 0x275150: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x275150u;
    {
        const bool branch_taken_0x275150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275150u;
        // 0x275154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275150) {
            ctx->pc = 0x275228u;
            goto label_275228;
        }
    }
    ctx->pc = 0x275158u;
label_275158:
    // 0x275158: 0x9205000c  lbu         $a1, 0xC($s0)
    ctx->pc = 0x275158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27515c: 0xc09d2b8  jal         func_274AE0
    ctx->pc = 0x27515Cu;
    SET_GPR_U32(ctx, 31, 0x275164u);
    ctx->pc = 0x275160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27515Cu;
    // 0x275160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x27515Cu, 0x275164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275164u;
label_275164:
    // 0x275164: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x275164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275168: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275168u;
    {
        const bool branch_taken_0x275168 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275168u;
        // 0x27516c: 0x9604000a  lhu         $a0, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275168) {
            ctx->pc = 0x27517Cu;
            goto label_27517c;
        }
    }
    ctx->pc = 0x275170u;
    // 0x275170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275174u;
    {
        const bool branch_taken_0x275174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275174u;
        // 0x275178: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275174) {
            ctx->pc = 0x275198u;
            goto label_275198;
        }
    }
    ctx->pc = 0x27517Cu;
label_27517c:
    // 0x27517c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27517cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x275180: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x275180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x275184: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x275184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x275188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27518c: 0x0  nop
    ctx->pc = 0x27518cu;
    // NOP
    // 0x275190: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x275190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x275194: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x275194u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_275198:
    // 0x275198: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x275198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27519c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2751a0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2751a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2751a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2751a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2751a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2751a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2751ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2751acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2751b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2751b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2751b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2751b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2751b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2751b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2751bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2751BCu;
    {
        const bool branch_taken_0x2751bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2751bc) {
            ctx->pc = 0x2751D4u;
            goto label_2751d4;
        }
    }
    ctx->pc = 0x2751C4u;
    // 0x2751c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2751c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2751c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2751c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2751cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2751CCu;
    {
        const bool branch_taken_0x2751cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751CCu;
        // 0x2751d0: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751cc) {
            ctx->pc = 0x2751F0u;
            goto label_2751f0;
        }
    }
    ctx->pc = 0x2751D4u;
label_2751d4:
    // 0x2751d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2751d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2751d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2751dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2751dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2751e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2751e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2751e4: 0x0  nop
    ctx->pc = 0x2751e4u;
    // NOP
    // 0x2751e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2751e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2751ec: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2751ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2751f0:
    // 0x2751f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2751F0u;
    {
        const bool branch_taken_0x2751f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2751f0) {
            ctx->pc = 0x275220u;
            goto label_275220;
        }
    }
    ctx->pc = 0x2751F8u;
    // 0x2751f8: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x2751f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2751fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2751fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275200: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x275200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x275204: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x275204u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x275208: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x275208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x27520c: 0x9205000e  lbu         $a1, 0xE($s0)
    ctx->pc = 0x27520cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x275210: 0xc09d3e8  jal         func_274FA0
    ctx->pc = 0x275210u;
    SET_GPR_U32(ctx, 31, 0x275218u);
    ctx->pc = 0x275214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275210u;
    // 0x275214: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FA0u, 0x275210u, 0x275218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275218u;
label_275218:
    // 0x275218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275218u;
    {
        const bool branch_taken_0x275218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275218u;
        // 0x27521c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275218) {
            ctx->pc = 0x275228u;
            goto label_275228;
        }
    }
    ctx->pc = 0x275220u;
label_275220:
    // 0x275220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275224: 0x0  nop
    ctx->pc = 0x275224u;
    // NOP
label_275228:
    // 0x275228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27522c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27522cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275230: 0x3e00008  jr          $ra
    ctx->pc = 0x275230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275230u;
        // 0x275234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275238u;
}
