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

// Function: sub_00390F00
// Address: 0x390f00 - 0x391304
void sub_00390F00_0x390f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390F00_0x390f00");
#endif

    switch (ctx->pc) {
        case 0x390f50u: goto label_390f50;
        case 0x390ff8u: goto label_390ff8;
        case 0x39103cu: goto label_39103c;
        case 0x391088u: goto label_391088;
        case 0x39109cu: goto label_39109c;
        case 0x3910acu: goto label_3910ac;
        case 0x3910f8u: goto label_3910f8;
        case 0x391130u: goto label_391130;
        case 0x39116cu: goto label_39116c;
        case 0x3911ecu: goto label_3911ec;
        default: break;
    }

    ctx->pc = 0x390f00u;

    // 0x390f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x390f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x390f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x390f0c: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x390f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x390f10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x390f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x390f14: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x390f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x390f18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x390f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x390f1c: 0x27a30064  addiu       $v1, $sp, 0x64
    ctx->pc = 0x390f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x390f20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x390f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x390f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x390f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x390f28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x390f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x390f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f30: 0x878283a4  lh          $v0, -0x7C5C($gp)
    ctx->pc = 0x390f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
    // 0x390f34: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x390f34u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x390f38: 0x878283a8  lh          $v0, -0x7C58($gp)
    ctx->pc = 0x390f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x390f3c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x390f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x390f40: 0x878283ac  lh          $v0, -0x7C54($gp)
    ctx->pc = 0x390f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935468)));
    // 0x390f44: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x390f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x390f48: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x390F48u;
    SET_GPR_U32(ctx, 31, 0x390F50u);
    ctx->pc = 0x390F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F48u;
    // 0x390f4c: 0xac8007a4  sw          $zero, 0x7A4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1956), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x390F48u, 0x390F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F50u;
label_390f50:
    // 0x390f50: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x390f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x390f54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x390f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x390f58: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x390F58u;
    {
        const bool branch_taken_0x390f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x390F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F58u;
        // 0x390f5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f58) {
            ctx->pc = 0x390FA8u;
            goto label_390fa8;
        }
    }
    ctx->pc = 0x390F60u;
    // 0x390f60: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x390f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x390f64: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x390f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x390f68: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x390f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x390f6c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x390f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x390f70: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x390f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x390f74: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x390f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x390f78: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x390f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x390f7c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x390f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x390f80: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x390f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x390f84: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x390f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x390f88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x390F88u;
    {
        const bool branch_taken_0x390f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F88u;
        // 0x390f8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f88) {
            ctx->pc = 0x390FA0u;
            goto label_390fa0;
        }
    }
    ctx->pc = 0x390F90u;
    // 0x390f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390f94: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x390f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x390f98: 0xa2232ab6  sb          $v1, 0x2AB6($s1)
    ctx->pc = 0x390f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10934), (uint8_t)GPR_U32(ctx, 3));
    // 0x390f9c: 0xa6232ab4  sh          $v1, 0x2AB4($s1)
    ctx->pc = 0x390f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10932), (uint16_t)GPR_U32(ctx, 3));
label_390fa0:
    // 0x390fa0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x390FA0u;
    {
        const bool branch_taken_0x390fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390fa0) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x390FA8u;
label_390fa8:
    // 0x390fa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x390fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x390fac: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x390FACu;
    {
        const bool branch_taken_0x390fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x390FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FACu;
        // 0x390fb0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fac) {
            ctx->pc = 0x391290u;
            goto label_391290;
        }
    }
    ctx->pc = 0x390FB4u;
    // 0x390fb4: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x390FB4u;
    {
        const bool branch_taken_0x390fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x390fb4) {
            ctx->pc = 0x391250u;
            goto label_391250;
        }
    }
    ctx->pc = 0x390FBCu;
    // 0x390fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390fc0: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x390FC0u;
    {
        const bool branch_taken_0x390fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x390fc0) {
            ctx->pc = 0x3911F0u;
            goto label_3911f0;
        }
    }
    ctx->pc = 0x390FC8u;
    // 0x390fc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390FC8u;
    {
        const bool branch_taken_0x390fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x390fc8) {
            ctx->pc = 0x390FD8u;
            goto label_390fd8;
        }
    }
    ctx->pc = 0x390FD0u;
    // 0x390fd0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x390FD0u;
    {
        const bool branch_taken_0x390fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390fd0) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x390FD8u;
