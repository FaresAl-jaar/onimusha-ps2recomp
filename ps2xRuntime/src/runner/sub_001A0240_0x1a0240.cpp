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

// Function: sub_001A0240
// Address: 0x1a0240 - 0x1a07e4
void sub_001A0240_0x1a0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0240_0x1a0240");
#endif

    switch (ctx->pc) {
        case 0x1a02e8u: goto label_1a02e8;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a07b4u: goto label_1a07b4;
        default: break;
    }

    ctx->pc = 0x1a0240u;

    // 0x1a0240: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a0244: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a0248: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a0248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a024c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0250: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a0250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a0254: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a0254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a0258: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a0258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a025c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a025cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a0260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a0264: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a0264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a0268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a026c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a026cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a0270: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a0270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a0274: 0x9033cea4  lbu         $s3, -0x315C($at)
    ctx->pc = 0x1a0274u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1a0278: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x1a0278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a027c: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a0280: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x1a0280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1a0284: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a0284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a0288: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a028c: 0x8ce90078  lw          $t1, 0x78($a3)
    ctx->pc = 0x1a028cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x1a0290: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x1a0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x1a0294: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a0294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a0298: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a0298u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a029c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a029cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a02a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a02a4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a02a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a02ac: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1a02b0: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a02b4: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x1a02b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a02b8: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x1a02b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a02bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A02BCu;
    {
        const bool branch_taken_0x1a02bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02BCu;
        // 0x1a02c0: 0x8c910010  lw          $s1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02bc) {
            ctx->pc = 0x1A02C8u;
            goto label_1a02c8;
        }
    }
    ctx->pc = 0x1A02C4u;
    // 0x1a02c4: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x1a02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_1a02c8:
    // 0x1a02c8: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x1a02cc: 0x14600108  bnez        $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x1A02CCu;
    {
        const bool branch_taken_0x1a02cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a02cc) {
            ctx->pc = 0x1A06F0u;
            goto label_1a06f0;
        }
    }
    ctx->pc = 0x1A02D4u;
    // 0x1a02d4: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1a02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1a02d8: 0x14600105  bnez        $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x1A02D8u;
    {
        const bool branch_taken_0x1a02d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02D8u;
        // 0x1a02dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02d8) {
            ctx->pc = 0x1A06F0u;
            goto label_1a06f0;
        }
    }
    ctx->pc = 0x1A02E0u;
    // 0x1a02e0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1A02E0u;
    {
        const bool branch_taken_0x1a02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a02e0) {
            ctx->pc = 0x1A04F8u;
            goto label_1a04f8;
        }
    }
    ctx->pc = 0x1A02E8u;
label_1a02e8:
    // 0x1a02e8: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x1a02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a02ec: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1a02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a02f0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1a02f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1a02f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a02f8: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a02fc: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x1a02fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a0300: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a0300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a0304: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1a0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0308: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a030c: 0x3c033d04  lui         $v1, 0x3D04
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15620 << 16));
    // 0x1a0310: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1a0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a0314: 0x34632108  ori         $v1, $v1, 0x2108
    ctx->pc = 0x1a0314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8456);
    // 0x1a0318: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a0318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a031c: 0x0  nop
    ctx->pc = 0x1a031cu;
    // NOP
    // 0x1a0320: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a0320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1a0324: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1a0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0328: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1a0328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1a032c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1a032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0330: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1a0330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1a0334: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x1a0334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
    // 0x1a0338: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1a0338u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a033c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a033cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0340: 0x30a7001f  andi        $a3, $a1, 0x1F
    ctx->pc = 0x1a0340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a0344: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1a0348: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a0348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1a034c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1a034cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a0350: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a0354: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1a0354u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0358: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1a0358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a035c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1a035cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0360: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0364: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1a0364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1a0368: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a036c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0370: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x1a0370u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a0374: 0xc041442  jal         func_105108
    ctx->pc = 0x1A0374u;
    SET_GPR_U32(ctx, 31, 0x1A037Cu);
    ctx->pc = 0x1A0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0374u;
    // 0x1a0378: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A0374u, 0x1A037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A037Cu;
