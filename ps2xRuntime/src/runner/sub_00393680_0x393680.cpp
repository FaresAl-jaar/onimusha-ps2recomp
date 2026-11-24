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

// Function: sub_00393680
// Address: 0x393680 - 0x394004
void sub_00393680_0x393680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393680_0x393680");
#endif

    switch (ctx->pc) {
        case 0x393734u: goto label_393734;
        case 0x393794u: goto label_393794;
        case 0x393910u: goto label_393910;
        case 0x393b78u: goto label_393b78;
        default: break;
    }

    ctx->pc = 0x393680u;

    // 0x393680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x393680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x393684: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x393684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x393688: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x393688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39368c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x39368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x393690: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x393690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x393694: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x393694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x393698: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x393698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39369c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3936a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3936a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3936a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3936a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3936a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3936ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3936acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3936b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3936b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3936b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3936b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3936b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3936b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3936bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3936bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3936c0: 0x9029cea4  lbu         $t1, -0x315C($at)
    ctx->pc = 0x3936c0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x3936c4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3936c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3936c8: 0x70023b89  pcpyld      $a3, $zero, $v0
    ctx->pc = 0x3936c8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3936cc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3936ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3936d0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x3936d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3936d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3936d8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3936d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3936dc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3936dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3936e0: 0x9400a  movz        $t0, $zero, $t1
    ctx->pc = 0x3936e0u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x3936e4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3936e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3936e8: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x3936e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3936ec: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3936ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3936f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3936f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3936f4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3936f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3936f8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3936f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3936fc: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x3936fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x393700: 0x4883c  dsll32      $s1, $a0, 0
    ctx->pc = 0x393700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 0));
    // 0x393704: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x393704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x393708: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39370c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x39370cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x393710: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x393710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393714: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x393714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x393718: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x393718u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x39371c: 0xaf868b2c  sw          $a2, -0x74D4($gp)
    ctx->pc = 0x39371cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 6));
    // 0x393720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393724: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x393724u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393728: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x393728u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x39372c: 0xc0e4cc4  jal         func_393310
    ctx->pc = 0x39372Cu;
    SET_GPR_U32(ctx, 31, 0x393734u);
    ctx->pc = 0x393730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39372Cu;
    // 0x393730: 0xaf928b30  sw          $s2, -0x74D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393310u, 0x39372Cu, 0x393734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393734u;
label_393734:
    // 0x393734: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x393734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x393738: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x393738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39373c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x39373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x393740: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x393740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x393744: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x393744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x393748: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39374c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393750: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x393750u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x393754: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x393754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x393758: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x393758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x39375c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x39375cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x393760: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x393760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x393764: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x393764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x393768: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x393768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x39376c: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x39376cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x393770: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x393770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x393774: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x393774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x393778: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x393778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x39377c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x39377cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393780: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x393780u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x393784: 0x96660016  lhu         $a2, 0x16($s3)
    ctx->pc = 0x393784u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x393788: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x393788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x39378c: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x39378Cu;
    SET_GPR_U32(ctx, 31, 0x393794u);
    ctx->pc = 0x393790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39378Cu;
    // 0x393790: 0x96650014  lhu         $a1, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x39378Cu, 0x393794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393794u;
