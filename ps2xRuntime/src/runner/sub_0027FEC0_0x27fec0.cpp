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

// Function: sub_0027FEC0
// Address: 0x27fec0 - 0x2804a8
void sub_0027FEC0_0x27fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FEC0_0x27fec0");
#endif

    switch (ctx->pc) {
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff88u: goto label_27ff88;
        case 0x27fff0u: goto label_27fff0;
        case 0x280234u: goto label_280234;
        case 0x28026cu: goto label_28026c;
        case 0x2802b0u: goto label_2802b0;
        case 0x2802e4u: goto label_2802e4;
        case 0x280338u: goto label_280338;
        case 0x280348u: goto label_280348;
        case 0x280360u: goto label_280360;
        case 0x2803b4u: goto label_2803b4;
        case 0x28041cu: goto label_28041c;
        case 0x280430u: goto label_280430;
        case 0x280440u: goto label_280440;
        default: break;
    }

    ctx->pc = 0x27fec0u;

    // 0x27fec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27fec4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27fec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27fecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27feccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27fed0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27fed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fed8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27fed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fedc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x27FEDCu;
    {
        const bool branch_taken_0x27fedc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEDCu;
        // 0x27fee0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fedc) {
            ctx->pc = 0x27FF10u;
            goto label_27ff10;
        }
    }
    ctx->pc = 0x27FEE4u;
    // 0x27fee4: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x27fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x27fee8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27feec: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x27feecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x27fef0: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x27fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x27fef4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27fef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27fef8: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x27fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x27fefc: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x27fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x27ff00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27ff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27ff04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27FF04u;
    {
        const bool branch_taken_0x27ff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF04u;
        // 0x27ff08: 0xae420148  sw          $v0, 0x148($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff04) {
            ctx->pc = 0x27FF20u;
            goto label_27ff20;
        }
    }
    ctx->pc = 0x27FF0Cu;
    // 0x27ff0c: 0x0  nop
    ctx->pc = 0x27ff0cu;
    // NOP
label_27ff10:
    // 0x27ff10: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x27ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x27ff14: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x27ff18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27ff18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27ff1c: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x27ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
label_27ff20:
    // 0x27ff20: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x27FF20u;
    SET_GPR_U32(ctx, 31, 0x27FF28u);
    ctx->pc = 0x27FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF20u;
    // 0x27ff24: 0x264407a0  addiu       $a0, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x27FF20u, 0x27FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF28u;
label_27ff28:
    // 0x27ff28: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x27ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x27ff2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ff2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ff30: 0x0  nop
    ctx->pc = 0x27ff30u;
    // NOP
    // 0x27ff34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27ff34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ff38: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x27FF38u;
    {
        const bool branch_taken_0x27ff38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ff38) {
            ctx->pc = 0x27FF88u;
            goto label_27ff88;
        }
    }
    ctx->pc = 0x27FF40u;
    // 0x27ff40: 0x924a0002  lbu         $t2, 0x2($s2)
    ctx->pc = 0x27ff40u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x27ff44: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x27ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x27ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ff4c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x27ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27ff50: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x27ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x27ff54: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x27ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x27ff58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27ff58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27ff5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff60: 0x27878964  addiu       $a3, $gp, -0x769C
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936932));
    // 0x27ff64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ff64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff68: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x27ff68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27ff6c: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x27ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x27ff70: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x27ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x27ff74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27ff78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ff7c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ff80: 0xc09fa38  jal         func_27E8E0
    ctx->pc = 0x27FF80u;
    SET_GPR_U32(ctx, 31, 0x27FF88u);
    ctx->pc = 0x27FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF80u;
    // 0x27ff84: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E8E0u, 0x27FF80u, 0x27FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF88u;
