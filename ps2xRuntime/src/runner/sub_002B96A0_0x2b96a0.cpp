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

// Function: sub_002B96A0
// Address: 0x2b96a0 - 0x2b9a38
void sub_002B96A0_0x2b96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B96A0_0x2b96a0");
#endif

    switch (ctx->pc) {
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b9a0cu: goto label_2b9a0c;
        default: break;
    }

    ctx->pc = 0x2b96a0u;

    // 0x2b96a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b96a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b96a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b96a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b96ac: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2b96acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2b96b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b96b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b96b4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2b96b8: 0xa025e000  sb          $a1, -0x2000($at)
    ctx->pc = 0x2b96b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2b96bc: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2b96bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2b96c0: 0x8c8829c0  lw          $t0, 0x29C0($a0)
    ctx->pc = 0x2b96c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2b96c4: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x2b96c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b96c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b96c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b96cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b96d0: 0x8d070024  lw          $a3, 0x24($t0)
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2b96d4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2b96d8: 0xad050024  sw          $a1, 0x24($t0)
    ctx->pc = 0x2b96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
    // 0x2b96dc: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x2b96dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2b96e0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b96e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b96e4: 0xac8506c8  sw          $a1, 0x6C8($a0)
    ctx->pc = 0x2b96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 5));
    // 0x2b96e8: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x2b96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2b96ec: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b96ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b96f0: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x2b96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x2b96f4: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2b96f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2b96f8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x2b96f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x2b96fc: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2b96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x2b9700: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2b9700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2b9704: 0x108300c4  beq         $a0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2B9704u;
    {
        const bool branch_taken_0x2b9704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9704u;
        // 0x2b9708: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9704) {
            ctx->pc = 0x2B9A18u;
            goto label_2b9a18;
        }
    }
    ctx->pc = 0x2B970Cu;
    // 0x2b970c: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B970Cu;
    {
        const bool branch_taken_0x2b970c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b970c) {
            ctx->pc = 0x2B97C8u;
            goto label_2b97c8;
        }
    }
    ctx->pc = 0x2B9714u;
    // 0x2b9714: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9714u;
    {
        const bool branch_taken_0x2b9714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9714) {
            ctx->pc = 0x2B9728u;
            goto label_2b9728;
        }
    }
    ctx->pc = 0x2B971Cu;
    // 0x2b971c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2B971Cu;
    {
        const bool branch_taken_0x2b971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b971c) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B9724u;
    // 0x2b9724: 0x0  nop
    ctx->pc = 0x2b9724u;
    // NOP
label_2b9728:
    // 0x2b9728: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b972c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b9730: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b9734: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b9734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b9738: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b9738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b973c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b973cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b9740: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b9740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b9744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9748: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b9748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b974c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b974cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b9750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9754: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9754u;
    {
        const bool branch_taken_0x2b9754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9754) {
            ctx->pc = 0x2B976Cu;
            goto label_2b976c;
        }
    }
    ctx->pc = 0x2B975Cu;
    // 0x2b975c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b975cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b9760: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b9760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b9764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9764u;
    {
        const bool branch_taken_0x2b9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9764u;
        // 0x2b9768: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9764) {
            ctx->pc = 0x2B9788u;
            goto label_2b9788;
        }
    }
    ctx->pc = 0x2B976Cu;
label_2b976c:
    // 0x2b976c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b976cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b9770: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b9774: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b9774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b9778: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b9778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b977c: 0x0  nop
    ctx->pc = 0x2b977cu;
    // NOP
    // 0x2b9780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b9780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b9784: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x2b9784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2b9788:
    // 0x2b9788: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b9788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b978c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2b978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b9790: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b9790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b9794: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B9794u;
    SET_GPR_U32(ctx, 31, 0x2B979Cu);
    ctx->pc = 0x2B9798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9794u;
    // 0x2b9798: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B9794u, 0x2B979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B979Cu;
label_2b979c:
    // 0x2b979c: 0x96050828  lhu         $a1, 0x828($s0)
    ctx->pc = 0x2b979cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2b97a0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b97a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b97a8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b97a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b97ac: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2b97acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2b97b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b97b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97b4: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x2B97B4u;
    SET_GPR_U32(ctx, 31, 0x2B97BCu);
    ctx->pc = 0x2B97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B97B4u;
    // 0x2b97b8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x2B97B4u, 0x2B97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97BCu;