label_393794:
    // 0x393794: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x393794u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x393798: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x393798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x39379c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3937a0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3937a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3937a4: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3937a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x3937a8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3937a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3937ac: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3937acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3937b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3937b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3937b4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3937b4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3937b8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3937b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3937bc: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3937bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3937c0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3937c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3937c4: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x3937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3937c8: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x3937c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
    // 0x3937cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3937ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3937d0: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3937d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3937d4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x3937d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x3937d8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3937d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3937dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3937dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3937e0: 0x24040356  addiu       $a0, $zero, 0x356
    ctx->pc = 0x3937e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x3937e4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3937e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3937e8: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x3937e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x3937ec: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3937ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3937f0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3937f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3937f4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x3937f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x3937f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3937f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3937fc: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x3937fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x393800: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x393800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393804: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x393804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x393808: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x393808u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
    // 0x39380c: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x39380cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x393810: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x393810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x393814: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393818: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x393818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39381c: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x39381cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x393820: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x393820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x393824: 0x3c044700  lui         $a0, 0x4700
    ctx->pc = 0x393824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18176 << 16));
    // 0x393828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39382c: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x39382cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x393830: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x393830u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x393834: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x393834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x393838: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x393838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x39383c: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x39383cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x393840: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x393840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393844: 0x3c024480  lui         $v0, 0x4480
    ctx->pc = 0x393844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17536 << 16));
    // 0x393848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x393848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39384c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x39384cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393850: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x393850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x393854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x393854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x393858: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39385c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x39385cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x393860: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x393860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x393864: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x393864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x393868: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x393868u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x39386c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x39386cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x393870: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x393870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x393874: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x393874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x393878: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x393878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x39387c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393880: 0x0  nop
    ctx->pc = 0x393880u;
    // NOP
    // 0x393884: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x393884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x393888: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x393888u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x39388c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x39388cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x393890: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x393894: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x393894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x393898: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x393898u;
    {
        const bool branch_taken_0x393898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393898u;
        // 0x39389c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393898) {
            ctx->pc = 0x3938B0u;
            goto label_3938b0;
        }
    }
    ctx->pc = 0x3938A0u;
    // 0x3938a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3938a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3938a4: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x3938a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x3938a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3938A8u;
    {
        const bool branch_taken_0x3938a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3938ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938A8u;
        // 0x3938ac: 0x2d610081  sltiu       $at, $t3, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3938a8) {
            ctx->pc = 0x3938CCu;
            goto label_3938cc;
        }
    }
    ctx->pc = 0x3938B0u;
label_3938b0:
    // 0x3938b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3938b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3938b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3938b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3938b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3938b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3938bc: 0x440b0800  mfc1        $t3, $f1
    ctx->pc = 0x3938bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x3938c0: 0x0  nop
    ctx->pc = 0x3938c0u;
    // NOP
    // 0x3938c4: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x3938c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x3938c8: 0x2d610081  sltiu       $at, $t3, 0x81
    ctx->pc = 0x3938c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_3938cc:
    // 0x3938cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3938CCu;
    {
        const bool branch_taken_0x3938cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3938cc) {
            ctx->pc = 0x3938D8u;
            goto label_3938d8;
        }
    }
    ctx->pc = 0x3938D4u;
    // 0x3938d4: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x3938d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3938d8:
    // 0x3938d8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3938d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3938dc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3938dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3938e0: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x3938e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3938e4: 0x34478889  ori         $a3, $v0, 0x8889
    ctx->pc = 0x3938e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3938e8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3938e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3938ec: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3938f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3938f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3938f4: 0x34468080  ori         $a2, $v0, 0x8080
    ctx->pc = 0x3938f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3938f8: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x3938f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3938fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3938fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393900: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x393900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393904: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x393904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x393908: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x393908u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39390c: 0x0  nop
    ctx->pc = 0x39390cu;
    // NOP