label_27ff88:
    // 0x27ff88: 0x12200065  beqz        $s1, . + 4 + (0x65 << 2)
    ctx->pc = 0x27FF88u;
    {
        const bool branch_taken_0x27ff88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff88) {
            ctx->pc = 0x280120u;
            goto label_280120;
        }
    }
    ctx->pc = 0x27FF90u;
    // 0x27ff90: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x27ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ff94: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27ff94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ff98: 0x0  nop
    ctx->pc = 0x27ff98u;
    // NOP
    // 0x27ff9c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27ff9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ffa0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x27FFA0u;
    {
        const bool branch_taken_0x27ffa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ffa0) {
            ctx->pc = 0x27FFF8u;
            goto label_27fff8;
        }
    }
    ctx->pc = 0x27FFA8u;
    // 0x27ffa8: 0xc64128f0  lwc1        $f1, 0x28F0($s2)
    ctx->pc = 0x27ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ffac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27ffb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ffb4: 0x0  nop
    ctx->pc = 0x27ffb4u;
    // NOP
    // 0x27ffb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ffb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ffbc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x27FFBCu;
    {
        const bool branch_taken_0x27ffbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ffbc) {
            ctx->pc = 0x27FFF8u;
            goto label_27fff8;
        }
    }
    ctx->pc = 0x27FFC4u;
    // 0x27ffc4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x27ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ffc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ffcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27ffccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27ffd0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x27ffd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x27ffd4: 0xe64207a4  swc1        $f2, 0x7A4($s2)
    ctx->pc = 0x27ffd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
    // 0x27ffd8: 0xae400928  sw          $zero, 0x928($s2)
    ctx->pc = 0x27ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2344), GPR_U32(ctx, 0));
    // 0x27ffdc: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x27ffdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x27ffe0: 0x14620087  bne         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x27FFE0u;
    {
        const bool branch_taken_0x27ffe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFE0u;
        // 0x27ffe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffe0) {
            ctx->pc = 0x280200u;
            goto label_280200;
        }
    }
    ctx->pc = 0x27FFE8u;
    // 0x27ffe8: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x27FFE8u;
    SET_GPR_U32(ctx, 31, 0x27FFF0u);
    ctx->pc = 0x27FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE8u;
    // 0x27ffec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x27FFE8u, 0x27FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFF0u;
label_27fff0:
    // 0x27fff0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x27FFF0u;
    {
        const bool branch_taken_0x27fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fff0) {
            ctx->pc = 0x280200u;
            goto label_280200;
        }
    }
    ctx->pc = 0x27FFF8u;
label_27fff8:
    // 0x27fff8: 0x3c02bfaa  lui         $v0, 0xBFAA
    ctx->pc = 0x27fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49066 << 16));
    // 0x27fffc: 0xc64107a4  lwc1        $f1, 0x7A4($s2)
    ctx->pc = 0x27fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280000: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x280000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x280004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280008: 0x0  nop
    ctx->pc = 0x280008u;
    // NOP
    // 0x28000c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28000cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280010: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x280010u;
    {
        const bool branch_taken_0x280010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x280014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280010u;
        // 0x280014: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280010) {
            ctx->pc = 0x280048u;
            goto label_280048;
        }
    }
    ctx->pc = 0x280018u;
    // 0x280018: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x280018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28001c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280020: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x280020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x280024: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280028: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x280028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28002c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28002cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280038: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x280038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28003c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28003cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280040: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x280040u;
    {
        const bool branch_taken_0x280040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280040u;
        // 0x280044: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280040) {
            ctx->pc = 0x280078u;
            goto label_280078;
        }
    }
    ctx->pc = 0x280048u;
label_280048:
    // 0x280048: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x280048u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28004c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280050: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x280050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x280054: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280058: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x280058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28005c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280068: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x280068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28006c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28006cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280070: 0xe64007a4  swc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
    // 0x280074: 0x0  nop
    ctx->pc = 0x280074u;
    // NOP