label_1a037c:
    // 0x1a037c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a037cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1a0380: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1a0380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a0384: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A0384u;
    SET_GPR_U32(ctx, 31, 0x1A038Cu);
    ctx->pc = 0x1A0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0384u;
    // 0x1a0388: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A0384u, 0x1A038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A038Cu;
label_1a038c:
    // 0x1a038c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1a0390: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a0394: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a0394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a0398: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a0398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a039c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a039cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a03a0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a03a4: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1a03a8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a03ac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1a03acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a03b0: 0xc041442  jal         func_105108
    ctx->pc = 0x1A03B0u;
    SET_GPR_U32(ctx, 31, 0x1A03B8u);
    ctx->pc = 0x1A03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A03B0u;
    // 0x1a03b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A03B0u, 0x1A03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03B8u;
label_1a03b8:
    // 0x1a03b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a03b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a03bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a03c0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A03C0u;
    SET_GPR_U32(ctx, 31, 0x1A03C8u);
    ctx->pc = 0x1A03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A03C0u;
    // 0x1a03c4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A03C0u, 0x1A03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A03C8u;
label_1a03c8:
    // 0x1a03c8: 0x27ab00d0  addiu       $t3, $sp, 0xD0
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a03cc: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1a03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a03d0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a03d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a03d4: 0x79640000  lq          $a0, 0x0($t3)
    ctx->pc = 0x1a03d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a03d8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a03d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a03dc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1a03dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1a03e0: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a03e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a03e4: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1a03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1a03e8: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x1a03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x1a03ec: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a03f0: 0x156080  sll         $t4, $s5, 2
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a03f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1a03f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a03f8: 0x155080  sll         $t2, $s5, 2
    ctx->pc = 0x1a03f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a03fc: 0x24843ac0  addiu       $a0, $a0, 0x3AC0
    ctx->pc = 0x1a03fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15040));
    // 0x1a0400: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x1a0400u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0404: 0x154080  sll         $t0, $s5, 2
    ctx->pc = 0x1a0404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a0408: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a040c: 0x24633ac0  addiu       $v1, $v1, 0x3AC0
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15040));
    // 0x1a0410: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a0410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a0414: 0x7d690000  sq          $t1, 0x0($t3)
    ctx->pc = 0x1a0414u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 9));
    // 0x1a0418: 0x8e8b0050  lw          $t3, 0x50($s4)
    ctx->pc = 0x1a0418u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1a041c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1a041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0420: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1a0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0424: 0x8e890010  lw          $t1, 0x10($s4)
    ctx->pc = 0x1a0424u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1a0428: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1a0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a042c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1a042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0430: 0x16c3821  addu        $a3, $t3, $t4
    ctx->pc = 0x1a0430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1a0434: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1a0434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a0438: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a043c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1a0440: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x1a0440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1a0444: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1a0444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1a0448: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1a0448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1a044c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1a044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a0450: 0x8e890050  lw          $t1, 0x50($s4)
    ctx->pc = 0x1a0450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1a0454: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1a0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0458: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1a0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a045c: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1a0460: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0464: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1a0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0468: 0x12a2821  addu        $a1, $t1, $t2
    ctx->pc = 0x1a0468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a046c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a046cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0470: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a0474: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a0478: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1a0478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a047c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1a047cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1a0480: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1a0480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1a0484: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1a0484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1a0488: 0x8e870050  lw          $a3, 0x50($s4)
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1a048c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1a048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0490: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1a0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0494: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1a0494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a0498: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1a0498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a049c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1a049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a04a0: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a04a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a04a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a04ac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a04acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a04b0: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1a04b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a04b4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1a04b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a04b8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1a04b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a04bc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1a04bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a04c0: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1a04c4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1a04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a04c8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1a04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a04cc: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1a04d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a04d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a04d4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a04d8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a04dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a04e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a04e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a04e8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1a04e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a04ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1a04ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a04f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1a04f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a04f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a04f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1a04f8:
    // 0x1a04f8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1a04fc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a0500: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0504: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a0504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0508: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a050c: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1a050cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a0510: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
    ctx->pc = 0x1A0510u;
    {
        const bool branch_taken_0x1a0510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0510) {
            ctx->pc = 0x1A02E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a02e8;
        }
    }
    ctx->pc = 0x1A0518u;
    // 0x1a0518: 0x8e93002c  lw          $s3, 0x2C($s4)
    ctx->pc = 0x1a0518u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1a051c: 0x8e920030  lw          $s2, 0x30($s4)
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1a0520: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A0520u;
    {
        const bool branch_taken_0x1a0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0520u;
        // 0x1a0524: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0520) {
            ctx->pc = 0x1A06A8u;
            goto label_1a06a8;
        }
    }
    ctx->pc = 0x1A0528u;