label_393910:
    // 0x393910: 0x10a4823  subu        $t1, $t0, $t2
    ctx->pc = 0x393910u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x393914: 0x1894818  mult        $t1, $t4, $t1
    ctx->pc = 0x393914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x393918: 0xe90019  multu       $a3, $t1
    ctx->pc = 0x393918u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x39391c: 0x0  nop
    ctx->pc = 0x39391cu;
    // NOP
    // 0x393920: 0x0  nop
    ctx->pc = 0x393920u;
    // NOP
    // 0x393924: 0x4810  mfhi        $t1
    ctx->pc = 0x393924u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x393928: 0x16a001b  divu        $zero, $t3, $t2
    ctx->pc = 0x393928u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x39392c: 0x94902  srl         $t1, $t1, 4
    ctx->pc = 0x39392cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x393930: 0x0  nop
    ctx->pc = 0x393930u;
    // NOP
    // 0x393934: 0x7012  mflo        $t6
    ctx->pc = 0x393934u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x393938: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x393938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x39393c: 0x2d41001f  sltiu       $at, $t2, 0x1F
    ctx->pc = 0x39393cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x393940: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x393940u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x393944: 0xe7638  dsll        $t6, $t6, 24
    ctx->pc = 0x393944u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 24);
    // 0x393948: 0x1c67025  or          $t6, $t6, $a2
    ctx->pc = 0x393948u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
    // 0x39394c: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x39394cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
    // 0x393950: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x393950u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x393954: 0x966e001a  lhu         $t6, 0x1A($s3)
    ctx->pc = 0x393954u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x393958: 0x966f0018  lhu         $t7, 0x18($s3)
    ctx->pc = 0x393958u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x39395c: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x39395cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x393960: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x393960u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x393964: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x393964u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x393968: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x393968u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x39396c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x39396cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x393970: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x393970u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x393974: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x393974u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x393978: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x393978u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x39397c: 0xfe4e0010  sd          $t6, 0x10($s2)
    ctx->pc = 0x39397cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 14));
    // 0x393980: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x393980u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x393984: 0x966e0020  lhu         $t6, 0x20($s3)
    ctx->pc = 0x393984u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x393988: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39398c: 0x966f0022  lhu         $t7, 0x22($s3)
    ctx->pc = 0x39398cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x393990: 0x1c97023  subu        $t6, $t6, $t1
    ctx->pc = 0x393990u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x393994: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x393994u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x393998: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x393998u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x39399c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x39399cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x3939a0: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x3939a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x3939a4: 0x1c37025  or          $t6, $t6, $v1
    ctx->pc = 0x3939a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
    // 0x3939a8: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x3939a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
    // 0x3939ac: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3939acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3939b0: 0x966e001e  lhu         $t6, 0x1E($s3)
    ctx->pc = 0x3939b0u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x3939b4: 0x966f001c  lhu         $t7, 0x1C($s3)
    ctx->pc = 0x3939b4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3939b8: 0x25ce0009  addiu       $t6, $t6, 0x9
    ctx->pc = 0x3939b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9));
    // 0x3939bc: 0x25ef0009  addiu       $t7, $t7, 0x9
    ctx->pc = 0x3939bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9));
    // 0x3939c0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x3939c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x3939c4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x3939c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x3939c8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x3939c8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x3939cc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x3939ccu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x3939d0: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x3939d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x3939d4: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x3939d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x3939d8: 0xfe4e0010  sd          $t6, 0x10($s2)
    ctx->pc = 0x3939d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 14));
    // 0x3939dc: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3939dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3939e0: 0x96790020  lhu         $t9, 0x20($s3)
    ctx->pc = 0x3939e0u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3939e4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3939e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3939e8: 0x96780028  lhu         $t8, 0x28($s3)
    ctx->pc = 0x3939e8u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3939ec: 0x966e002a  lhu         $t6, 0x2A($s3)
    ctx->pc = 0x3939ecu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
    // 0x3939f0: 0x966f0022  lhu         $t7, 0x22($s3)
    ctx->pc = 0x3939f0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x3939f4: 0x338c021  addu        $t8, $t9, $t8
    ctx->pc = 0x3939f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x3939f8: 0x1384821  addu        $t1, $t1, $t8
    ctx->pc = 0x3939f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x3939fc: 0x9c03c  dsll32      $t8, $t1, 0
    ctx->pc = 0x3939fcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) << (32 + 0));
    // 0x393a00: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x393a00u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x393a04: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x393a04u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x393a08: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x393a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x393a0c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x393a0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x393a10: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x393a10u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x393a14: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x393a14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x393a18: 0x3094825  or          $t1, $t8, $t1
    ctx->pc = 0x393a18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) | GPR_U64(ctx, 9));
    // 0x393a1c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x393a1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x393a20: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x393a20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x393a24: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393a24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393a28: 0x1420ffb9  bnez        $at, . + 4 + (-0x47 << 2)
    ctx->pc = 0x393A28u;
    {
        const bool branch_taken_0x393a28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x393A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A28u;
        // 0x393a2c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a28) {
            ctx->pc = 0x393910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393910;
        }
    }
    ctx->pc = 0x393A30u;
    // 0x393a30: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x393a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x393a34: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x393a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x393a38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393a3c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x393a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x393a40: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x393a40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393a44: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x393a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x393a48: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x393a48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x393a4c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x393a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x393a50: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x393a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x393a54: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x393a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x393a58: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x393a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x393a5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x393a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a60: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x393a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x393a64: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x393a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x393a68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x393a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x393a6c: 0xfe440010  sd          $a0, 0x10($s2)
    ctx->pc = 0x393a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 4));
    // 0x393a70: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x393a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x393a74: 0xfe430018  sd          $v1, 0x18($s2)
    ctx->pc = 0x393a74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 3));
    // 0x393a78: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x393a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393a7c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393a80: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x393a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x393a84: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x393a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x393a88: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x393a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x393a8c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x393a8cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a90: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x393a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x393a94: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x393a94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x393a98: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x393a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x393a9c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x393a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x393aa0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x393aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x393aa4: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x393aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
    // 0x393aa8: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x393aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x393aac: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393ab0: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x393ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x393ab4: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x393ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x393ab8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x393ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393abc: 0xfe470008  sd          $a3, 0x8($s2)
    ctx->pc = 0x393abcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 7));
    // 0x393ac0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x393ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x393ac4: 0xfe460010  sd          $a2, 0x10($s2)
    ctx->pc = 0x393ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 6));
    // 0x393ac8: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x393ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x393acc: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x393accu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x393ad0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393ad4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393ad8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x393ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x393adc: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x393adcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x393ae0: 0x24030356  addiu       $v1, $zero, 0x356
    ctx->pc = 0x393ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x393ae4: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x393ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x393ae8: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x393ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
    // 0x393aec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x393aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x393af0: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x393af0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
    // 0x393af4: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x393af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x393af8: 0xfe400018  sd          $zero, 0x18($s2)
    ctx->pc = 0x393af8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 0));
    // 0x393afc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x393afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x393b00: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393b04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x393b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393b08: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x393b08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x393b0c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x393b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x393b10: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x393b10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x393b14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393b18: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x393b18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x393b1c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x393b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x393b20: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x393b20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x393b24: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393b28: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x393b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x393b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x393b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393b30: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x393b30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393b34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x393b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x393b38: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x393b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x393b3c: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x393b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x393b40: 0x344c0008  ori         $t4, $v0, 0x8
    ctx->pc = 0x393b40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x393b44: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x393b44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x393b48: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x393b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x393b4c: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x393b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x393b50: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x393b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x393b54: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x393b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x393b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393b5c: 0x70025389  pcpyld      $t2, $zero, $v0
    ctx->pc = 0x393b5cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x393b60: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x393b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x393b64: 0x3c030e09  lui         $v1, 0xE09
    ctx->pc = 0x393b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3593 << 16));
    // 0x393b68: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x393b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x393b6c: 0x34682009  ori         $t0, $v1, 0x2009
    ctx->pc = 0x393b6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8201);
    // 0x393b70: 0x70023b89  pcpyld      $a3, $zero, $v0
    ctx->pc = 0x393b70u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x393b74: 0x0  nop
    ctx->pc = 0x393b74u;
    // NOP