label_280078:
    // 0x280078: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x280078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x28007c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x28007Cu;
    {
        const bool branch_taken_0x28007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28007c) {
            ctx->pc = 0x280108u;
            goto label_280108;
        }
    }
    ctx->pc = 0x280084u;
    // 0x280084: 0xc64107a4  lwc1        $f1, 0x7A4($s2)
    ctx->pc = 0x280084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280088: 0x3c02bfaa  lui         $v0, 0xBFAA
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49066 << 16));
    // 0x28008c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x28008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x280090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280094: 0x0  nop
    ctx->pc = 0x280094u;
    // NOP
    // 0x280098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x280098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28009c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x28009Cu;
    {
        const bool branch_taken_0x28009c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28009Cu;
        // 0x2800a0: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28009c) {
            ctx->pc = 0x2800D8u;
            goto label_2800d8;
        }
    }
    ctx->pc = 0x2800A4u;
    // 0x2800a4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2800a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2800a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2800ac: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x2800acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x2800b0: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x2800b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2800b4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2800b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2800b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2800b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2800bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2800c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2800c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2800c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2800c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2800c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2800cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2800CCu;
    {
        const bool branch_taken_0x2800cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800CCu;
        // 0x2800d0: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800cc) {
            ctx->pc = 0x280108u;
            goto label_280108;
        }
    }
    ctx->pc = 0x2800D4u;
    // 0x2800d4: 0x0  nop
    ctx->pc = 0x2800d4u;
    // NOP
label_2800d8:
    // 0x2800d8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2800d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2800dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2800dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2800e0: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x2800e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x2800e4: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x2800e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2800e8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2800ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2800ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2800f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2800f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2800f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2800f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2800f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2800fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2800fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280100: 0xe64007a4  swc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
    // 0x280104: 0x0  nop
    ctx->pc = 0x280104u;
    // NOP
label_280108:
    // 0x280108: 0x8e42092c  lw          $v0, 0x92C($s2)
    ctx->pc = 0x280108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2348)));
    // 0x28010c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280114: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x280114u;
    {
        const bool branch_taken_0x280114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280114u;
        // 0x280118: 0xae42092c  sw          $v0, 0x92C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280114) {
            ctx->pc = 0x280200u;
            goto label_280200;
        }
    }
    ctx->pc = 0x28011Cu;
    // 0x28011c: 0x0  nop
    ctx->pc = 0x28011cu;
    // NOP
label_280120:
    // 0x280120: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x280120u;
    {
        const bool branch_taken_0x280120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280120) {
            ctx->pc = 0x280158u;
            goto label_280158;
        }
    }
    ctx->pc = 0x280128u;
    // 0x280128: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x280128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28012c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280130: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x280130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x280134: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280138: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x280138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28013c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280148: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x280148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28014c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28014cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280150: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x280150u;
    {
        const bool branch_taken_0x280150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280150u;
        // 0x280154: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280150) {
            ctx->pc = 0x280188u;
            goto label_280188;
        }
    }
    ctx->pc = 0x280158u;
label_280158:
    // 0x280158: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x280158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28015c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280160: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x280160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x280164: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280168: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x280168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28016c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28016cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280178: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x280178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28017c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28017cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x280180: 0xe64007a4  swc1        $f0, 0x7A4($s2)
    ctx->pc = 0x280180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
    // 0x280184: 0x0  nop
    ctx->pc = 0x280184u;
    // NOP
label_280188:
    // 0x280188: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x280188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x28018c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28018Cu;
    {
        const bool branch_taken_0x28018c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28018c) {
            ctx->pc = 0x280200u;
            goto label_280200;
        }
    }
    ctx->pc = 0x280194u;
    // 0x280194: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x280194u;
    {
        const bool branch_taken_0x280194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280194) {
            ctx->pc = 0x2801D0u;
            goto label_2801d0;
        }
    }
    ctx->pc = 0x28019Cu;
    // 0x28019c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x28019cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2801a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2801a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2801a4: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x2801a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x2801a8: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x2801a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2801ac: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2801acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2801b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2801b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2801b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2801b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2801b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2801b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2801bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2801bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2801c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2801c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2801c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2801C4u;
    {
        const bool branch_taken_0x2801c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801C4u;
        // 0x2801c8: 0xe64007a4  swc1        $f0, 0x7A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801c4) {
            ctx->pc = 0x280200u;
            goto label_280200;
        }
    }
    ctx->pc = 0x2801CCu;
    // 0x2801cc: 0x0  nop
    ctx->pc = 0x2801ccu;
    // NOP
