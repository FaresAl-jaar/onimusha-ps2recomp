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

// Function: sub_00380940
// Address: 0x380940 - 0x380a7c
void sub_00380940_0x380940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380940_0x380940");
#endif

    switch (ctx->pc) {
        case 0x3809b4u: goto label_3809b4;
        case 0x3809c8u: goto label_3809c8;
        case 0x380a38u: goto label_380a38;
        case 0x380a6cu: goto label_380a6c;
        default: break;
    }

    ctx->pc = 0x380940u;

    // 0x380940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380944: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x380944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x380948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38094c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38094cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x380950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x380954: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x380954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x380958: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x380958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38095c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38095cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380960: 0x0  nop
    ctx->pc = 0x380960u;
    // NOP
    // 0x380964: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x380964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x380968: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38096c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38096Cu;
    {
        const bool branch_taken_0x38096c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x380970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38096Cu;
        // 0x380970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38096c) {
            ctx->pc = 0x380984u;
            goto label_380984;
        }
    }
    ctx->pc = 0x380974u;
    // 0x380974: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380978: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x380978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x38097c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38097Cu;
    {
        const bool branch_taken_0x38097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38097Cu;
        // 0x380980: 0xa6032b9c  sh          $v1, 0x2B9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11164), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38097c) {
            ctx->pc = 0x3809A0u;
            goto label_3809a0;
        }
    }
    ctx->pc = 0x380984u;
label_380984:
    // 0x380984: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380988: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38098c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38098cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380990: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x380990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x380994: 0x0  nop
    ctx->pc = 0x380994u;
    // NOP
    // 0x380998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x380998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38099c: 0xa6032b9c  sh          $v1, 0x2B9C($s0)
    ctx->pc = 0x38099cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11164), (uint16_t)GPR_U32(ctx, 3));
label_3809a0:
    // 0x3809a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3809a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809a4: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x3809a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x3809a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3809a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3809ac: 0xc0e0160  jal         func_380580
    ctx->pc = 0x3809ACu;
    SET_GPR_U32(ctx, 31, 0x3809B4u);
    ctx->pc = 0x3809B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809ACu;
    // 0x3809b0: 0xa2022b78  sb          $v0, 0x2B78($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380580u, 0x3809ACu, 0x3809B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809B4u;
label_3809b4:
    // 0x3809b4: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x3809b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x3809b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3809b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3809bc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3809bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3809c0: 0xc0e0198  jal         func_380660
    ctx->pc = 0x3809C0u;
    SET_GPR_U32(ctx, 31, 0x3809C8u);
    ctx->pc = 0x3809C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3809C0u;
    // 0x3809c4: 0xa2022b78  sb          $v0, 0x2B78($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380660u, 0x3809C0u, 0x3809C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3809C8u;
label_3809c8:
    // 0x3809c8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3809c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3809cc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3809ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3809d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3809d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3809d4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3809d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3809d8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3809d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3809dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3809dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3809e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3809e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3809e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3809e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3809e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3809e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3809ec: 0x0  nop
    ctx->pc = 0x3809ecu;
    // NOP
    // 0x3809f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3809f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3809f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3809f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3809f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3809F8u;
    {
        const bool branch_taken_0x3809f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3809f8) {
            ctx->pc = 0x380A10u;
            goto label_380a10;
        }
    }
    ctx->pc = 0x380A00u;
    // 0x380a00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380a04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x380A08u;
    {
        const bool branch_taken_0x380a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A08u;
        // 0x380a0c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a08) {
            ctx->pc = 0x380A2Cu;
            goto label_380a2c;
        }
    }
    ctx->pc = 0x380A10u;
label_380a10:
    // 0x380a10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380a14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x380a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x380a18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x380a1c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x380a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380a20: 0x0  nop
    ctx->pc = 0x380a20u;
    // NOP
    // 0x380a24: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x380a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x380a28: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x380a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_380a2c:
    // 0x380a2c: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x380a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x380a30: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x380A30u;
    SET_GPR_U32(ctx, 31, 0x380A38u);
    ctx->pc = 0x380A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A30u;
    // 0x380a34: 0x26072ba0  addiu       $a3, $s0, 0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x380A30u, 0x380A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A38u;
label_380a38:
    // 0x380a38: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x380a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x380a3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x380a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x380a40: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x380a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x380a44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x380a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x380a48: 0x26072ba0  addiu       $a3, $s0, 0x2BA0
    ctx->pc = 0x380a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x380a4c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x380a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x380a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x380a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x380a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x380a58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380a5c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x380a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x380a60: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x380a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x380a64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x380A64u;
    SET_GPR_U32(ctx, 31, 0x380A6Cu);
    ctx->pc = 0x380A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380A64u;
    // 0x380a68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x380A64u, 0x380A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380A6Cu;
label_380a6c:
    // 0x380a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380a70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x380a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380a74: 0x3e00008  jr          $ra
    ctx->pc = 0x380A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380A74u;
        // 0x380a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380A7Cu;
}