label_393b78:
    // 0x393b78: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x393b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x393b7c: 0xf203c  dsll32      $a0, $t7, 0
    ctx->pc = 0x393b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) << (32 + 0));
    // 0x393b80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393b84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x393b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x393b88: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x393b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x393b8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x393b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x393b90: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x393b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x393b94: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x393b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x393b98: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x393b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x393b9c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x393b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393ba0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x393ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x393ba4: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393ba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x393ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393bac: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393bacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393bb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x393bb4: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393bb8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x393bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x393bbc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393bc0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x393bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x393bc4: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393bc8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x393bcc: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393bccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393bd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x393bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393bd4: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393bd8: 0x4e1825  or          $v1, $v0, $t6
    ctx->pc = 0x393bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x393bdc: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393be0: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x393be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x393be4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393be8: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x393be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x393bec: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393becu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393bf0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x393bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x393bf4: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393bf8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x393bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393bfc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393c00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x393c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x393c04: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x393c04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393c08: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x393c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x393c0c: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393c10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x393c14: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393c14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393c18: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x393c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x393c1c: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393c20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x393c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x393c24: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393c28: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x393c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x393c2c: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393c30: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x393c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x393c34: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393c34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393c38: 0x24a4001f  addiu       $a0, $a1, 0x1F
    ctx->pc = 0x393c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x393c3c: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393c40: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x393c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x393c44: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393c44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393c48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393c4c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393c50: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x393c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x393c54: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393c54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393c58: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x393c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x393c5c: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393c60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393c64: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x393c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x393c68: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393c6c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x393c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x393c70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x393c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x393c74: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393c74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393c78: 0x6e2825  or          $a1, $v1, $t6
    ctx->pc = 0x393c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x393c7c: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393c80: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x393c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x393c84: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393c84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393c88: 0x3a140  sll         $s4, $v1, 5
    ctx->pc = 0x393c88u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x393c8c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393c90: 0x2683001f  addiu       $v1, $s4, 0x1F
    ctx->pc = 0x393c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x393c94: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393c94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393c98: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x393c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x393c9c: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393ca0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x393ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x393ca4: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393ca8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x393ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x393cac: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393cacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393cb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393cb4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393cb8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x393cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x393cbc: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393cc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x393cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x393cc4: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393cc8: 0x6e2025  or          $a0, $v1, $t6
    ctx->pc = 0x393cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x393ccc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393cd0: 0x26630005  addiu       $v1, $s3, 0x5
    ctx->pc = 0x393cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x393cd4: 0xfe450000  sd          $a1, 0x0($s2)
    ctx->pc = 0x393cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 5));
    // 0x393cd8: 0x3a140  sll         $s4, $v1, 5
    ctx->pc = 0x393cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x393cdc: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393ce0: 0x2683001f  addiu       $v1, $s4, 0x1F
    ctx->pc = 0x393ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x393ce4: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393ce8: 0x3c03c  dsll32      $t8, $v1, 0
    ctx->pc = 0x393ce8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) << (32 + 0));
    // 0x393cec: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393cecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393cf0: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x393cf0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x393cf4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393cf8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x393cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x393cfc: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393d00: 0x26620006  addiu       $v0, $s3, 0x6
    ctx->pc = 0x393d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x393d04: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393d04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393d08: 0x2a140  sll         $s4, $v0, 5
    ctx->pc = 0x393d08u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x393d0c: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393d10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x393d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x393d14: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393d14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393d18: 0x18c438  dsll        $t8, $t8, 16
    ctx->pc = 0x393d18u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 16);
    // 0x393d1c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393d20: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x393d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x393d24: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393d24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393d28: 0x2682001f  addiu       $v0, $s4, 0x1F
    ctx->pc = 0x393d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x393d2c: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393d30: 0x2c03c  dsll32      $t8, $v0, 0
    ctx->pc = 0x393d30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393d34: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393d38: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x393d38u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x393d3c: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x393d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x393d40: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x393d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x393d44: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393d44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393d48: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x393d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x393d4c: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393d50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x393d54: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393d54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393d58: 0x18c438  dsll        $t8, $t8, 16
    ctx->pc = 0x393d58u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 16);
    // 0x393d5c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393d60: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x393d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x393d64: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393d64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393d68: 0x26780007  addiu       $t8, $s3, 0x7
    ctx->pc = 0x393d68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x393d6c: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393d70: 0x18a140  sll         $s4, $t8, 5
    ctx->pc = 0x393d70u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x393d74: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393d74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393d78: 0x2698001f  addiu       $t8, $s4, 0x1F
    ctx->pc = 0x393d78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 31));
    // 0x393d7c: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393d80: 0x18c83c  dsll32      $t9, $t8, 0
    ctx->pc = 0x393d80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 24) << (32 + 0));
    // 0x393d84: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393d88: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x393d88u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x393d8c: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393d90: 0x14c03c  dsll32      $t8, $s4, 0
    ctx->pc = 0x393d90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 20) << (32 + 0));
    // 0x393d94: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393d94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393d98: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x393d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x393d9c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393da0: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x393da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x393da4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x393da4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x393da8: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x393da8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x393dac: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393dacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393db0: 0x19cc38  dsll        $t9, $t9, 16
    ctx->pc = 0x393db0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x393db4: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393db4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393db8: 0x319c025  or          $t8, $t8, $t9
    ctx->pc = 0x393db8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 25));
    // 0x393dbc: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393dc0: 0x30ec025  or          $t8, $t8, $t6
    ctx->pc = 0x393dc0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 14));
    // 0x393dc4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393dc8: 0x2e650010  sltiu       $a1, $s3, 0x10
    ctx->pc = 0x393dc8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x393dcc: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393dccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393dd0: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x393dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x393dd4: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393dd8: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x393dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x393ddc: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393de0: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393de0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393de4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393de8: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393de8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393dec: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393decu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393df0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393df4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x393df4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x393df8: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393df8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393dfc: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393e00: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393e00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393e04: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393e08: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393e08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393e0c: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393e10: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393e10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393e14: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393e14u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393e18: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393e1c: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393e20: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393e20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393e24: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x393e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x393e28: 0xfe580000  sd          $t8, 0x0($s2)
    ctx->pc = 0x393e28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 24));
    // 0x393e2c: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393e30: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x393e30u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x393e34: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393e34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393e38: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393e3c: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x393e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x393e40: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x393e40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x393e44: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x393e44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x393e48: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x393e48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x393e4c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393e50: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x393e50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x393e54: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x393e54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x393e58: 0x14a0ff47  bnez        $a1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x393E58u;
    {
        const bool branch_taken_0x393e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x393E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E58u;
        // 0x393e5c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e58) {
            ctx->pc = 0x393B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393b78;
        }
    }
    ctx->pc = 0x393E60u;
    // 0x393e60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x393e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x393e64: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x393e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x393e68: 0x8c2cf014  lw          $t4, -0xFEC($at)
    ctx->pc = 0x393e68u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81F014u));
    // 0x393e6c: 0x344a00c0  ori         $t2, $v0, 0xC0
    ctx->pc = 0x393e6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x393e70: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x393e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x393e74: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x393e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x393e78: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x393e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x393e7c: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x393e7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x393e80: 0x2409004f  addiu       $t1, $zero, 0x4F
    ctx->pc = 0x393e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x393e84: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x393e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x393e88: 0x34c7020b  ori         $a3, $a2, 0x20B
    ctx->pc = 0x393e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)523);
    // 0x393e8c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x393e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x393e90: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x393e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x393e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393e98: 0xdd8c0020  ld          $t4, 0x20($t4)
    ctx->pc = 0x393e98u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x393e9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x393e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x393ea0: 0xfe4c0000  sd          $t4, 0x0($s2)
    ctx->pc = 0x393ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 12));
    // 0x393ea4: 0xfe4b0008  sd          $t3, 0x8($s2)
    ctx->pc = 0x393ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 11));
    // 0x393ea8: 0xfe4a0010  sd          $t2, 0x10($s2)
    ctx->pc = 0x393ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 10));
    // 0x393eac: 0xfe490018  sd          $t1, 0x18($s2)
    ctx->pc = 0x393eacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 9));
    // 0x393eb0: 0x8c29f014  lw          $t1, -0xFEC($at)
    ctx->pc = 0x393eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81F014u));
    // 0x393eb4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393eb8: 0xdd290040  ld          $t1, 0x40($t1)
    ctx->pc = 0x393eb8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x393ebc: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x393ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x393ec0: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x393ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x393ec4: 0xfe470010  sd          $a3, 0x10($s2)
    ctx->pc = 0x393ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 7));
    // 0x393ec8: 0xfe450018  sd          $a1, 0x18($s2)
    ctx->pc = 0x393ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 5));
    // 0x393ecc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393ed0: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x393ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x393ed4: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x393ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x393ed8: 0xfe460010  sd          $a2, 0x10($s2)
    ctx->pc = 0x393ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 6));
    // 0x393edc: 0xfe430018  sd          $v1, 0x18($s2)
    ctx->pc = 0x393edcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 3));
    // 0x393ee0: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x393ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x393ee4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x393ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x393ee8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x393ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x393eec: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x393eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x393ef0: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x393ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x393ef4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x393ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x393ef8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x393EF8u;
    {
        const bool branch_taken_0x393ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x393EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EF8u;
        // 0x393efc: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ef8) {
            ctx->pc = 0x393F40u;
            goto label_393f40;
        }
    }
    ctx->pc = 0x393F00u;
    // 0x393f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x393f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x393f04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x393F04u;
    {
        const bool branch_taken_0x393f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x393f04) {
            ctx->pc = 0x393F20u;
            goto label_393f20;
        }
    }
    ctx->pc = 0x393F0Cu;
    // 0x393f0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x393F0Cu;
    {
        const bool branch_taken_0x393f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f0c) {
            ctx->pc = 0x393F20u;
            goto label_393f20;
        }
    }
    ctx->pc = 0x393F14u;
    // 0x393f14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x393F14u;
    {
        const bool branch_taken_0x393f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f14) {
            ctx->pc = 0x393F70u;
            goto label_393f70;
        }
    }
    ctx->pc = 0x393F1Cu;
    // 0x393f1c: 0x0  nop
    ctx->pc = 0x393f1cu;
    // NOP