label_1a0528:
    // 0x1a0528: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1A0528u;
    {
        const bool branch_taken_0x1a0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0528u;
        // 0x1a052c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0528) {
            ctx->pc = 0x1A0698u;
            goto label_1a0698;
        }
    }
    ctx->pc = 0x1A0530u;
label_1a0530:
    // 0x1a0530: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a0530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0538: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a0538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a053c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A053Cu;
    {
        const bool branch_taken_0x1a053c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A053Cu;
        // 0x1a0540: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a053c) {
            ctx->pc = 0x1A0548u;
            goto label_1a0548;
        }
    }
    ctx->pc = 0x1A0544u;
    // 0x1a0544: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a0548:
    // 0x1a0548: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0548u;
    {
        const bool branch_taken_0x1a0548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0548) {
            ctx->pc = 0x1A0558u;
            goto label_1a0558;
        }
    }
    ctx->pc = 0x1A0550u;
    // 0x1a0550: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a0554: 0x0  nop
    ctx->pc = 0x1a0554u;
    // NOP
label_1a0558:
    // 0x1a0558: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1a0558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1a055c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1a055cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a0560: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0560u;
    {
        const bool branch_taken_0x1a0560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0560) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0568u;
    // 0x1a0568: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a056c: 0x0  nop
    ctx->pc = 0x1a056cu;
    // NOP
label_1a0570:
    // 0x1a0570: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a0574: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1a0574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a0578: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0578u;
    {
        const bool branch_taken_0x1a0578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0578) {
            ctx->pc = 0x1A0588u;
            goto label_1a0588;
        }
    }
    ctx->pc = 0x1A0580u;
    // 0x1a0580: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a0584: 0x0  nop
    ctx->pc = 0x1a0584u;
    // NOP
label_1a0588:
    // 0x1a0588: 0x70931018  mult1       $v0, $a0, $s3
    ctx->pc = 0x1a0588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a058c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0590: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1a0594: 0x933018  mult        $a2, $a0, $s3
    ctx->pc = 0x1a0594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a0598: 0x71131018  mult1       $v0, $t0, $s3
    ctx->pc = 0x1a0598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a059c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a05a0: 0x8e890010  lw          $t1, 0x10($s4)
    ctx->pc = 0x1a05a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1a05a4: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1a05a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a05a8: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x1a05a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a05ac: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1a05acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a05b0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a05b4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a05b8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a05bc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1a05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a05c0: 0x78cb0000  lq          $t3, 0x0($a2)
    ctx->pc = 0x1a05c0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a05c4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a05c8: 0x792a0000  lq          $t2, 0x0($t1)
    ctx->pc = 0x1a05c8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a05cc: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x1a05ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a05d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a05d4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1a05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a05d8: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x1a05d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x1a05dc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1a05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a05e0: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a05e4: 0x2332018  mult        $a0, $s1, $s3
    ctx->pc = 0x1a05e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a05e8: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1a05e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1a05ec: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1a05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a05f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a05f4: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a05f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a05f8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1a05f8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a05fc: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1a05fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1a0600: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1a0604: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1a0608: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1a0608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1a060c: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1a060cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a0610: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1a0610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a0614: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x1a0614u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0618: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a0618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a061c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1a061cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1a0620: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a0620u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0624: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0624u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0628: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a0628u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a062c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1a0630: 0xc041460  jal         func_105180
    ctx->pc = 0x1A0630u;
    SET_GPR_U32(ctx, 31, 0x1A0638u);
    ctx->pc = 0x1A0634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0630u;
    // 0x1a0634: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A0630u, 0x1A0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0638u;