label_2801d0:
    // 0x2801d0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2801d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2801d4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2801d8: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x2801d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x2801dc: 0xc64007a4  lwc1        $f0, 0x7A4($s2)
    ctx->pc = 0x2801dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2801e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2801e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2801e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2801e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2801e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2801e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2801ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2801f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2801f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2801f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2801f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2801f8: 0xe64007a4  swc1        $f0, 0x7A4($s2)
    ctx->pc = 0x2801f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1956), bits); }
    // 0x2801fc: 0x0  nop
    ctx->pc = 0x2801fcu;
    // NOP
label_280200:
    // 0x280200: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x280200u;
    {
        const bool branch_taken_0x280200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280200) {
            ctx->pc = 0x280240u;
            goto label_280240;
        }
    }
    ctx->pc = 0x280208u;
    // 0x280208: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x280208u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x28020c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280210: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x280210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    // 0x280214: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x280214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x280218: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x280218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28021c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x28021cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x280220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280228: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28022c: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x28022Cu;
    SET_GPR_U32(ctx, 31, 0x280234u);
    ctx->pc = 0x280230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28022Cu;
    // 0x280230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x28022Cu, 0x280234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280234u;
label_280234:
    // 0x280234: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x280234u;
    {
        const bool branch_taken_0x280234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280234) {
            ctx->pc = 0x280270u;
            goto label_280270;
        }
    }
    ctx->pc = 0x28023Cu;
    // 0x28023c: 0x0  nop
    ctx->pc = 0x28023cu;
    // NOP
label_280240:
    // 0x280240: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x280240u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x280244: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280248: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x280248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    // 0x28024c: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x28024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x280250: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x280250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x280254: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x280254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x280258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x280258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28025c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280260: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x280260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280264: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x280264u;
    SET_GPR_U32(ctx, 31, 0x28026Cu);
    ctx->pc = 0x280268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280264u;
    // 0x280268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x280264u, 0x28026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28026Cu;
label_28026c:
    // 0x28026c: 0x0  nop
    ctx->pc = 0x28026cu;
    // NOP
label_280270:
    // 0x280270: 0x9382863c  lbu         $v0, -0x79C4($gp)
    ctx->pc = 0x280270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x280274: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x280274u;
    {
        const bool branch_taken_0x280274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280274) {
            ctx->pc = 0x2802E8u;
            goto label_2802e8;
        }
    }
    ctx->pc = 0x28027Cu;
    // 0x28027c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x28027Cu;
    {
        const bool branch_taken_0x28027c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28027c) {
            ctx->pc = 0x2802B8u;
            goto label_2802b8;
        }
    }
    ctx->pc = 0x280284u;
    // 0x280284: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x280284u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x280288: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28028c: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x28028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    // 0x280290: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x280290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x280294: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x280294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x280298: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28029c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28029cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2802a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2802a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2802a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2802a8: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x2802A8u;
    SET_GPR_U32(ctx, 31, 0x2802B0u);
    ctx->pc = 0x2802ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802A8u;
    // 0x2802ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2802A8u, 0x2802B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802B0u;
label_2802b0:
    // 0x2802b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2802B0u;
    {
        const bool branch_taken_0x2802b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802b0) {
            ctx->pc = 0x2802E8u;
            goto label_2802e8;
        }
    }
    ctx->pc = 0x2802B8u;
label_2802b8:
    // 0x2802b8: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2802b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2802bc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2802bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2802c0: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x2802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    // 0x2802c4: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x2802c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x2802c8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2802c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2802cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2802ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2802d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2802d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2802d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2802d8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2802d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2802dc: 0xc0968e8  jal         func_25A3A0
    ctx->pc = 0x2802DCu;
    SET_GPR_U32(ctx, 31, 0x2802E4u);
    ctx->pc = 0x2802E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2802DCu;
    // 0x2802e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3A0u, 0x2802DCu, 0x2802E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802E4u;
label_2802e4:
    // 0x2802e4: 0x0  nop
    ctx->pc = 0x2802e4u;
    // NOP