label_390fd8:
    // 0x390fd8: 0x92220839  lbu         $v0, 0x839($s1)
    ctx->pc = 0x390fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x390fdc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x390FDCu;
    {
        const bool branch_taken_0x390fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390fdc) {
            ctx->pc = 0x391048u;
            goto label_391048;
        }
    }
    ctx->pc = 0x390FE4u;
    // 0x390fe4: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x390fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x390fe8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x390fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x390fec: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x390fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x390ff0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x390FF0u;
    SET_GPR_U32(ctx, 31, 0x390FF8u);
    ctx->pc = 0x390FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FF0u;
    // 0x390ff4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x390FF0u, 0x390FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FF8u;
label_390ff8:
    // 0x390ff8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x390ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x390ffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x390ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x391000: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x391000u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x391004: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x391004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x391008: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x391008u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39100c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x39100cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x391010: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x391010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x391014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x391014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x391018: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x391018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x39101c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x39101cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x391020: 0x0  nop
    ctx->pc = 0x391020u;
    // NOP
    // 0x391024: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x391024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x391028: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x391028u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x39102c: 0x0  nop
    ctx->pc = 0x39102cu;
    // NOP
    // 0x391030: 0x0  nop
    ctx->pc = 0x391030u;
    // NOP
    // 0x391034: 0xc096784  jal         func_259E10
    ctx->pc = 0x391034u;
    SET_GPR_U32(ctx, 31, 0x39103Cu);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x391034u, 0x39103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39103Cu;
label_39103c:
    // 0x39103c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39103Cu;
    {
        const bool branch_taken_0x39103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39103c) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x391044u;
    // 0x391044: 0x0  nop
    ctx->pc = 0x391044u;
    // NOP
label_391048:
    // 0x391048: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x391048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x39104c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x39104cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x391050: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x391050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x391054: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x391054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x391058: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x391058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39105c: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x39105cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x391060: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x391060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x391064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x391064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391068: 0x0  nop
    ctx->pc = 0x391068u;
    // NOP
    // 0x39106c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39106cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x391070: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x391070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x391074: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x391074u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x391078: 0x0  nop
    ctx->pc = 0x391078u;
    // NOP
    // 0x39107c: 0x0  nop
    ctx->pc = 0x39107cu;
    // NOP
    // 0x391080: 0xc096784  jal         func_259E10
    ctx->pc = 0x391080u;
    SET_GPR_U32(ctx, 31, 0x391088u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x391080u, 0x391088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391088u;
label_391088:
    // 0x391088: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x391088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x39108c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x391090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x391090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x391094: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x391094u;
    SET_GPR_U32(ctx, 31, 0x39109Cu);
    ctx->pc = 0x391098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391094u;
    // 0x391098: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x391094u, 0x39109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39109Cu;
label_39109c:
    // 0x39109c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3910a0: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3910a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3910a4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3910A4u;
    SET_GPR_U32(ctx, 31, 0x3910ACu);
    ctx->pc = 0x3910A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3910A4u;
    // 0x3910a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3910A4u, 0x3910ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910ACu;
label_3910ac:
    // 0x3910ac: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3910acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3910b0: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x3910b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3910b4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x3910b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3910b8: 0x24020182  addiu       $v0, $zero, 0x182
    ctx->pc = 0x3910b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x3910bc: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3910bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3910c0: 0x7c243070  sq          $a0, 0x3070($at)
    ctx->pc = 0x3910c0u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x923070u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x923070u, _value); } while (0);
    // 0x3910c4: 0x7a240020  lq          $a0, 0x20($s1)
    ctx->pc = 0x3910c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3910c8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3910c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3910cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3910CCu;
    {
        const bool branch_taken_0x3910cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3910D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910CCu;
        // 0x3910d0: 0x7c243080  sq          $a0, 0x3080($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 12416), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3910cc) {
            ctx->pc = 0x3910E0u;
            goto label_3910e0;
        }
    }
    ctx->pc = 0x3910D4u;
    // 0x3910d4: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x3910d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x3910d8: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3910D8u;
    {
        const bool branch_taken_0x3910d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3910d8) {
            ctx->pc = 0x3911A8u;
            goto label_3911a8;
        }
    }
    ctx->pc = 0x3910E0u;