label_1a0638:
    // 0x1a0638: 0x2332018  mult        $a0, $s1, $s3
    ctx->pc = 0x1a0638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a063c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1a0640: 0x72331018  mult1       $v0, $s1, $s3
    ctx->pc = 0x1a0640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0644: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a0648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a0648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a064c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a0650: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a0654: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a0654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0658: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1A0658u;
    SET_GPR_U32(ctx, 31, 0x1A0660u);
    ctx->pc = 0x1A065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0658u;
    // 0x1a065c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1A0658u, 0x1A0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0660u;
label_1a0660:
    // 0x1a0660: 0x2333018  mult        $a2, $s1, $s3
    ctx->pc = 0x1a0660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a0664: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x1a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1a0668: 0x72332018  mult1       $a0, $s1, $s3
    ctx->pc = 0x1a0668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a066c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a0670: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1a0670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a0674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0678: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a067c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1a0680: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a0684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0688: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a068c: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x1a068cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0694: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1a0694u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
label_1a0698:
    // 0x1a0698: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x1a0698u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a069c: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1A069Cu;
    {
        const bool branch_taken_0x1a069c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a069c) {
            ctx->pc = 0x1A0530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0530;
        }
    }
    ctx->pc = 0x1A06A4u;
    // 0x1a06a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a06a8:
    // 0x1a06a8: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x1a06a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a06ac: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1A06ACu;
    {
        const bool branch_taken_0x1a06ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06ACu;
        // 0x1a06b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06ac) {
            ctx->pc = 0x1A0528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0528;
        }
    }
    ctx->pc = 0x1A06B4u;
    // 0x1a06b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A06B8u;
    {
        const bool branch_taken_0x1a06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B8u;
        // 0x1a06bc: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b8) {
            ctx->pc = 0x1A06D0u;
            goto label_1a06d0;
        }
    }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0xc06808c  jal         func_1A0230
    ctx->pc = 0x1A06C0u;
    SET_GPR_U32(ctx, 31, 0x1A06C8u);
    ctx->pc = 0x1A06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06C0u;
    // 0x1a06c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0230u, 0x1A06C0u, 0x1A06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06C8u;
label_1a06c8:
    // 0x1a06c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a06c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a06cc: 0x0  nop
    ctx->pc = 0x1a06ccu;
    // NOP
label_1a06d0:
    // 0x1a06d0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x1a06d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a06d4: 0x0  nop
    ctx->pc = 0x1a06d4u;
    // NOP
    // 0x1a06d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A06D8u;
    {
        const bool branch_taken_0x1a06d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06d8) {
            ctx->pc = 0x1A06C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a06c0;
        }
    }
    ctx->pc = 0x1A06E0u;
    // 0x1a06e0: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x1a06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x1a06e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a06e8: 0xae830044  sw          $v1, 0x44($s4)
    ctx->pc = 0x1a06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
    // 0x1a06ec: 0x0  nop
    ctx->pc = 0x1a06ecu;
    // NOP
