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

// Function: sub_002D8930
// Address: 0x2d8930 - 0x2d8bbc
void sub_002D8930_0x2d8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8930_0x2d8930");
#endif

    switch (ctx->pc) {
        case 0x2d8984u: goto label_2d8984;
        case 0x2d8b68u: goto label_2d8b68;
        case 0x2d8b90u: goto label_2d8b90;
        default: break;
    }

    ctx->pc = 0x2d8930u;

    // 0x2d8930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d893c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d893cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8940: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d8940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d8944: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d8944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d8948: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2D8948u;
    {
        const bool branch_taken_0x2d8948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8948u;
        // 0x2d894c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8948) {
            ctx->pc = 0x2D8BA8u;
            goto label_2d8ba8;
        }
    }
    ctx->pc = 0x2D8950u;
    // 0x2d8950: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x2d8950u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d8954: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8958: 0xa6200036  sh          $zero, 0x36($s1)
    ctx->pc = 0x2d8958u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d895c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d8960: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d8964: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d8964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d8968: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x2d8968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x2d896c: 0xae25003c  sw          $a1, 0x3C($s1)
    ctx->pc = 0x2d896cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 5));
    // 0x2d8970: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d8970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d8974: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d8974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d8978: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d897c: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D897Cu;
    SET_GPR_U32(ctx, 31, 0x2D8984u);
    ctx->pc = 0x2D8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D897Cu;
    // 0x2d8980: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D897Cu, 0x2D8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8984u;
label_2d8984:
    // 0x2d8984: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2d8984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8988: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2d8988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2d898c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d8990: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2d8990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2d8994: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2d8994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2d8998: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d899c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d899cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d89a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d89a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d89a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d89a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d89a8: 0x0  nop
    ctx->pc = 0x2d89a8u;
    // NOP
    // 0x2d89ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d89acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d89b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d89b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d89b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D89B4u;
    {
        const bool branch_taken_0x2d89b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d89b4) {
            ctx->pc = 0x2D89CCu;
            goto label_2d89cc;
        }
    }
    ctx->pc = 0x2D89BCu;
    // 0x2d89bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d89bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d89c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d89c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d89c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D89C4u;
    {
        const bool branch_taken_0x2d89c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D89C4u;
        // 0x2d89c8: 0x8e220200  lw          $v0, 0x200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d89c4) {
            ctx->pc = 0x2D89E8u;
            goto label_2d89e8;
        }
    }
    ctx->pc = 0x2D89CCu;
label_2d89cc:
    // 0x2d89cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d89ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d89d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d89d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d89d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d89d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d89d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d89dc: 0x0  nop
    ctx->pc = 0x2d89dcu;
    // NOP
    // 0x2d89e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d89e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d89e4: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x2d89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_2d89e8:
    // 0x2d89e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2d89e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d89ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D89ECu;
    {
        const bool branch_taken_0x2d89ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89ec) {
            ctx->pc = 0x2D8A10u;
            goto label_2d8a10;
        }
    }
    ctx->pc = 0x2D89F4u;
    // 0x2d89f4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2d89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2d89f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d89f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d89fc: 0x0  nop
    ctx->pc = 0x2d89fcu;
    // NOP
    // 0x2d8a00: 0x0  nop
    ctx->pc = 0x2d8a00u;
    // NOP
    // 0x2d8a04: 0x1012  mflo        $v0
    ctx->pc = 0x2d8a04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d8a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8A08u;
    {
        const bool branch_taken_0x2d8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A08u;
        // 0x2d8a0c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a08) {
            ctx->pc = 0x2D8A14u;
            goto label_2d8a14;
        }
    }
    ctx->pc = 0x2D8A10u;
label_2d8a10:
    // 0x2d8a10: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2d8a14:
    // 0x2d8a14: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2d8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2d8a18: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2d8a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d8a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d8a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8a20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2d8a24: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2d8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2d8a28: 0x8e240204  lw          $a0, 0x204($s1)
    ctx->pc = 0x2d8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x2d8a2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d8a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8a34: 0x0  nop
    ctx->pc = 0x2d8a34u;
    // NOP
    // 0x2d8a38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d8a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8a3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d8a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8a44: 0x0  nop
    ctx->pc = 0x2d8a44u;
    // NOP
    // 0x2d8a48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d8a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8a4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8A4Cu;
    {
        const bool branch_taken_0x2d8a4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A4Cu;
        // 0x2d8a50: 0x422c0  sll         $a0, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a4c) {
            ctx->pc = 0x2D8A64u;
            goto label_2d8a64;
        }
    }
    ctx->pc = 0x2D8A54u;
    // 0x2d8a54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8a54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8a58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d8a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d8a5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8A5Cu;
    {
        const bool branch_taken_0x2d8a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A5Cu;
        // 0x2d8a60: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a5c) {
            ctx->pc = 0x2D8A80u;
            goto label_2d8a80;
        }
    }
    ctx->pc = 0x2D8A64u;
