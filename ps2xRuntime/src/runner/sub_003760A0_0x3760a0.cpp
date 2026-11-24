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

// Function: sub_003760A0
// Address: 0x3760a0 - 0x376290
void sub_003760A0_0x3760a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003760A0_0x3760a0");
#endif

    switch (ctx->pc) {
        case 0x3760b4u: goto label_3760b4;
        case 0x3760c0u: goto label_3760c0;
        case 0x3760ecu: goto label_3760ec;
        case 0x3760f8u: goto label_3760f8;
        case 0x37616cu: goto label_37616c;
        case 0x376184u: goto label_376184;
        case 0x376190u: goto label_376190;
        case 0x3761a0u: goto label_3761a0;
        case 0x37627cu: goto label_37627c;
        default: break;
    }

    ctx->pc = 0x3760a0u;

    // 0x3760a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3760a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3760a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3760a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3760a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3760a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3760ac: 0xc0dd7e0  jal         func_375F80
    ctx->pc = 0x3760ACu;
    SET_GPR_U32(ctx, 31, 0x3760B4u);
    ctx->pc = 0x3760B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760ACu;
    // 0x3760b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375F80u, 0x3760ACu, 0x3760B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760B4u;
label_3760b4:
    // 0x3760b4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3760b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3760b8: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3760B8u;
    SET_GPR_U32(ctx, 31, 0x3760C0u);
    ctx->pc = 0x3760BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760B8u;
    // 0x3760bc: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3760B8u, 0x3760C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760C0u;
label_3760c0:
    // 0x3760c0: 0x92040118  lbu         $a0, 0x118($s0)
    ctx->pc = 0x3760c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x3760c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3760c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3760c8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3760C8u;
    {
        const bool branch_taken_0x3760c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3760c8) {
            ctx->pc = 0x376178u;
            goto label_376178;
        }
    }
    ctx->pc = 0x3760D0u;
    // 0x3760d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3760D0u;
    {
        const bool branch_taken_0x3760d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3760d0) {
            ctx->pc = 0x3760E0u;
            goto label_3760e0;
        }
    }
    ctx->pc = 0x3760D8u;
    // 0x3760d8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3760D8u;
    {
        const bool branch_taken_0x3760d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3760d8) {
            ctx->pc = 0x376280u;
            goto label_376280;
        }
    }
    ctx->pc = 0x3760E0u;
label_3760e0:
    // 0x3760e0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3760e4: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3760E4u;
    SET_GPR_U32(ctx, 31, 0x3760ECu);
    ctx->pc = 0x3760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760E4u;
    // 0x3760e8: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3760E4u, 0x3760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760ECu;
label_3760ec:
    // 0x3760ec: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3760ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3760f0: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x3760F0u;
    SET_GPR_U32(ctx, 31, 0x3760F8u);
    ctx->pc = 0x3760F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3760F0u;
    // 0x3760f4: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x3760F0u, 0x3760F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3760F8u;
label_3760f8:
    // 0x3760f8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x3760F8u;
    {
        const bool branch_taken_0x3760f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3760f8) {
            ctx->pc = 0x376280u;
            goto label_376280;
        }
    }
    ctx->pc = 0x376100u;
    // 0x376100: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x376100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376104: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x376104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x376108: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x376108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37610c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x376110: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x376110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x376114: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x376114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x376118: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x376118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37611c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37611cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376124: 0x0  nop
    ctx->pc = 0x376124u;
    // NOP
    // 0x376128: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x376128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37612c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37612cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376130: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x376130u;
    {
        const bool branch_taken_0x376130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376130) {
            ctx->pc = 0x376148u;
            goto label_376148;
        }
    }
    ctx->pc = 0x376138u;
    // 0x376138: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37613c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37613cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x376140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x376140u;
    {
        const bool branch_taken_0x376140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376140u;
        // 0x376144: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376140) {
            ctx->pc = 0x376164u;
            goto label_376164;
        }
    }
    ctx->pc = 0x376148u;
label_376148:
    // 0x376148: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x376148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37614c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x376150: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376154: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x376154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x376158: 0x0  nop
    ctx->pc = 0x376158u;
    // NOP
    // 0x37615c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x37615cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x376160: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x376160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_376164:
    // 0x376164: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x376164u;
    SET_GPR_U32(ctx, 31, 0x37616Cu);
    ctx->pc = 0x376168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376164u;
    // 0x376168: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x376164u, 0x37616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37616Cu;
label_37616c:
    // 0x37616c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376170: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x376170u;
    {
        const bool branch_taken_0x376170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376170u;
        // 0x376174: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376170) {
            ctx->pc = 0x376280u;
            goto label_376280;
        }
    }
    ctx->pc = 0x376178u;