label_3910e0:
    // 0x3910e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3910e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3910e4: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x3910e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x3910e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3910e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3910ec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3910ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3910f0: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x3910F0u;
    SET_GPR_U32(ctx, 31, 0x3910F8u);
    ctx->pc = 0x3910F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3910F0u;
    // 0x3910f4: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x3910F0u, 0x3910F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3910F8u;
label_3910f8:
    // 0x3910f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3910F8u;
    {
        const bool branch_taken_0x3910f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3910f8) {
            ctx->pc = 0x3911A8u;
            goto label_3911a8;
        }
    }
    ctx->pc = 0x391100u;
    // 0x391100: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x391100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x391104: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x391104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x391108: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x391108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39110c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39110cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391110: 0x0  nop
    ctx->pc = 0x391110u;
    // NOP
    // 0x391114: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x391114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x391118: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x391118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39111c: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x39111Cu;
    {
        const bool branch_taken_0x39111c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39111c) {
            ctx->pc = 0x3911A8u;
            goto label_3911a8;
        }
    }
    ctx->pc = 0x391124u;
    // 0x391124: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x391124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x391128: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x391128u;
    SET_GPR_U32(ctx, 31, 0x391130u);
    ctx->pc = 0x39112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391128u;
    // 0x39112c: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x391128u, 0x391130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391130u;
label_391130:
    // 0x391130: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x391130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x391134: 0x0  nop
    ctx->pc = 0x391134u;
    // NOP
    // 0x391138: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x391138u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x39113c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39113cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x391140: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x391140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x391144: 0x0  nop
    ctx->pc = 0x391144u;
    // NOP
    // 0x391148: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x391148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x39114c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39114cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x391150: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x391150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x391154: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x391154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x391158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x391158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x39115c: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x39115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x391160: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x391160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x391164: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x391164u;
    SET_GPR_U32(ctx, 31, 0x39116Cu);
    ctx->pc = 0x391168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391164u;
    // 0x391168: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x391164u, 0x39116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39116Cu;
label_39116c:
    // 0x39116c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x39116cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x391170: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x391170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x391174: 0x92250839  lbu         $a1, 0x839($s1)
    ctx->pc = 0x391174u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x391178: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x391178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39117c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x391180: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x391180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x391184: 0x90a50064  lbu         $a1, 0x64($a1)
    ctx->pc = 0x391184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x391188: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x391188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39118c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x39118cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x391190: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x391190u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x391194: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x391194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x391198: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x391198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x39119c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x39119Cu;
    {
        const bool branch_taken_0x39119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3911A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39119Cu;
        // 0x3911a0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39119c) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x3911A4u;
    // 0x3911a4: 0x0  nop
    ctx->pc = 0x3911a4u;
    // NOP
label_3911a8:
    // 0x3911a8: 0x92270839  lbu         $a3, 0x839($s1)
    ctx->pc = 0x3911a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x3911ac: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3911acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3911b0: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x3911b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x3911b4: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3911b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3911b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3911b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3911bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3911c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3911c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3911c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3911c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3911c8: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x3911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3911cc: 0x9042006c  lbu         $v0, 0x6C($v0)
    ctx->pc = 0x3911ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x3911d0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3911d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3911d4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3911d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3911d8: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x3911d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3911dc: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3911dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3911e0: 0xae2607ec  sw          $a2, 0x7EC($s1)
    ctx->pc = 0x3911e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 6));
    // 0x3911e4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3911E4u;
    SET_GPR_U32(ctx, 31, 0x3911ECu);
    ctx->pc = 0x3911E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3911E4u;
    // 0x3911e8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3911E4u, 0x3911ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3911ECu;
label_3911ec:
    // 0x3911ec: 0x0  nop
    ctx->pc = 0x3911ecu;
    // NOP
