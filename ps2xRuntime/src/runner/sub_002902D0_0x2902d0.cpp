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

// Function: sub_002902D0
// Address: 0x2902d0 - 0x290530
void sub_002902D0_0x2902d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002902D0_0x2902d0");
#endif

    switch (ctx->pc) {
        case 0x290368u: goto label_290368;
        case 0x290370u: goto label_290370;
        case 0x29037cu: goto label_29037c;
        case 0x290460u: goto label_290460;
        case 0x290480u: goto label_290480;
        case 0x290490u: goto label_290490;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904f8u: goto label_2904f8;
        case 0x290500u: goto label_290500;
        case 0x290510u: goto label_290510;
        default: break;
    }

    ctx->pc = 0x2902d0u;

    // 0x2902d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2902d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2902d4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2902d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2902d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2902d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2902dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2902dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2902e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2902e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2902e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2902e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2902e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2902e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2902ec: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2902ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2902f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2902f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2902f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2902f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2902f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2902f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2902fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2902fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290304: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x290308: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x290308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x29030c: 0xc4a50040  lwc1        $f5, 0x40($a1)
    ctx->pc = 0x29030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x290310: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x290314: 0xc4a40044  lwc1        $f4, 0x44($a1)
    ctx->pc = 0x290314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x290318: 0xc4a30048  lwc1        $f3, 0x48($a1)
    ctx->pc = 0x290318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29031c: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x29031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290320: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x290320u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x290324: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x290324u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x290328: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x290328u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29032c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x29032cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x290330: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x290330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290334: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x290334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x290338: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29033c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29033cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290340: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290340u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290344: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x290344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290348: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x290348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29034c: 0x0  nop
    ctx->pc = 0x29034cu;
    // NOP
    // 0x290350: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x290350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x290354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x290358: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x290358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x29035c: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x29035cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290360: 0xc09d210  jal         func_274840
    ctx->pc = 0x290360u;
    SET_GPR_U32(ctx, 31, 0x290368u);
    ctx->pc = 0x290364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290360u;
    // 0x290364: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x290360u, 0x290368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290368u;
label_290368:
    // 0x290368: 0xc0a43fc  jal         func_290FF0
    ctx->pc = 0x290368u;
    SET_GPR_U32(ctx, 31, 0x290370u);
    ctx->pc = 0x29036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290368u;
    // 0x29036c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x290368u, 0x290370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290370u;
label_290370:
    // 0x290370: 0xa3a20089  sb          $v0, 0x89($sp)
    ctx->pc = 0x290370u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x290374: 0xc0a4408  jal         func_291020
    ctx->pc = 0x290374u;
    SET_GPR_U32(ctx, 31, 0x29037Cu);
    ctx->pc = 0x290378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290374u;
    // 0x290378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x290374u, 0x29037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29037Cu;
label_29037c:
    // 0x29037c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29037cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290384: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x290384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x290388: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x290388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29038c: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x29038cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
    // 0x290390: 0x14443c  dsll32      $t0, $s4, 16
    ctx->pc = 0x290390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 16));
    // 0x290394: 0xa3a5008c  sb          $a1, 0x8C($sp)
    ctx->pc = 0x290394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 140), (uint8_t)GPR_U32(ctx, 5));
    // 0x290398: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x29039c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x29039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2903a0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2903a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2903a4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2903a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2903a8: 0x24030215  addiu       $v1, $zero, 0x215
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 533));
    // 0x2903ac: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2903acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2903b0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2903b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2903b4: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2903b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2903b8: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2903b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2903bc: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2903bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2903c0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2903c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2903c4: 0x1223004e  beq         $s1, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2903C4u;
    {
        const bool branch_taken_0x2903c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903C4u;
        // 0x2903c8: 0xafa80060  sw          $t0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903c4) {
            ctx->pc = 0x290500u;
            goto label_290500;
        }
    }
    ctx->pc = 0x2903CCu;
    // 0x2903cc: 0x24030214  addiu       $v1, $zero, 0x214
    ctx->pc = 0x2903ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2903d0: 0x12230045  beq         $s1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2903D0u;
    {
        const bool branch_taken_0x2903d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2903D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903D0u;
        // 0x2903d4: 0x24030213  addiu       $v1, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903d0) {
            ctx->pc = 0x2904E8u;
            goto label_2904e8;
        }
    }
    ctx->pc = 0x2903D8u;
    // 0x2903d8: 0x1223002f  beq         $s1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2903D8u;
    {
        const bool branch_taken_0x2903d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2903d8) {
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x2903E0u;
    // 0x2903e0: 0x12250029  beq         $s1, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2903E0u;
    {
        const bool branch_taken_0x2903e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x2903E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903E0u;
        // 0x2903e4: 0x24030202  addiu       $v1, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903e0) {
            ctx->pc = 0x290488u;
            goto label_290488;
        }
    }
    ctx->pc = 0x2903E8u;
    // 0x2903e8: 0x12230049  beq         $s1, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2903E8u;
    {
        const bool branch_taken_0x2903e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2903e8) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x2903F0u;
    // 0x2903f0: 0x24030209  addiu       $v1, $zero, 0x209
    ctx->pc = 0x2903f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2903f4: 0x1223001c  beq         $s1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2903F4u;
    {
        const bool branch_taken_0x2903f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2903F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903F4u;
        // 0x2903f8: 0x2403020a  addiu       $v1, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903f4) {
            ctx->pc = 0x290468u;
            goto label_290468;
        }
    }
    ctx->pc = 0x2903FCu;
    // 0x2903fc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2903FCu;
    {
        const bool branch_taken_0x2903fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2903fc) {
            ctx->pc = 0x290410u;
            goto label_290410;
        }
    }
    ctx->pc = 0x290404u;
    // 0x290404: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x290404u;
    {
        const bool branch_taken_0x290404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290404) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x29040Cu;
    // 0x29040c: 0x0  nop
    ctx->pc = 0x29040cu;
    // NOP