label_376178:
    // 0x376178: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x376178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x37617c: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x37617Cu;
    SET_GPR_U32(ctx, 31, 0x376184u);
    ctx->pc = 0x376180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37617Cu;
    // 0x376180: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x37617Cu, 0x376184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376184u;
label_376184:
    // 0x376184: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x376184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x376188: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x376188u;
    SET_GPR_U32(ctx, 31, 0x376190u);
    ctx->pc = 0x37618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376188u;
    // 0x37618c: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x376188u, 0x376190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376190u;
label_376190:
    // 0x376190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376190u;
    {
        const bool branch_taken_0x376190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376190u;
        // 0x376194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376190) {
            ctx->pc = 0x3761A8u;
            goto label_3761a8;
        }
    }
    ctx->pc = 0x376198u;
    // 0x376198: 0xc0dd8a4  jal         func_376290
    ctx->pc = 0x376198u;
    SET_GPR_U32(ctx, 31, 0x3761A0u);
    ctx->pc = 0x376290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376290u, 0x376198u, 0x3761A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761A0u;
label_3761a0:
    // 0x3761a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3761A0u;
    {
        const bool branch_taken_0x3761a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3761a0) {
            ctx->pc = 0x376280u;
            goto label_376280;
        }
    }
    ctx->pc = 0x3761A8u;
label_3761a8:
    // 0x3761a8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x3761a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x3761ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3761acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3761b0: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x3761b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x3761b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3761b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3761b8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3761bc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3761bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3761c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3761c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3761c4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3761c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3761c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3761c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3761cc: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x3761ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3761d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3761d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3761d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3761d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3761d8: 0x0  nop
    ctx->pc = 0x3761d8u;
    // NOP
    // 0x3761dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3761dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3761e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3761E0u;
    {
        const bool branch_taken_0x3761e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3761E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761E0u;
        // 0x3761e4: 0x468020a0  cvt.s.w     $f2, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761e0) {
            ctx->pc = 0x3761F8u;
            goto label_3761f8;
        }
    }
    ctx->pc = 0x3761E8u;
    // 0x3761e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3761e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3761ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3761ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3761f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3761F0u;
    {
        const bool branch_taken_0x3761f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3761f0) {
            ctx->pc = 0x376210u;
            goto label_376210;
        }
    }
    ctx->pc = 0x3761F8u;
label_3761f8:
    // 0x3761f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3761f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3761fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3761fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x376200: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x376204: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x376204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x376208: 0x0  nop
    ctx->pc = 0x376208u;
    // NOP
    // 0x37620c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37620cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_376210:
    // 0x376210: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376210u;
    {
        const bool branch_taken_0x376210 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x376214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376210u;
        // 0x376214: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376210) {
            ctx->pc = 0x376224u;
            goto label_376224;
        }
    }
    ctx->pc = 0x376218u;
    // 0x376218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x376218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37621c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37621Cu;
    {
        const bool branch_taken_0x37621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37621Cu;
        // 0x376220: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37621c) {
            ctx->pc = 0x37623Cu;
            goto label_37623c;
        }
    }
    ctx->pc = 0x376224u;
label_376224:
    // 0x376224: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x376224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x376228: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x376228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37622c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37622cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376230: 0x0  nop
    ctx->pc = 0x376230u;
    // NOP
    // 0x376234: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x376234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x376238: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x376238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_37623c:
    // 0x37623c: 0x0  nop
    ctx->pc = 0x37623cu;
    // NOP
    // 0x376240: 0x0  nop
    ctx->pc = 0x376240u;
    // NOP
    // 0x376244: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x376244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x376248: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x376248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37624c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x37624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x376250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376254: 0x0  nop
    ctx->pc = 0x376254u;
    // NOP
    // 0x376258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37625c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37625cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x376260: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x376260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x376264: 0x0  nop
    ctx->pc = 0x376264u;
    // NOP
    // 0x376268: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x376268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37626c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37626cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x376270: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x376270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x376274: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x376274u;
    SET_GPR_U32(ctx, 31, 0x37627Cu);
    ctx->pc = 0x376278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376274u;
    // 0x376278: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x376274u, 0x37627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37627Cu;
label_37627c:
    // 0x37627c: 0x0  nop
    ctx->pc = 0x37627cu;
    // NOP
label_376280:
    // 0x376280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376288: 0x3e00008  jr          $ra
    ctx->pc = 0x376288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376288u;
        // 0x37628c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376290u;
}