label_2b97bc:
    // 0x2b97bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b97c0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2B97C0u;
    {
        const bool branch_taken_0x2b97c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97C0u;
        // 0x2b97c4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97c0) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B97C8u;
label_2b97c8:
    // 0x2b97c8: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x2b97c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2b97cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B97CCu;
    {
        const bool branch_taken_0x2b97cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b97cc) {
            ctx->pc = 0x2B97E0u;
            goto label_2b97e0;
        }
    }
    ctx->pc = 0x2B97D4u;
    // 0x2b97d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b97d8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2B97D8u;
    {
        const bool branch_taken_0x2b97d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97D8u;
        // 0x2b97dc: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97d8) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B97E0u;
label_2b97e0:
    // 0x2b97e0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b97e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b97e8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b97ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b97ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b97f0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b97f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b97f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b97f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b97f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b97fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b97fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9800: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b9800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b9804: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b9804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b9808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b9808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b980c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B980Cu;
    {
        const bool branch_taken_0x2b980c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b980c) {
            ctx->pc = 0x2B9824u;
            goto label_2b9824;
        }
    }
    ctx->pc = 0x2B9814u;
    // 0x2b9814: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b9814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b9818: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b9818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b981c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B981Cu;
    {
        const bool branch_taken_0x2b981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B981Cu;
        // 0x2b9820: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b981c) {
            ctx->pc = 0x2B9840u;
            goto label_2b9840;
        }
    }
    ctx->pc = 0x2B9824u;
label_2b9824:
    // 0x2b9824: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b9824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b9828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b9828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b982c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b982cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b9830: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b9830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b9834: 0x0  nop
    ctx->pc = 0x2b9834u;
    // NOP
    // 0x2b9838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b9838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b983c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2b983cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2b9840:
    // 0x2b9840: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b9840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b9844: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2b9844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b9848: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2b9848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2b984c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b984cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9850: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b9850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9854: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2B9854u;
    SET_GPR_U32(ctx, 31, 0x2B985Cu);
    ctx->pc = 0x2B9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9854u;
    // 0x2b9858: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2B9854u, 0x2B985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B985Cu;
label_2b985c:
    // 0x2b985c: 0x9203083d  lbu         $v1, 0x83D($s0)
    ctx->pc = 0x2b985cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2109)));
    // 0x2b9860: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b9860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b9864: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B9864u;
    {
        const bool branch_taken_0x2b9864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9864u;
        // 0x2b9868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9864) {
            ctx->pc = 0x2B9970u;
            goto label_2b9970;
        }
    }
    ctx->pc = 0x2B986Cu;
    // 0x2b986c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B986Cu;
    {
        const bool branch_taken_0x2b986c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B986Cu;
        // 0x2b9870: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b986c) {
            ctx->pc = 0x2B98B8u;
            goto label_2b98b8;
        }
    }
    ctx->pc = 0x2B9874u;
    // 0x2b9874: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9874u;
    {
        const bool branch_taken_0x2b9874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b9874) {
            ctx->pc = 0x2B9888u;
            goto label_2b9888;
        }
    }
    ctx->pc = 0x2B987Cu;
    // 0x2b987c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2B987Cu;
    {
        const bool branch_taken_0x2b987c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b987c) {
            ctx->pc = 0x2B9A00u;
            goto label_2b9a00;
        }
    }
    ctx->pc = 0x2B9884u;
    // 0x2b9884: 0x0  nop
    ctx->pc = 0x2b9884u;
    // NOP
label_2b9888:
    // 0x2b9888: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2b9888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b988c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2B988Cu;
    SET_GPR_U32(ctx, 31, 0x2B9894u);
    ctx->pc = 0x2B9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B988Cu;
    // 0x2b9890: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B988Cu, 0x2B9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9894u;
label_2b9894:
    // 0x2b9894: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x2b9894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b9898: 0x240300fb  addiu       $v1, $zero, 0xFB
    ctx->pc = 0x2b9898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x2b989c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2b989cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b98a0: 0xa2002ad8  sb          $zero, 0x2AD8($s0)
    ctx->pc = 0x2b98a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10968), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98a4: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x2b98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2b98a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b98ac: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x2b98acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x2b98b0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2B98B0u;
    {
        const bool branch_taken_0x2b98b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98B0u;
        // 0x2b98b4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98b0) {
            ctx->pc = 0x2B9A00u;
            goto label_2b9a00;
        }
    }
    ctx->pc = 0x2B98B8u;
label_2b98b8:
    // 0x2b98b8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2b98b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b98bc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b98c0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B98C0u;
    {
        const bool branch_taken_0x2b98c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b98c0) {
            ctx->pc = 0x2B98F0u;
            goto label_2b98f0;
        }
    }
    ctx->pc = 0x2B98C8u;
    // 0x2b98c8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2b98c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b98d0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2b98d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2b98d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98d8: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2b98d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b98dc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b98dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b98e0: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2b98e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B98E4u;
    {
        const bool branch_taken_0x2b98e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B98E4u;
        // 0x2b98e8: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b98e4) {
            ctx->pc = 0x2B9910u;
            goto label_2b9910;
        }
    }
    ctx->pc = 0x2B98ECu;
    // 0x2b98ec: 0x0  nop
    ctx->pc = 0x2b98ecu;
    // NOP