label_3911f0:
    // 0x3911f0: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x3911f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3911f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3911f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3911f8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3911F8u;
    {
        const bool branch_taken_0x3911f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3911f8) {
            ctx->pc = 0x391238u;
            goto label_391238;
        }
    }
    ctx->pc = 0x391200u;
    // 0x391200: 0x92240640  lbu         $a0, 0x640($s1)
    ctx->pc = 0x391200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x391204: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x391204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391208: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x391208u;
    {
        const bool branch_taken_0x391208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x391208) {
            ctx->pc = 0x391238u;
            goto label_391238;
        }
    }
    ctx->pc = 0x391210u;
    // 0x391210: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x391210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x391214: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x391214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x391218: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x391218u;
    {
        const bool branch_taken_0x391218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x391218) {
            ctx->pc = 0x391238u;
            goto label_391238;
        }
    }
    ctx->pc = 0x391220u;
    // 0x391220: 0x96230786  lhu         $v1, 0x786($s1)
    ctx->pc = 0x391220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1926)));
    // 0x391224: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x391224u;
    {
        const bool branch_taken_0x391224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391224u;
        // 0x391228: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391224) {
            ctx->pc = 0x391238u;
            goto label_391238;
        }
    }
    ctx->pc = 0x39122Cu;
    // 0x39122c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39122Cu;
    {
        const bool branch_taken_0x39122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39122Cu;
        // 0x391230: 0xa62307f0  sh          $v1, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39122c) {
            ctx->pc = 0x391240u;
            goto label_391240;
        }
    }
    ctx->pc = 0x391234u;
    // 0x391234: 0x0  nop
    ctx->pc = 0x391234u;
    // NOP
label_391238:
    // 0x391238: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x391238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39123c: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x39123cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_391240:
    // 0x391240: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x391240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x391244: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x391244u;
    {
        const bool branch_taken_0x391244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391244u;
        // 0x391248: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391244) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x39124Cu;
    // 0x39124c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x39124cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_391250:
    // 0x391250: 0x16000025  bnez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x391250u;
    {
        const bool branch_taken_0x391250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x391250) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x391258u;
    // 0x391258: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x391258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x39125c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x39125cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x391260: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x391260u;
    {
        const bool branch_taken_0x391260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x391260) {
            ctx->pc = 0x391280u;
            goto label_391280;
        }
    }
    ctx->pc = 0x391268u;
    // 0x391268: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x391268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x39126c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39126cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x391270: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x391270u;
    {
        const bool branch_taken_0x391270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x391274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391270u;
        // 0x391274: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391270) {
            ctx->pc = 0x391280u;
            goto label_391280;
        }
    }
    ctx->pc = 0x391278u;
    // 0x391278: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x391278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x39127c: 0x0  nop
    ctx->pc = 0x39127cu;
    // NOP
label_391280:
    // 0x391280: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x391280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x391284: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x391284u;
    {
        const bool branch_taken_0x391284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391284u;
        // 0x391288: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391284) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x39128Cu;
    // 0x39128c: 0x0  nop
    ctx->pc = 0x39128cu;
    // NOP
label_391290:
    // 0x391290: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x391290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x391294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x391294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391298: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x391298u;
    {
        const bool branch_taken_0x391298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x391298) {
            ctx->pc = 0x3912B0u;
            goto label_3912b0;
        }
    }
    ctx->pc = 0x3912A0u;
    // 0x3912a0: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x3912a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x3912a4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3912a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3912a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3912A8u;
    {
        const bool branch_taken_0x3912a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3912a8) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x3912B0u;
label_3912b0:
    // 0x3912b0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x3912b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3912b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3912b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3912b8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3912B8u;
    {
        const bool branch_taken_0x3912b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B8u;
        // 0x3912bc: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912b8) {
            ctx->pc = 0x3912C8u;
            goto label_3912c8;
        }
    }
    ctx->pc = 0x3912C0u;
    // 0x3912c0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3912C0u;
    {
        const bool branch_taken_0x3912c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3912c0) {
            ctx->pc = 0x3912D8u;
            goto label_3912d8;
        }
    }
    ctx->pc = 0x3912C8u;
label_3912c8:
    // 0x3912c8: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x3912c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x3912cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3912CCu;
    {
        const bool branch_taken_0x3912cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3912D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912CCu;
        // 0x3912d0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3912cc) {
            ctx->pc = 0x3912E8u;
            goto label_3912e8;
        }
    }
    ctx->pc = 0x3912D4u;
    // 0x3912d4: 0x0  nop
    ctx->pc = 0x3912d4u;
    // NOP
label_3912d8:
    // 0x3912d8: 0x92230839  lbu         $v1, 0x839($s1)
    ctx->pc = 0x3912d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2105)));
    // 0x3912dc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3912dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3912e0: 0x90630068  lbu         $v1, 0x68($v1)
    ctx->pc = 0x3912e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x3912e4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3912e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3912e8:
    // 0x3912e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3912e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3912ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3912ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3912f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3912f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3912f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3912f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3912f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3912f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3912fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3912FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912FCu;
        // 0x391300: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3912FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391304u;
}