label_290410:
    // 0x290410: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x290410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x290414: 0xc662001c  lwc1        $f2, 0x1C($s3)
    ctx->pc = 0x290414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29041c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290420: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x290420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290424: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x290424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x290428: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x290428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x29042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290430: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x290430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x290434: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x290434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x290438: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x290438u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29043c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29043cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290440: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x290440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x290444: 0x0  nop
    ctx->pc = 0x290444u;
    // NOP
    // 0x290448: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x290448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29044c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29044cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x290450: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x290450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x290454: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x290454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x290458: 0xc0a3b70  jal         func_28EDC0
    ctx->pc = 0x290458u;
    SET_GPR_U32(ctx, 31, 0x290460u);
    ctx->pc = 0x29045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290458u;
    // 0x29045c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EDC0u, 0x290458u, 0x290460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290460u;
label_290460:
    // 0x290460: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290460) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x290468u;
label_290468:
    // 0x290468: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x290468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x29046c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290470: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x290470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290474: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x290478: 0xc0d19d4  jal         func_346750
    ctx->pc = 0x290478u;
    SET_GPR_U32(ctx, 31, 0x290480u);
    ctx->pc = 0x29047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290478u;
    // 0x29047c: 0x26660040  addiu       $a2, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346750u, 0x290478u, 0x290480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290480u;
label_290480:
    // 0x290480: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x290480u;
    {
        const bool branch_taken_0x290480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290480) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x290488u;
label_290488:
    // 0x290488: 0xc09d1ac  jal         func_2746B0
    ctx->pc = 0x290488u;
    SET_GPR_U32(ctx, 31, 0x290490u);
    ctx->pc = 0x29048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290488u;
    // 0x29048c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2746B0u, 0x290488u, 0x290490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290490u;
label_290490:
    // 0x290490: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x290490u;
    {
        const bool branch_taken_0x290490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290490) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x290498u;
label_290498:
    // 0x290498: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x290498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29049c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x29049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2904a0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2904a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2904a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2904a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2904a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2904a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904ac: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x2904acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x2904b0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2904b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2904b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2904b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2904b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2904b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2904bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2904bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2904c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2904c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2904c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2904c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2904c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2904c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2904cc: 0x0  nop
    ctx->pc = 0x2904ccu;
    // NOP
    // 0x2904d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2904d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2904d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2904d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2904d8: 0xc0d1ba4  jal         func_346E90
    ctx->pc = 0x2904D8u;
    SET_GPR_U32(ctx, 31, 0x2904E0u);
    ctx->pc = 0x2904DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904D8u;
    // 0x2904dc: 0x30490fff  andi        $t1, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x346E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346E90u, 0x2904D8u, 0x2904E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904E0u;
label_2904e0:
    // 0x2904e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2904E0u;
    {
        const bool branch_taken_0x2904e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2904e0) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x2904E8u;
label_2904e8:
    // 0x2904e8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2904e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2904ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2904ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904f0: 0xc0d1be8  jal         func_346FA0
    ctx->pc = 0x2904F0u;
    SET_GPR_U32(ctx, 31, 0x2904F8u);
    ctx->pc = 0x2904F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2904F0u;
    // 0x2904f4: 0x27848ba0  addiu       $a0, $gp, -0x7460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FA0u, 0x2904F0u, 0x2904F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2904F8u;
label_2904f8:
    // 0x2904f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2904F8u;
    {
        const bool branch_taken_0x2904f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2904f8) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x290500u;
label_290500:
    // 0x290500: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x290500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x290504: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x290504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290508: 0xc0d1994  jal         func_346650
    ctx->pc = 0x290508u;
    SET_GPR_U32(ctx, 31, 0x290510u);
    ctx->pc = 0x29050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290508u;
    // 0x29050c: 0x27848ba0  addiu       $a0, $gp, -0x7460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346650u, 0x290508u, 0x290510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290510u;
label_290510:
    // 0x290510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x290514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x290518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29051c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29051cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290528: 0x3e00008  jr          $ra
    ctx->pc = 0x290528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290528u;
        // 0x29052c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290530u;
}