label_2b98f0:
    // 0x2b98f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2b98f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98f4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2b98f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b98f8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2b98fc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2b98fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b9900: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b9904: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2b9904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9908: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b990c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2b990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2b9910:
    // 0x2b9910: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2B9910u;
    SET_GPR_U32(ctx, 31, 0x2B9918u);
    ctx->pc = 0x2B9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9910u;
    // 0x2b9914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2B9910u, 0x2B9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9918u;
label_2b9918:
    // 0x2b9918: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b9918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b991c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9920: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2B9920u;
    SET_GPR_U32(ctx, 31, 0x2B9928u);
    ctx->pc = 0x2B9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9920u;
    // 0x2b9924: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2B9920u, 0x2B9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9928u;
label_2b9928:
    // 0x2b9928: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9930: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x2B9930u;
    SET_GPR_U32(ctx, 31, 0x2B9938u);
    ctx->pc = 0x2B9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9930u;
    // 0x2b9934: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x2B9930u, 0x2B9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9938u;
label_2b9938:
    // 0x2b9938: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b9938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b993c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9940: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b9944: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b9944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b9948: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x2B9948u;
    SET_GPR_U32(ctx, 31, 0x2B9950u);
    ctx->pc = 0x2B994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9948u;
    // 0x2b994c: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x2B9948u, 0x2B9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9950u;
label_2b9950:
    // 0x2b9950: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2b9950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b9954: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b9954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b9958: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x2b9958u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2b995c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9960: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x2b9960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b9964: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B9964u;
    {
        const bool branch_taken_0x2b9964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9964u;
        // 0x2b9968: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9964) {
            ctx->pc = 0x2B9A00u;
            goto label_2b9a00;
        }
    }
    ctx->pc = 0x2B996Cu;
    // 0x2b996c: 0x0  nop
    ctx->pc = 0x2b996cu;
    // NOP
label_2b9970:
    // 0x2b9970: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2b9970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b9974: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b9978: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B9978u;
    {
        const bool branch_taken_0x2b9978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9978) {
            ctx->pc = 0x2B99A8u;
            goto label_2b99a8;
        }
    }
    ctx->pc = 0x2B9980u;
    // 0x2b9980: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2b9980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9984: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b9984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b9988: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2b9988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2b998c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2b998cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9990: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2b9990u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b9994: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b9994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b9998: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2b9998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b999c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B999Cu;
    {
        const bool branch_taken_0x2b999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B999Cu;
        // 0x2b99a0: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b999c) {
            ctx->pc = 0x2B99C8u;
            goto label_2b99c8;
        }
    }
    ctx->pc = 0x2B99A4u;
    // 0x2b99a4: 0x0  nop
    ctx->pc = 0x2b99a4u;
    // NOP
label_2b99a8:
    // 0x2b99a8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2b99a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b99ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2b99acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b99b0: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2b99b4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2b99b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b99b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b99bc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2b99bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b99c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b99c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b99c4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2b99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_2b99c8:
    // 0x2b99c8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2B99C8u;
    SET_GPR_U32(ctx, 31, 0x2B99D0u);
    ctx->pc = 0x2B99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99C8u;
    // 0x2b99cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2B99C8u, 0x2B99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99D0u;
label_2b99d0:
    // 0x2b99d0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2b99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b99d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b99d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99d8: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x2B99D8u;
    SET_GPR_U32(ctx, 31, 0x2B99E0u);
    ctx->pc = 0x2B99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99D8u;
    // 0x2b99dc: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x2B99D8u, 0x2B99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99E0u;
label_2b99e0:
    // 0x2b99e0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2b99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b99e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99e8: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x2B99E8u;
    SET_GPR_U32(ctx, 31, 0x2B99F0u);
    ctx->pc = 0x2B99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99E8u;
    // 0x2b99ec: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x2B99E8u, 0x2B99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x2b99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b99f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b99f8: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x2b99f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b99fc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2b99fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2b9a00:
    // 0x2b9a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a04: 0xc0a6af8  jal         func_29ABE0
    ctx->pc = 0x2B9A04u;
    SET_GPR_U32(ctx, 31, 0x2B9A0Cu);
    ctx->pc = 0x2B9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A04u;
    // 0x2b9a08: 0xa200083d  sb          $zero, 0x83D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2109), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ABE0u, 0x2B9A04u, 0x2B9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A0Cu;
label_2b9a0c:
    // 0x2b9a0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9A0Cu;
    {
        const bool branch_taken_0x2b9a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a0c) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B9A14u;
    // 0x2b9a14: 0x0  nop
    ctx->pc = 0x2b9a14u;
    // NOP
label_2b9a18:
    // 0x2b9a18: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2b9a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2b9a1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9A1Cu;
    {
        const bool branch_taken_0x2b9a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A1Cu;
        // 0x2b9a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a1c) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B9A24u;
    // 0x2b9a24: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2b9a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2b9a28:
    // 0x2b9a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A30u;
        // 0x2b9a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9A38u;
}