label_2802e8:
    // 0x2802e8: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x2802e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2802ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2802ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2802f0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2802F0u;
    {
        const bool branch_taken_0x2802f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2802f0) {
            ctx->pc = 0x280350u;
            goto label_280350;
        }
    }
    ctx->pc = 0x2802F8u;
    // 0x2802f8: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x2802f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2802fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2802fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280300: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x280300u;
    {
        const bool branch_taken_0x280300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280300) {
            ctx->pc = 0x280350u;
            goto label_280350;
        }
    }
    ctx->pc = 0x280308u;
    // 0x280308: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x280308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x28030c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x28030cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280310: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x280310u;
    {
        const bool branch_taken_0x280310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280310) {
            ctx->pc = 0x280350u;
            goto label_280350;
        }
    }
    ctx->pc = 0x280318u;
    // 0x280318: 0x96420786  lhu         $v0, 0x786($s2)
    ctx->pc = 0x280318u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1926)));
    // 0x28031c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28031Cu;
    {
        const bool branch_taken_0x28031c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28031Cu;
        // 0x280320: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28031c) {
            ctx->pc = 0x280350u;
            goto label_280350;
        }
    }
    ctx->pc = 0x280324u;
    // 0x280324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x280324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280328: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x280328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28032c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28032cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280330: 0xc0414dc  jal         func_105370
    ctx->pc = 0x280330u;
    SET_GPR_U32(ctx, 31, 0x280338u);
    ctx->pc = 0x280334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280330u;
    // 0x280334: 0x264507a0  addiu       $a1, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x280330u, 0x280338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280338u;
label_280338:
    // 0x280338: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x280338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x28033c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x28033cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280340: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x280340u;
    SET_GPR_U32(ctx, 31, 0x280348u);
    ctx->pc = 0x280344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280340u;
    // 0x280344: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x280340u, 0x280348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280348u;
label_280348:
    // 0x280348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280348u;
    {
        const bool branch_taken_0x280348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280348) {
            ctx->pc = 0x280360u;
            goto label_280360;
        }
    }
    ctx->pc = 0x280350u;
label_280350:
    // 0x280350: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x280350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x280354: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x280354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280358: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x280358u;
    SET_GPR_U32(ctx, 31, 0x280360u);
    ctx->pc = 0x28035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280358u;
    // 0x28035c: 0x264607a0  addiu       $a2, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x280358u, 0x280360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280360u;
label_280360:
    // 0x280360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x280360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280364: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280364u;
    {
        const bool branch_taken_0x280364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x280364) {
            ctx->pc = 0x280380u;
            goto label_280380;
        }
    }
    ctx->pc = 0x28036Cu;
    // 0x28036c: 0x8e4306b8  lw          $v1, 0x6B8($s2)
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1720)));
    // 0x280370: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x280370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x280374: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x280374u;
    {
        const bool branch_taken_0x280374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280374u;
        // 0x280378: 0xae4306b8  sw          $v1, 0x6B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280374) {
            ctx->pc = 0x280490u;
            goto label_280490;
        }
    }
    ctx->pc = 0x28037Cu;
    // 0x28037c: 0x0  nop
    ctx->pc = 0x28037cu;
    // NOP
label_280380:
    // 0x280380: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x280380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x280384: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x280388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28038c: 0x24630b9b  addiu       $v1, $v1, 0xB9B
    ctx->pc = 0x28038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2971));
    // 0x280390: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x280390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x280394: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x280394u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x280398: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x280398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28039c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2803a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2803a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2803a4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2803A4u;
    {
        const bool branch_taken_0x2803a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2803A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803A4u;
        // 0x2803a8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803a4) {
            ctx->pc = 0x280438u;
            goto label_280438;
        }
    }
    ctx->pc = 0x2803ACu;
    // 0x2803ac: 0xc096988  jal         func_25A620
    ctx->pc = 0x2803ACu;
    SET_GPR_U32(ctx, 31, 0x2803B4u);
    ctx->pc = 0x2803B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2803ACu;
    // 0x2803b0: 0x26450080  addiu       $a1, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2803ACu, 0x2803B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803B4u;