label_2d8a64:
    // 0x2d8a64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d8a64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8a68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d8a6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8a70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d8a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d8a74: 0x0  nop
    ctx->pc = 0x2d8a74u;
    // NOP
    // 0x2d8a78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d8a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8a7c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2d8a7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2d8a80:
    // 0x2d8a80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d8a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8a88: 0x2812  mflo        $a1
    ctx->pc = 0x2d8a88u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2d8a8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d8a90: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2d8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2d8a94: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d8a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d8a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d8a9c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2d8a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d8aa0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d8aa0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d8aa4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x2d8aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2d8aa8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d8aac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d8ab0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2d8ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8ab4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2d8ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2d8ab8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d8ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d8abc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d8abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8ac0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8AC0u;
    {
        const bool branch_taken_0x2d8ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d8ac0) {
            ctx->pc = 0x2D8AD8u;
            goto label_2d8ad8;
        }
    }
    ctx->pc = 0x2D8AC8u;
    // 0x2d8ac8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8acc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d8accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d8ad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D8AD0u;
    {
        const bool branch_taken_0x2d8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AD0u;
        // 0x2d8ad4: 0x246a0080  addiu       $t2, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ad0) {
            ctx->pc = 0x2D8AF4u;
            goto label_2d8af4;
        }
    }
    ctx->pc = 0x2D8AD8u;
label_2d8ad8:
    // 0x2d8ad8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d8ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d8adc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d8ae0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8ae4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d8ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d8ae8: 0x0  nop
    ctx->pc = 0x2d8ae8u;
    // NOP
    // 0x2d8aec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d8aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8af0: 0x246a0080  addiu       $t2, $v1, 0x80
    ctx->pc = 0x2d8af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2d8af4:
    // 0x2d8af4: 0x2d410100  sltiu       $at, $t2, 0x100
    ctx->pc = 0x2d8af4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d8af8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8AF8u;
    {
        const bool branch_taken_0x2d8af8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8af8) {
            ctx->pc = 0x2D8B08u;
            goto label_2d8b08;
        }
    }
    ctx->pc = 0x2D8B00u;
    // 0x2d8b00: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2d8b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8b04: 0x0  nop
    ctx->pc = 0x2d8b04u;
    // NOP
label_2d8b08:
    // 0x2d8b08: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d8b0c: 0x101e00  sll         $v1, $s0, 24
    ctx->pc = 0x2d8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2d8b10: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x2d8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x2d8b14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d8b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8b18: 0x2a010080  slti        $at, $s0, 0x80
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d8b1c: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x2d8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x2d8b20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d8b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d8b24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8B24u;
    {
        const bool branch_taken_0x2d8b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B24u;
        // 0x2d8b28: 0x1425025  or          $t2, $t2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b24) {
            ctx->pc = 0x2D8B38u;
            goto label_2d8b38;
        }
    }
    ctx->pc = 0x2D8B2Cu;
    // 0x2d8b2c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2d8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d8b30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d8b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d8b34: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2d8b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_2d8b38:
    // 0x2d8b38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d8b3c: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x2d8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x2d8b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b44: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2d8b44u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6546u));
    // 0x2d8b48: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d8b4c: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d8b4cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E6544u));
    // 0x2d8b50: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6548u));
    // 0x2d8b54: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E654Au));
    // 0x2d8b58: 0x244201ac  addiu       $v0, $v0, 0x1AC
    ctx->pc = 0x2d8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 428));
    // 0x2d8b5c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d8b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8b60: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8B60u;
    SET_GPR_U32(ctx, 31, 0x2D8B68u);
    ctx->pc = 0x2D8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B60u;
    // 0x2d8b64: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8B60u, 0x2D8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B68u;
label_2d8b68:
    // 0x2d8b68: 0x2a010080  slti        $at, $s0, 0x80
    ctx->pc = 0x2d8b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d8b6c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8B6Cu;
    {
        const bool branch_taken_0x2d8b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b6c) {
            ctx->pc = 0x2D8B88u;
            goto label_2d8b88;
        }
    }
    ctx->pc = 0x2D8B74u;
    // 0x2d8b74: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2d8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2d8b78: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d8b7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8b80: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2d8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2d8b84: 0x0  nop
    ctx->pc = 0x2d8b84u;
    // NOP
label_2d8b88:
    // 0x2d8b88: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D8B88u;
    SET_GPR_U32(ctx, 31, 0x2D8B90u);
    ctx->pc = 0x2D8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8B88u;
    // 0x2d8b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D8B88u, 0x2D8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8B90u;
label_2d8b90:
    // 0x2d8b90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d8b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d8b94: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d8b98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d8b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d8b9c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d8ba0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8ba4: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d8ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
label_2d8ba8:
    // 0x2d8ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BB4u;
        // 0x2d8bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8BBCu;
}