label_1a06f0:
    // 0x1a06f0: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x1a06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1a06f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a06f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a06f8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1a06f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a06fc: 0x10c50022  beq         $a2, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06FCu;
        // 0x1a0700: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A0788u;
            goto label_1a0788;
        }
    }
    ctx->pc = 0x1A0704u;
    // 0x1a0704: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1a0704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1a0708: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0708u;
    {
        const bool branch_taken_0x1a0708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0708u;
        // 0x1a070c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0708) {
            ctx->pc = 0x1A0780u;
            goto label_1a0780;
        }
    }
    ctx->pc = 0x1A0710u;
    // 0x1a0710: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A0710u;
    {
        const bool branch_taken_0x1a0710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0710) {
            ctx->pc = 0x1A0780u;
            goto label_1a0780;
        }
    }
    ctx->pc = 0x1A0718u;
    // 0x1a0718: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1a0718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a071c: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A071Cu;
    {
        const bool branch_taken_0x1a071c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a071c) {
            ctx->pc = 0x1A0780u;
            goto label_1a0780;
        }
    }
    ctx->pc = 0x1A0724u;
    // 0x1a0724: 0x10c70016  beq         $a2, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A0724u;
    {
        const bool branch_taken_0x1a0724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1A0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0724u;
        // 0x1a0728: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0724) {
            ctx->pc = 0x1A0780u;
            goto label_1a0780;
        }
    }
    ctx->pc = 0x1A072Cu;
    // 0x1a072c: 0x10c40014  beq         $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A072Cu;
    {
        const bool branch_taken_0x1a072c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A072Cu;
        // 0x1a0730: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a072c) {
            ctx->pc = 0x1A0780u;
            goto label_1a0780;
        }
    }
    ctx->pc = 0x1A0734u;
    // 0x1a0734: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0734u;
    {
        const bool branch_taken_0x1a0734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0734) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A073Cu;
    // 0x1a073c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0740: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0740u;
    {
        const bool branch_taken_0x1a0740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0740u;
        // 0x1a0744: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0740) {
            ctx->pc = 0x1A0770u;
            goto label_1a0770;
        }
    }
    ctx->pc = 0x1A0748u;
    // 0x1a0748: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0748u;
    {
        const bool branch_taken_0x1a0748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0748) {
            ctx->pc = 0x1A0768u;
            goto label_1a0768;
        }
    }
    ctx->pc = 0x1A0750u;
    // 0x1a0750: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0750u;
    {
        const bool branch_taken_0x1a0750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0750) {
            ctx->pc = 0x1A0760u;
            goto label_1a0760;
        }
    }
    ctx->pc = 0x1A0758u;
    // 0x1a0758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0758u;
    {
        const bool branch_taken_0x1a0758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0758) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0760u;
label_1a0760:
    // 0x1a0760: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0760u;
    {
        const bool branch_taken_0x1a0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0760u;
        // 0x1a0764: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0760) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0768u;
label_1a0768:
    // 0x1a0768: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0768u;
    {
        const bool branch_taken_0x1a0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0768u;
        // 0x1a076c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0768) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0770u;
    {
        const bool branch_taken_0x1a0770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0770u;
        // 0x1a0774: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0770) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0778u;
label_1a0778:
    // 0x1a0778: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0778u;
    {
        const bool branch_taken_0x1a0778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0778u;
        // 0x1a077c: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0778) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0780u;
label_1a0780:
    // 0x1a0780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0780u;
    {
        const bool branch_taken_0x1a0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0780u;
        // 0x1a0784: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0780) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A0788u;
label_1a0788:
    // 0x1a0788: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a078c: 0x0  nop
    ctx->pc = 0x1a078cu;
    // NOP
label_1a0790:
    // 0x1a0790: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a0794: 0xe32006  srlv        $a0, $v1, $a3
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x1a0798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a079c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x1a07a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a07a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a07a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A07A4u;
    {
        const bool branch_taken_0x1a07a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07A4u;
        // 0x1a07a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07a4) {
            ctx->pc = 0x1A07B8u;
            goto label_1a07b8;
        }
    }
    ctx->pc = 0x1A07ACu;
    // 0x1a07ac: 0xc06808c  jal         func_1A0230
    ctx->pc = 0x1A07ACu;
    SET_GPR_U32(ctx, 31, 0x1A07B4u);
    ctx->pc = 0x1A0230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0230u, 0x1A07ACu, 0x1A07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07B4u;
label_1a07b4:
    // 0x1a07b4: 0x0  nop
    ctx->pc = 0x1a07b4u;
    // NOP
label_1a07b8:
    // 0x1a07b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a07b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a07bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a07bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a07c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a07c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a07c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a07c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a07cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a07ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a07d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a07d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a07d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a07d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a07d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a07d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a07dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A07DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07DCu;
        // 0x1a07e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A07DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A07E4u;
}