label_2803b4:
    // 0x2803b4: 0xc6420834  lwc1        $f2, 0x834($s2)
    ctx->pc = 0x2803b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2803b8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2803b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2803bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2803bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2803c0: 0x0  nop
    ctx->pc = 0x2803c0u;
    // NOP
    // 0x2803c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2803c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2803c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2803c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2803cc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x2803CCu;
    {
        const bool branch_taken_0x2803cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2803D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803CCu;
        // 0x2803d0: 0xe6400834  swc1        $f0, 0x834($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803cc) {
            ctx->pc = 0x280438u;
            goto label_280438;
        }
    }
    ctx->pc = 0x2803D4u;
    // 0x2803d4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2803d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2803d8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2803d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2803dc: 0x24420b9a  addiu       $v0, $v0, 0xB9A
    ctx->pc = 0x2803dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2970));
    // 0x2803e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2803e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2803e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2803e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2803e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2803ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2803ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2803f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2803f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2803f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2803F4u;
    {
        const bool branch_taken_0x2803f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803F4u;
        // 0x2803f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803f4) {
            ctx->pc = 0x280430u;
            goto label_280430;
        }
    }
    ctx->pc = 0x2803FCu;
    // 0x2803fc: 0x27848b00  addiu       $a0, $gp, -0x7500
    ctx->pc = 0x2803fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
    // 0x280400: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280404: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x280404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x280408: 0x24426320  addiu       $v0, $v0, 0x6320
    ctx->pc = 0x280408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25376));
    // 0x28040c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280410: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x280410u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280414: 0xc0c305c  jal         func_30C170
    ctx->pc = 0x280414u;
    SET_GPR_U32(ctx, 31, 0x28041Cu);
    ctx->pc = 0x280418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280414u;
    // 0x280418: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x280414u, 0x28041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28041Cu;
label_28041c:
    // 0x28041c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280420: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x280420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x280424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280428: 0xc0aaa68  jal         func_2AA9A0
    ctx->pc = 0x280428u;
    SET_GPR_U32(ctx, 31, 0x280430u);
    ctx->pc = 0x28042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280428u;
    // 0x28042c: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA9A0u, 0x280428u, 0x280430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280430u;
label_280430:
    // 0x280430: 0xae400834  sw          $zero, 0x834($s2)
    ctx->pc = 0x280430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 0));
    // 0x280434: 0x0  nop
    ctx->pc = 0x280434u;
    // NOP
label_280438:
    // 0x280438: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x280438u;
    SET_GPR_U32(ctx, 31, 0x280440u);
    ctx->pc = 0x28043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280438u;
    // 0x28043c: 0x264407a0  addiu       $a0, $s2, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x280438u, 0x280440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280440u;
label_280440:
    // 0x280440: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x280440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x280444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280448: 0x0  nop
    ctx->pc = 0x280448u;
    // NOP
    // 0x28044c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28044cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280450: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x280450u;
    {
        const bool branch_taken_0x280450 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280450u;
        // 0x280454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280450) {
            ctx->pc = 0x280460u;
            goto label_280460;
        }
    }
    ctx->pc = 0x280458u;
    // 0x280458: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x280458u;
    {
        const bool branch_taken_0x280458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280458) {
            ctx->pc = 0x280490u;
            goto label_280490;
        }
    }
    ctx->pc = 0x280460u;
label_280460:
    // 0x280460: 0x264207a0  addiu       $v0, $s2, 0x7A0
    ctx->pc = 0x280460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
    // 0x280464: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x280464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x280468: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x280468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28046c: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x28046cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x280470: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x280474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280478: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x280478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x28047c: 0xae440148  sw          $a0, 0x148($s2)
    ctx->pc = 0x28047cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 4));
    // 0x280480: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x280484: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x280484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x280488: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x280488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x28048c: 0x0  nop
    ctx->pc = 0x28048cu;
    // NOP
label_280490:
    // 0x280490: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x280490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x280494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28049c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28049cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2804a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2804A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2804A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804A0u;
        // 0x2804a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2804A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2804A8u;
}