label_393f20:
    // 0x393f20: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x393f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x393f24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393F24u;
    {
        const bool branch_taken_0x393f24 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x393F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F24u;
        // 0x393f28: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f24) {
            ctx->pc = 0x393F34u;
            goto label_393f34;
        }
    }
    ctx->pc = 0x393F2Cu;
    // 0x393f2c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x393f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x393f30: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x393f30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_393f34:
    // 0x393f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x393f38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x393F38u;
    {
        const bool branch_taken_0x393f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F38u;
        // 0x393f3c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f38) {
            ctx->pc = 0x393F70u;
            goto label_393f70;
        }
    }
    ctx->pc = 0x393F40u;
label_393f40:
    // 0x393f40: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x393f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x393f44: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393F44u;
    {
        const bool branch_taken_0x393f44 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x393F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F44u;
        // 0x393f48: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f44) {
            ctx->pc = 0x393F54u;
            goto label_393f54;
        }
    }
    ctx->pc = 0x393F4Cu;
    // 0x393f4c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x393f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x393f50: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x393f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_393f54:
    // 0x393f54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x393f58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x393f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x393f5c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x393f5cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x393f60: 0x0  nop
    ctx->pc = 0x393f60u;
    // NOP
    // 0x393f64: 0x0  nop
    ctx->pc = 0x393f64u;
    // NOP
    // 0x393f68: 0x1012  mflo        $v0
    ctx->pc = 0x393f68u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x393f6c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x393f6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_393f70:
    // 0x393f70: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x393f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x393f74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x393f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x393f78: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x393f78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x393f7c: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x393f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x393f80: 0x2441823  subu        $v1, $s2, $a0
    ctx->pc = 0x393f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x393f84: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393F84u;
    {
        const bool branch_taken_0x393f84 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x393F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F84u;
        // 0x393f88: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f84) {
            ctx->pc = 0x393F94u;
            goto label_393f94;
        }
    }
    ctx->pc = 0x393F8Cu;
    // 0x393f8c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x393f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x393f90: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x393f90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_393f94:
    // 0x393f94: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x393f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x393f98: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x393f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x393f9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x393f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x393fa0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x393fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x393fa4: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x393fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x393fa8: 0x2441823  subu        $v1, $s2, $a0
    ctx->pc = 0x393fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x393fac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393FACu;
    {
        const bool branch_taken_0x393fac = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x393FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FACu;
        // 0x393fb0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fac) {
            ctx->pc = 0x393FBCu;
            goto label_393fbc;
        }
    }
    ctx->pc = 0x393FB4u;
    // 0x393fb4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x393fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x393fb8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x393fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_393fbc:
    // 0x393fbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x393fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x393fc0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x393fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x393fc4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x393fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x393fc8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x393fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x393fcc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x393fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393fd0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x393fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x393fd4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x393fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x393fd8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x393fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x393fdc: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x393fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x393fe0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x393fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x393fe4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x393fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x393fe8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x393fe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x393fec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x393fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393ff0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x393ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393ff4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x393ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393ff8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x393ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x393FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FFCu;
        // 0x394000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394004u;
}
