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

// Function: sub_002B6BC0
// Address: 0x2b6bc0 - 0x2b77d0
void sub_002B6BC0_0x2b6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6BC0_0x2b6bc0");
#endif

    switch (ctx->pc) {
        case 0x2b6e74u: goto label_2b6e74;
        case 0x2b6fa8u: goto label_2b6fa8;
        case 0x2b7054u: goto label_2b7054;
        case 0x2b7098u: goto label_2b7098;
        case 0x2b70f4u: goto label_2b70f4;
        case 0x2b7100u: goto label_2b7100;
        case 0x2b71acu: goto label_2b71ac;
        case 0x2b71f0u: goto label_2b71f0;
        case 0x2b7214u: goto label_2b7214;
        case 0x2b7220u: goto label_2b7220;
        case 0x2b7250u: goto label_2b7250;
        case 0x2b7274u: goto label_2b7274;
        case 0x2b7280u: goto label_2b7280;
        case 0x2b7374u: goto label_2b7374;
        case 0x2b73f0u: goto label_2b73f0;
        case 0x2b74fcu: goto label_2b74fc;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b7628u: goto label_2b7628;
        case 0x2b7684u: goto label_2b7684;
        case 0x2b7690u: goto label_2b7690;
        case 0x2b773cu: goto label_2b773c;
        case 0x2b77a8u: goto label_2b77a8;
        default: break;
    }

    ctx->pc = 0x2b6bc0u;

    // 0x2b6bc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b6bc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6bc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b6bcc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2b6bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2b6bd0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2b6bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2b6bd4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2b6bd8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2b6bdc: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2b6bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2b6be0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b6be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b6be4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b6be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b6be8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b6be8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b6becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b6bf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b6bf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b6bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b6bf8: 0xa025e000  sb          $a1, -0x2000($at)
    ctx->pc = 0x2b6bf8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2b6bfc: 0x8c8829c0  lw          $t0, 0x29C0($a0)
    ctx->pc = 0x2b6bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2b6c00: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x2b6c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b6c04: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x2b6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x2b6c08: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x2b6c0c: 0x8d070024  lw          $a3, 0x24($t0)
    ctx->pc = 0x2b6c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2b6c10: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x2b6c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2b6c14: 0xad050024  sw          $a1, 0x24($t0)
    ctx->pc = 0x2b6c14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
    // 0x2b6c18: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2b6c1c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b6c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b6c20: 0xac8506c8  sw          $a1, 0x6C8($a0)
    ctx->pc = 0x2b6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 5));
    // 0x2b6c24: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x2b6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2b6c28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b6c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b6c2c: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x2b6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x2b6c30: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2b6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2b6c34: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x2b6c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x2b6c38: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2b6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x2b6c3c: 0x8c8429c0  lw          $a0, 0x29C0($a0)
    ctx->pc = 0x2b6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2b6c40: 0x9084005f  lbu         $a0, 0x5F($a0)
    ctx->pc = 0x2b6c40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x2b6c44: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x2b6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x2b6c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6c4c: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x2b6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2b6c50: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2B6C50u;
    {
        const bool branch_taken_0x2b6c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c50) {
            ctx->pc = 0x2B6DA8u;
            goto label_2b6da8;
        }
    }
    ctx->pc = 0x2B6C58u;
    // 0x2b6c58: 0xc46200a8  lwc1        $f2, 0xA8($v1)
    ctx->pc = 0x2b6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6c5c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2b6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2b6c60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6c64: 0x0  nop
    ctx->pc = 0x2b6c64u;
    // NOP
    // 0x2b6c68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6c6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6c74: 0x0  nop
    ctx->pc = 0x2b6c74u;
    // NOP
    // 0x2b6c78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6c7c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6C7Cu;
    {
        const bool branch_taken_0x2b6c7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6c7c) {
            ctx->pc = 0x2B6C94u;
            goto label_2b6c94;
        }
    }
    ctx->pc = 0x2B6C84u;
    // 0x2b6c84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6c88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6C8Cu;
    {
        const bool branch_taken_0x2b6c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C8Cu;
        // 0x2b6c90: 0x3c034420  lui         $v1, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c8c) {
            ctx->pc = 0x2B6CB0u;
            goto label_2b6cb0;
        }
    }
    ctx->pc = 0x2B6C94u;
label_2b6c94:
    // 0x2b6c94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6c94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6c98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6c9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6ca0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6ca4: 0x0  nop
    ctx->pc = 0x2b6ca4u;
    // NOP
    // 0x2b6ca8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b6ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b6cac: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x2b6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_2b6cb0:
    // 0x2b6cb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6cb4: 0x0  nop
    ctx->pc = 0x2b6cb4u;
    // NOP
    // 0x2b6cb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6cbc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6cc4: 0x0  nop
    ctx->pc = 0x2b6cc4u;
    // NOP
    // 0x2b6cc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6ccc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6CCCu;
    {
        const bool branch_taken_0x2b6ccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CCCu;
        // 0x2b6cd0: 0x3093ffff  andi        $s3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ccc) {
            ctx->pc = 0x2B6CE4u;
            goto label_2b6ce4;
        }
    }
    ctx->pc = 0x2B6CD4u;
    // 0x2b6cd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6cd8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6CDCu;
    {
        const bool branch_taken_0x2b6cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CDCu;
        // 0x2b6ce0: 0x3c034470  lui         $v1, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cdc) {
            ctx->pc = 0x2B6D00u;
            goto label_2b6d00;
        }
    }
    ctx->pc = 0x2B6CE4u;
label_2b6ce4:
    // 0x2b6ce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6ce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6ce8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6cec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6cf0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6cf4: 0x0  nop
    ctx->pc = 0x2b6cf4u;
    // NOP
    // 0x2b6cf8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b6cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b6cfc: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x2b6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
label_2b6d00:
    // 0x2b6d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d04: 0x0  nop
    ctx->pc = 0x2b6d04u;
    // NOP
    // 0x2b6d08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6d0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b6d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d14: 0x0  nop
    ctx->pc = 0x2b6d14u;
    // NOP
    // 0x2b6d18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6D1Cu;
    {
        const bool branch_taken_0x2b6d1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D1Cu;
        // 0x2b6d20: 0x3092ffff  andi        $s2, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d1c) {
            ctx->pc = 0x2B6D34u;
            goto label_2b6d34;
        }
    }
    ctx->pc = 0x2B6D24u;
    // 0x2b6d24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6d24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6d28: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6d28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6d2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6D2Cu;
    {
        const bool branch_taken_0x2b6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D2Cu;
        // 0x2b6d30: 0x3c034396  lui         $v1, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d2c) {
            ctx->pc = 0x2B6D50u;
            goto label_2b6d50;
        }
    }
    ctx->pc = 0x2B6D34u;
label_2b6d34:
    // 0x2b6d34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6d34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6d38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6d3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6d3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6d40: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6d40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6d44: 0x0  nop
    ctx->pc = 0x2b6d44u;
    // NOP
    // 0x2b6d48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b6d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b6d4c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2b6d50:
    // 0x2b6d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d54: 0x0  nop
    ctx->pc = 0x2b6d54u;
    // NOP
    // 0x2b6d58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6d5c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d64: 0x0  nop
    ctx->pc = 0x2b6d64u;
    // NOP
    // 0x2b6d68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6d6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6D6Cu;
    {
        const bool branch_taken_0x2b6d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D6Cu;
        // 0x2b6d70: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d6c) {
            ctx->pc = 0x2B6D84u;
            goto label_2b6d84;
        }
    }
    ctx->pc = 0x2B6D74u;
    // 0x2b6d74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6d78: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6D7Cu;
    {
        const bool branch_taken_0x2b6d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D7Cu;
        // 0x2b6d80: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d7c) {
            ctx->pc = 0x2B6DA0u;
            goto label_2b6da0;
        }
    }
    ctx->pc = 0x2B6D84u;
label_2b6d84:
    // 0x2b6d84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6d84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6d88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b6d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6d8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6d8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6d90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6d90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6d94: 0x0  nop
    ctx->pc = 0x2b6d94u;
    // NOP
    // 0x2b6d98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b6d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b6d9c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x2b6d9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2b6da0:
    // 0x2b6da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6DA0u;
    {
        const bool branch_taken_0x2b6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6da0) {
            ctx->pc = 0x2B6DB8u;
            goto label_2b6db8;
        }
    }
    ctx->pc = 0x2B6DA8u;
label_2b6da8:
    // 0x2b6da8: 0x64130140  daddiu      $s3, $zero, 0x140
    ctx->pc = 0x2b6da8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
    // 0x2b6dac: 0x64120280  daddiu      $s2, $zero, 0x280
    ctx->pc = 0x2b6dacu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)640);
    // 0x2b6db0: 0x641103c0  daddiu      $s1, $zero, 0x3C0
    ctx->pc = 0x2b6db0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)960);
    // 0x2b6db4: 0x6410012c  daddiu      $s0, $zero, 0x12C
    ctx->pc = 0x2b6db4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)300);
label_2b6db8:
    // 0x2b6db8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b6db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b6dbc: 0x8c25fe84  lw          $a1, -0x17C($at)
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x92FE84u));
    // 0x2b6dc0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2b6dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6dc8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2b6dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2b6dcc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2b6dd0: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x2b6dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x2b6dd4: 0x92850821  lbu         $a1, 0x821($s4)
    ctx->pc = 0x2b6dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x2b6dd8: 0x10a40233  beq         $a1, $a0, . + 4 + (0x233 << 2)
    ctx->pc = 0x2B6DD8u;
    {
        const bool branch_taken_0x2b6dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DD8u;
        // 0x2b6ddc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dd8) {
            ctx->pc = 0x2B76A8u;
            goto label_2b76a8;
        }
    }
    ctx->pc = 0x2B6DE0u;
    // 0x2b6de0: 0x10a30213  beq         $a1, $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x2B6DE0u;
    {
        const bool branch_taken_0x2b6de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b6de0) {
            ctx->pc = 0x2B7630u;
            goto label_2b7630;
        }
    }
    ctx->pc = 0x2B6DE8u;
    // 0x2b6de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6dec: 0x10a30096  beq         $a1, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B6DECu;
    {
        const bool branch_taken_0x2b6dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b6dec) {
            ctx->pc = 0x2B7048u;
            goto label_2b7048;
        }
    }
    ctx->pc = 0x2B6DF4u;
    // 0x2b6df4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6DF4u;
    {
        const bool branch_taken_0x2b6df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6df4) {
            ctx->pc = 0x2B6E08u;
            goto label_2b6e08;
        }
    }
    ctx->pc = 0x2B6DFCu;
    // 0x2b6dfc: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x2B6DFCu;
    {
        const bool branch_taken_0x2b6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6dfc) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B6E04u;
    // 0x2b6e04: 0x0  nop
    ctx->pc = 0x2b6e04u;
    // NOP
label_2b6e08:
    // 0x2b6e08: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2b6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2b6e0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6e10: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6e14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6e18: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b6e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b6e1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6e20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6e2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6e30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6E34u;
    {
        const bool branch_taken_0x2b6e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6e34) {
            ctx->pc = 0x2B6E4Cu;
            goto label_2b6e4c;
        }
    }
    ctx->pc = 0x2B6E3Cu;
    // 0x2b6e3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6e3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6e40: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6e44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6E44u;
    {
        const bool branch_taken_0x2b6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E44u;
        // 0x2b6e48: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e44) {
            ctx->pc = 0x2B6E68u;
            goto label_2b6e68;
        }
    }
    ctx->pc = 0x2B6E4Cu;
label_2b6e4c:
    // 0x2b6e4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6e4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6e50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6e54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6e58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b6e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b6e5c: 0x0  nop
    ctx->pc = 0x2b6e5cu;
    // NOP
    // 0x2b6e60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b6e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b6e64: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2b6e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b6e68:
    // 0x2b6e68: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b6e6c: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E74u);
    ctx->pc = 0x2B6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E6Cu;
    // 0x2b6e70: 0x26870020  addiu       $a3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B6E6Cu, 0x2B6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E74u;
label_2b6e74:
    // 0x2b6e74: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x2b6e74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6e78: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x2b6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2b6e7c: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x2b6e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6e80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6e84: 0xa68207f2  sh          $v0, 0x7F2($s4)
    ctx->pc = 0x2b6e84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6e88: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6e8c: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x2b6e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2b6e90: 0xa28007f5  sb          $zero, 0x7F5($s4)
    ctx->pc = 0x2b6e90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6e94: 0xae8207ec  sw          $v0, 0x7EC($s4)
    ctx->pc = 0x2b6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 2));
    // 0x2b6e98: 0xa68307f0  sh          $v1, 0x7F0($s4)
    ctx->pc = 0x2b6e98u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6e9c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b6ea0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6ea4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6ea8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6eac: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b6eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b6eb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6eb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6eb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ec0: 0x0  nop
    ctx->pc = 0x2b6ec0u;
    // NOP
    // 0x2b6ec4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6ec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6ecc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6ECCu;
    {
        const bool branch_taken_0x2b6ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6ecc) {
            ctx->pc = 0x2B6EE4u;
            goto label_2b6ee4;
        }
    }
    ctx->pc = 0x2B6ED4u;
    // 0x2b6ed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6ed8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b6ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b6edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6EDCu;
    {
        const bool branch_taken_0x2b6edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EDCu;
        // 0x2b6ee0: 0xa6820828  sh          $v0, 0x828($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6edc) {
            ctx->pc = 0x2B6EFCu;
            goto label_2b6efc;
        }
    }
    ctx->pc = 0x2B6EE4u;
label_2b6ee4:
    // 0x2b6ee4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6ee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6ee8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6eec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b6eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b6ef0: 0x0  nop
    ctx->pc = 0x2b6ef0u;
    // NOP
    // 0x2b6ef4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b6ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b6ef8: 0xa6820828  sh          $v0, 0x828($s4)
    ctx->pc = 0x2b6ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 2));
label_2b6efc:
    // 0x2b6efc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6f00: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6f04: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b6f08: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6f0c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b6f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b6f10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6f14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6f1c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6f20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6f24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6f28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6F28u;
    {
        const bool branch_taken_0x2b6f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6f28) {
            ctx->pc = 0x2B6F40u;
            goto label_2b6f40;
        }
    }
    ctx->pc = 0x2B6F30u;
    // 0x2b6f30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6f34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6f38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6F38u;
    {
        const bool branch_taken_0x2b6f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F38u;
        // 0x2b6f3c: 0xa683082e  sh          $v1, 0x82E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2094), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f38) {
            ctx->pc = 0x2B6F5Cu;
            goto label_2b6f5c;
        }
    }
    ctx->pc = 0x2B6F40u;
label_2b6f40:
    // 0x2b6f40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6f40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6f44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6f48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6f4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6f50: 0x0  nop
    ctx->pc = 0x2b6f50u;
    // NOP
    // 0x2b6f54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b6f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6f58: 0xa683082e  sh          $v1, 0x82E($s4)
    ctx->pc = 0x2b6f58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2094), (uint16_t)GPR_U32(ctx, 3));
label_2b6f5c:
    // 0x2b6f5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2b6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2b6f60: 0xa6802aca  sh          $zero, 0x2ACA($s4)
    ctx->pc = 0x2b6f60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10954), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6f64: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x2b6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2b6f68: 0xa6932acc  sh          $s3, 0x2ACC($s4)
    ctx->pc = 0x2b6f68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10956), (uint16_t)GPR_U32(ctx, 19));
    // 0x2b6f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6f70: 0xa2820822  sb          $v0, 0x822($s4)
    ctx->pc = 0x2b6f70u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2082), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6f74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2b6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2b6f78: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x2b6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x2b6f7c: 0xa2830821  sb          $v1, 0x821($s4)
    ctx->pc = 0x2b6f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6f80: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2b6f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2b6f84: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x2b6f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2b6f88: 0x928208e8  lbu         $v0, 0x8E8($s4)
    ctx->pc = 0x2b6f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x2b6f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b6f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b6f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b6f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f98: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2b6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2b6f9c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2b6f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b6fa0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2B6FA0u;
    SET_GPR_U32(ctx, 31, 0x2B6FA8u);
    ctx->pc = 0x2B6FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FA0u;
    // 0x2b6fa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2B6FA0u, 0x2B6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FA8u;
label_2b6fa8:
    // 0x2b6fa8: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fac: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2b6facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2b6fb0: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6fb4: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fb8: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x2b6fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x2b6fbc: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6fc0: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fc4: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2b6fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2b6fc8: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6fcc: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fd0: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x2b6fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x2b6fd4: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6fd8: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fdc: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x2b6fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x2b6fe0: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6fe4: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6fe8: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x2b6fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x2b6fec: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6fecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6ff0: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b6ff4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x2b6ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x2b6ff8: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b6ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6ffc: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b6ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b7000: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x2b7000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x2b7004: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b7004u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7008: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b7008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b700c: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2b700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2b7010: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b7010u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7014: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b7014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b7018: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x2b7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x2b701c: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b701cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7020: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b7020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b7024: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2b7024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2b7028: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b7028u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b702c: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b702cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b7030: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2b7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2b7034: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b7034u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7038: 0x968229de  lhu         $v0, 0x29DE($s4)
    ctx->pc = 0x2b7038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10718)));
    // 0x2b703c: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x2b703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
    // 0x2b7040: 0xa68229de  sh          $v0, 0x29DE($s4)
    ctx->pc = 0x2b7040u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10718), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7044: 0x0  nop
    ctx->pc = 0x2b7044u;
    // NOP
label_2b7048:
    // 0x2b7048: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b704c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B704Cu;
    {
        const bool branch_taken_0x2b704c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B704Cu;
        // 0x2b7050: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b704c) {
            ctx->pc = 0x2B7070u;
            goto label_2b7070;
        }
    }
    ctx->pc = 0x2B7054u;
label_2b7054:
    // 0x2b7054: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2b7054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b705c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b7060: 0x0  nop
    ctx->pc = 0x2b7060u;
    // NOP
    // 0x2b7064: 0x0  nop
    ctx->pc = 0x2b7064u;
    // NOP
    // 0x2b7068: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7068u;
    {
        const bool branch_taken_0x2b7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7068) {
            ctx->pc = 0x2B7054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7054;
        }
    }
    ctx->pc = 0x2B7070u;
label_2b7070:
    // 0x2b7070: 0xa7b30090  sh          $s3, 0x90($sp)
    ctx->pc = 0x2b7070u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 19));
    // 0x2b7074: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x2b7074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2b7078: 0xa7b30092  sh          $s3, 0x92($sp)
    ctx->pc = 0x2b7078u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 19));
    // 0x2b707c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7080: 0xa7b20094  sh          $s2, 0x94($sp)
    ctx->pc = 0x2b7080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 18));
    // 0x2b7084: 0xa7b10096  sh          $s1, 0x96($sp)
    ctx->pc = 0x2b7084u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 150), (uint16_t)GPR_U32(ctx, 17));
    // 0x2b7088: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2b7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2b708c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2b708cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b7090: 0xc0a522c  jal         func_2948B0
    ctx->pc = 0x2B7090u;
    SET_GPR_U32(ctx, 31, 0x2B7098u);
    ctx->pc = 0x2B7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7090u;
    // 0x2b7094: 0x202a821  addu        $s5, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B0u, 0x2B7090u, 0x2B7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7098u;
label_2b7098:
    // 0x2b7098: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2b7098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b709c: 0x9683082e  lhu         $v1, 0x82E($s4)
    ctx->pc = 0x2b709cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2094)));
    // 0x2b70a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2b70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b70a4: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2b70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2b70a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B70A8u;
    {
        const bool branch_taken_0x2b70a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70A8u;
        // 0x2b70ac: 0x94960090  lhu         $s6, 0x90($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70a8) {
            ctx->pc = 0x2B70B8u;
            goto label_2b70b8;
        }
    }
    ctx->pc = 0x2B70B0u;
    // 0x2b70b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b70b4: 0xa683082e  sh          $v1, 0x82E($s4)
    ctx->pc = 0x2b70b4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2094), (uint16_t)GPR_U32(ctx, 3));
label_2b70b8:
    // 0x2b70b8: 0x96830828  lhu         $v1, 0x828($s4)
    ctx->pc = 0x2b70b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2088)));
    // 0x2b70bc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B70BCu;
    {
        const bool branch_taken_0x2b70bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b70bc) {
            ctx->pc = 0x2B7108u;
            goto label_2b7108;
        }
    }
    ctx->pc = 0x2B70C4u;
    // 0x2b70c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b70c8: 0xa6830828  sh          $v1, 0x828($s4)
    ctx->pc = 0x2b70c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b70cc: 0x96830828  lhu         $v1, 0x828($s4)
    ctx->pc = 0x2b70ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2088)));
    // 0x2b70d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B70D0u;
    {
        const bool branch_taken_0x2b70d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b70d0) {
            ctx->pc = 0x2B70E8u;
            goto label_2b70e8;
        }
    }
    ctx->pc = 0x2B70D8u;
    // 0x2b70d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b70d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b70dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b70e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B70E0u;
    {
        const bool branch_taken_0x2b70e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70E0u;
        // 0x2b70e4: 0xa68307f0  sh          $v1, 0x7F0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b70e0) {
            ctx->pc = 0x2B7108u;
            goto label_2b7108;
        }
    }
    ctx->pc = 0x2B70E8u;
label_2b70e8:
    // 0x2b70e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b70e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70ec: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B70ECu;
    SET_GPR_U32(ctx, 31, 0x2B70F4u);
    ctx->pc = 0x2B70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70ECu;
    // 0x2b70f0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B70ECu, 0x2B70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B70F4u;
label_2b70f4:
    // 0x2b70f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b70f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b70f8: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B70F8u;
    SET_GPR_U32(ctx, 31, 0x2B7100u);
    ctx->pc = 0x2B70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B70F8u;
    // 0x2b70fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B70F8u, 0x2B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7100u;
label_2b7100:
    // 0x2b7100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7104: 0xa68307f0  sh          $v1, 0x7F0($s4)
    ctx->pc = 0x2b7104u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2b7108:
    // 0x2b7108: 0x96842acc  lhu         $a0, 0x2ACC($s4)
    ctx->pc = 0x2b7108u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    // 0x2b710c: 0x95082b  sltu        $at, $a0, $s5
    ctx->pc = 0x2b710cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2b7110: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B7110u;
    {
        const bool branch_taken_0x2b7110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7110) {
            ctx->pc = 0x2B71B0u;
            goto label_2b71b0;
        }
    }
    ctx->pc = 0x2B7118u;
    // 0x2b7118: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7118u;
    {
        const bool branch_taken_0x2b7118 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7118u;
        // 0x2b711c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7118) {
            ctx->pc = 0x2B712Cu;
            goto label_2b712c;
        }
    }
    ctx->pc = 0x2B7120u;
    // 0x2b7120: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b7120u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7124: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7124u;
    {
        const bool branch_taken_0x2b7124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7124u;
        // 0x2b7128: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7124) {
            ctx->pc = 0x2B7144u;
            goto label_2b7144;
        }
    }
    ctx->pc = 0x2B712Cu;
label_2b712c:
    // 0x2b712c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b7130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b7130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b7134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7138: 0x0  nop
    ctx->pc = 0x2b7138u;
    // NOP
    // 0x2b713c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2b713cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7140: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b7140u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b7144:
    // 0x2b7144: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2b7144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7148: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2b7148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2b714c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b714cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b7150: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b7150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b7154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b7154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7158: 0x0  nop
    ctx->pc = 0x2b7158u;
    // NOP
    // 0x2b715c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2b715cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2b7160: 0x0  nop
    ctx->pc = 0x2b7160u;
    // NOP
    // 0x2b7164: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2b7164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2b7168: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b7168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b716c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B716Cu;
    {
        const bool branch_taken_0x2b716c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b716c) {
            ctx->pc = 0x2B7184u;
            goto label_2b7184;
        }
    }
    ctx->pc = 0x2B7174u;
    // 0x2b7174: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7178: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b7178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b717c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B717Cu;
    {
        const bool branch_taken_0x2b717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B717Cu;
        // 0x2b7180: 0xa6832acc  sh          $v1, 0x2ACC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10956), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b717c) {
            ctx->pc = 0x2B71A0u;
            goto label_2b71a0;
        }
    }
    ctx->pc = 0x2B7184u;
label_2b7184:
    // 0x2b7184: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7184u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7188: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b7188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b718c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b718cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7190: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b7190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b7194: 0x0  nop
    ctx->pc = 0x2b7194u;
    // NOP
    // 0x2b7198: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b7198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b719c: 0xa6832acc  sh          $v1, 0x2ACC($s4)
    ctx->pc = 0x2b719cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10956), (uint16_t)GPR_U32(ctx, 3));
label_2b71a0:
    // 0x2b71a0: 0x96852acc  lhu         $a1, 0x2ACC($s4)
    ctx->pc = 0x2b71a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    // 0x2b71a4: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2B71A4u;
    SET_GPR_U32(ctx, 31, 0x2B71ACu);
    ctx->pc = 0x2B71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B71A4u;
    // 0x2b71a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2B71A4u, 0x2B71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71ACu;
label_2b71ac:
    // 0x2b71ac: 0xa6822acc  sh          $v0, 0x2ACC($s4)
    ctx->pc = 0x2b71acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10956), (uint16_t)GPR_U32(ctx, 2));
label_2b71b0:
    // 0x2b71b0: 0x92840822  lbu         $a0, 0x822($s4)
    ctx->pc = 0x2b71b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2082)));
    // 0x2b71b4: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x2b71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x2b71b8: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B71B8u;
    {
        const bool branch_taken_0x2b71b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B71B8u;
        // 0x2b71bc: 0x240300f4  addiu       $v1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b71b8) {
            ctx->pc = 0x2B72A0u;
            goto label_2b72a0;
        }
    }
    ctx->pc = 0x2B71C0u;
    // 0x2b71c0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B71C0u;
    {
        const bool branch_taken_0x2b71c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b71c0) {
            ctx->pc = 0x2B7240u;
            goto label_2b7240;
        }
    }
    ctx->pc = 0x2B71C8u;
    // 0x2b71c8: 0x240300f3  addiu       $v1, $zero, 0xF3
    ctx->pc = 0x2b71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2b71cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B71CCu;
    {
        const bool branch_taken_0x2b71cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b71cc) {
            ctx->pc = 0x2B71E0u;
            goto label_2b71e0;
        }
    }
    ctx->pc = 0x2B71D4u;
    // 0x2b71d4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2B71D4u;
    {
        const bool branch_taken_0x2b71d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b71d4) {
            ctx->pc = 0x2B72C0u;
            goto label_2b72c0;
        }
    }
    ctx->pc = 0x2B71DCu;
    // 0x2b71dc: 0x0  nop
    ctx->pc = 0x2b71dcu;
    // NOP
label_2b71e0:
    // 0x2b71e0: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2b71e4: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x2b71e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b71e8: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2B71E8u;
    SET_GPR_U32(ctx, 31, 0x2B71F0u);
    ctx->pc = 0x2B71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B71E8u;
    // 0x2b71ec: 0x96842acc  lhu         $a0, 0x2ACC($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2B71E8u, 0x2B71F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B71F0u;
label_2b71f0:
    // 0x2b71f0: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2b71f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2b71f4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2b71f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b71f8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B71F8u;
    {
        const bool branch_taken_0x2b71f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b71f8) {
            ctx->pc = 0x2B7220u;
            goto label_2b7220;
        }
    }
    ctx->pc = 0x2B7200u;
    // 0x2b7200: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x2b7200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2b7204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7208: 0xa2820822  sb          $v0, 0x822($s4)
    ctx->pc = 0x2b7208u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2082), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b720c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B720Cu;
    SET_GPR_U32(ctx, 31, 0x2B7214u);
    ctx->pc = 0x2B7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B720Cu;
    // 0x2b7210: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B720Cu, 0x2B7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7214u;
label_2b7214:
    // 0x2b7214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7218: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B7218u;
    SET_GPR_U32(ctx, 31, 0x2B7220u);
    ctx->pc = 0x2B721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7218u;
    // 0x2b721c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B7218u, 0x2B7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7220u;
label_2b7220:
    // 0x2b7220: 0x96842aca  lhu         $a0, 0x2ACA($s4)
    ctx->pc = 0x2b7220u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10954)));
    // 0x2b7224: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x2b7224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2b7228: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b722c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2b722cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b7230: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b7230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7234: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b7238: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B7238u;
    {
        const bool branch_taken_0x2b7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7238u;
        // 0x2b723c: 0xa6832aca  sh          $v1, 0x2ACA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10954), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7238) {
            ctx->pc = 0x2B72C0u;
            goto label_2b72c0;
        }
    }
    ctx->pc = 0x2B7240u;
label_2b7240:
    // 0x2b7240: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2b7244: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x2b7244u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b7248: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2B7248u;
    SET_GPR_U32(ctx, 31, 0x2B7250u);
    ctx->pc = 0x2B724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7248u;
    // 0x2b724c: 0x96842acc  lhu         $a0, 0x2ACC($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2B7248u, 0x2B7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7250u;
label_2b7250:
    // 0x2b7250: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2b7250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2b7254: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2b7254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b7258: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7258u;
    {
        const bool branch_taken_0x2b7258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7258) {
            ctx->pc = 0x2B7280u;
            goto label_2b7280;
        }
    }
    ctx->pc = 0x2B7260u;
    // 0x2b7260: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x2b7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x2b7264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7268: 0xa2820822  sb          $v0, 0x822($s4)
    ctx->pc = 0x2b7268u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2082), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b726c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B726Cu;
    SET_GPR_U32(ctx, 31, 0x2B7274u);
    ctx->pc = 0x2B7270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B726Cu;
    // 0x2b7270: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B726Cu, 0x2B7274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7274u;
label_2b7274:
    // 0x2b7274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7278: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B7278u;
    SET_GPR_U32(ctx, 31, 0x2B7280u);
    ctx->pc = 0x2B727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7278u;
    // 0x2b727c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B7278u, 0x2B7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7280u;
label_2b7280:
    // 0x2b7280: 0x96842aca  lhu         $a0, 0x2ACA($s4)
    ctx->pc = 0x2b7280u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10954)));
    // 0x2b7284: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2b7284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2b7288: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b7288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b728c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2b728cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b7290: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b7290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7294: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b7294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b7298: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7298u;
    {
        const bool branch_taken_0x2b7298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7298u;
        // 0x2b729c: 0xa6832aca  sh          $v1, 0x2ACA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10954), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7298) {
            ctx->pc = 0x2B72C0u;
            goto label_2b72c0;
        }
    }
    ctx->pc = 0x2B72A0u;
label_2b72a0:
    // 0x2b72a0: 0x96842aca  lhu         $a0, 0x2ACA($s4)
    ctx->pc = 0x2b72a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10954)));
    // 0x2b72a4: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2b72a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2b72a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b72ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2b72acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b72b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b72b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b72b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b72b8: 0xa6832aca  sh          $v1, 0x2ACA($s4)
    ctx->pc = 0x2b72b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10954), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b72bc: 0x0  nop
    ctx->pc = 0x2b72bcu;
    // NOP
label_2b72c0:
    // 0x2b72c0: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2b72c4: 0x96842acc  lhu         $a0, 0x2ACC($s4)
    ctx->pc = 0x2b72c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    // 0x2b72c8: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2b72c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2b72cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2b72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2b72d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2b72d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b72d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B72D4u;
    {
        const bool branch_taken_0x2b72d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72D4u;
        // 0x2b72d8: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72d4) {
            ctx->pc = 0x2B72F8u;
            goto label_2b72f8;
        }
    }
    ctx->pc = 0x2B72DCu;
    // 0x2b72dc: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2b72dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b72e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B72E0u;
    {
        const bool branch_taken_0x2b72e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b72e0) {
            ctx->pc = 0x2B72F8u;
            goto label_2b72f8;
        }
    }
    ctx->pc = 0x2B72E8u;
    // 0x2b72e8: 0x8e8304e0  lw          $v1, 0x4E0($s4)
    ctx->pc = 0x2b72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1248)));
    // 0x2b72ec: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2b72ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2b72f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B72F0u;
    {
        const bool branch_taken_0x2b72f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b72f0) {
            ctx->pc = 0x2B7308u;
            goto label_2b7308;
        }
    }
    ctx->pc = 0x2B72F8u;
label_2b72f8:
    // 0x2b72f8: 0xa680082c  sh          $zero, 0x82C($s4)
    ctx->pc = 0x2b72f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b72fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7300: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2B7300u;
    {
        const bool branch_taken_0x2b7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7300u;
        // 0x2b7304: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7300) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7308u;
label_2b7308:
    // 0x2b7308: 0x8e842ab0  lw          $a0, 0x2AB0($s4)
    ctx->pc = 0x2b7308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b730c: 0x1080010e  beqz        $a0, . + 4 + (0x10E << 2)
    ctx->pc = 0x2B730Cu;
    {
        const bool branch_taken_0x2b730c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b730c) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7314u;
    // 0x2b7314: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2b7314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b731c: 0x14a3010a  bne         $a1, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x2B731Cu;
    {
        const bool branch_taken_0x2b731c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b731c) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7324u;
    // 0x2b7324: 0x8c8629c0  lw          $a2, 0x29C0($a0)
    ctx->pc = 0x2b7324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2b7328: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2b7328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2b732c: 0x8c8529c8  lw          $a1, 0x29C8($a0)
    ctx->pc = 0x2b732cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10696)));
    // 0x2b7330: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x2b7330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7334: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2b7334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2b7338: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2b7338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b733c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2b733cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2b7340: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b7340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b7344: 0x10600100  beqz        $v1, . + 4 + (0x100 << 2)
    ctx->pc = 0x2B7344u;
    {
        const bool branch_taken_0x2b7344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7344) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B734Cu;
    // 0x2b734c: 0x8c8329cc  lw          $v1, 0x29CC($a0)
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10700)));
    // 0x2b7350: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7350u;
    {
        const bool branch_taken_0x2b7350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7350) {
            ctx->pc = 0x2B7360u;
            goto label_2b7360;
        }
    }
    ctx->pc = 0x2B7358u;
    // 0x2b7358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7358u;
    {
        const bool branch_taken_0x2b7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7358u;
        // 0x2b735c: 0x90630010  lbu         $v1, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7358) {
            ctx->pc = 0x2B7364u;
            goto label_2b7364;
        }
    }
    ctx->pc = 0x2B7360u;
label_2b7360:
    // 0x2b7360: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7364:
    // 0x2b7364: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2B7364u;
    {
        const bool branch_taken_0x2b7364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7364) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B736Cu;
    // 0x2b736c: 0xc0a522c  jal         func_2948B0
    ctx->pc = 0x2B736Cu;
    SET_GPR_U32(ctx, 31, 0x2B7374u);
    ctx->pc = 0x2948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B0u, 0x2B736Cu, 0x2B7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7374u;
label_2b7374:
    // 0x2b7374: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b7374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b7378: 0x186000f3  blez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2B7378u;
    {
        const bool branch_taken_0x2b7378 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2b7378) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7380u;
    // 0x2b7380: 0x8e842ab0  lw          $a0, 0x2AB0($s4)
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7384: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x2b7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2b7388: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b7388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b738c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b738cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b7390: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7390u;
    {
        const bool branch_taken_0x2b7390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7390) {
            ctx->pc = 0x2B73A4u;
            goto label_2b73a4;
        }
    }
    ctx->pc = 0x2B7398u;
    // 0x2b7398: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x2b7398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2b739c: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x2b739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x2b73a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2b73a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b73a4:
    // 0x2b73a4: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2B73A4u;
    {
        const bool branch_taken_0x2b73a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b73a4) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B73ACu;
    // 0x2b73ac: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x2b73acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x2b73b0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2b73b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2b73b4: 0x146000e4  bnez        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2B73B4u;
    {
        const bool branch_taken_0x2b73b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b73b4) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B73BCu;
    // 0x2b73bc: 0x8c8429c0  lw          $a0, 0x29C0($a0)
    ctx->pc = 0x2b73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2b73c0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2b73c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b73c4: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2B73C4u;
    {
        const bool branch_taken_0x2b73c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b73c4) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B73CCu;
    // 0x2b73cc: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x2b73ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2b73d0: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x2b73d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2b73d4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2b73d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b73d8: 0x146000db  bnez        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x2B73D8u;
    {
        const bool branch_taken_0x2b73d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b73d8) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B73E0u;
    // 0x2b73e0: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2b73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2b73e4: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x2b73e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b73e8: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2B73E8u;
    SET_GPR_U32(ctx, 31, 0x2B73F0u);
    ctx->pc = 0x2B73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73E8u;
    // 0x2b73ec: 0x96842acc  lhu         $a0, 0x2ACC($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2B73E8u, 0x2B73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73F0u;
label_2b73f0:
    // 0x2b73f0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2b73f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2b73f4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2b73f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b73f8: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2B73F8u;
    {
        const bool branch_taken_0x2b73f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73F8u;
        // 0x2b73fc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73f8) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7400u;
    // 0x2b7400: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2b7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2b7404: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2b7404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2b7408: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B7408u;
    {
        const bool branch_taken_0x2b7408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7408) {
            ctx->pc = 0x2B7480u;
            goto label_2b7480;
        }
    }
    ctx->pc = 0x2B7410u;
    // 0x2b7410: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b7414: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2b7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2b7418: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2b7418u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2b741c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b741cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b7420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7424: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b7424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b7428: 0x1683000b  bne         $s4, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7428u;
    {
        const bool branch_taken_0x2b7428 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7428u;
        // 0x2b742c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7428) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B7430u;
    // 0x2b7430: 0x8c246eec  lw          $a0, 0x6EEC($at)
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28396)));
    // 0x2b7434: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x2b7434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2b7438: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B7438u;
    {
        const bool branch_taken_0x2b7438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7438) {
            ctx->pc = 0x2B74A8u;
            goto label_2b74a8;
        }
    }
    ctx->pc = 0x2B7440u;
    // 0x2b7440: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b7440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b7444: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2b7444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b7448: 0xa0206f4f  sb          $zero, 0x6F4F($at)
    ctx->pc = 0x2b7448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6F4Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6F4Fu, _value); } while (0);
    // 0x2b744c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b7450: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B7450u;
    {
        const bool branch_taken_0x2b7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7450u;
        // 0x2b7454: 0xac236eec  sw          $v1, 0x6EEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 28396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7450) {
            ctx->pc = 0x2B74A8u;
            goto label_2b74a8;
        }
    }
    ctx->pc = 0x2B7458u;
label_2b7458:
    // 0x2b7458: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b7458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b745c: 0x8c246ccc  lw          $a0, 0x6CCC($at)
    ctx->pc = 0x2b745cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2b7460: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x2b7460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2b7464: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7464u;
    {
        const bool branch_taken_0x2b7464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7464u;
        // 0x2b7468: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7464) {
            ctx->pc = 0x2B74A8u;
            goto label_2b74a8;
        }
    }
    ctx->pc = 0x2B746Cu;
    // 0x2b746c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2b746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b7470: 0xa0206d2f  sb          $zero, 0x6D2F($at)
    ctx->pc = 0x2b7470u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 27951), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7474: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b7474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b7478: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B7478u;
    {
        const bool branch_taken_0x2b7478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7478u;
        // 0x2b747c: 0xac236ccc  sw          $v1, 0x6CCC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7478) {
            ctx->pc = 0x2B74A8u;
            goto label_2b74a8;
        }
    }
    ctx->pc = 0x2B7480u;
label_2b7480:
    // 0x2b7480: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b7480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b7484: 0x8c246eec  lw          $a0, 0x6EEC($at)
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6EECu));
    // 0x2b7488: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x2b7488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2b748c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B748Cu;
    {
        const bool branch_taken_0x2b748c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B748Cu;
        // 0x2b7490: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b748c) {
            ctx->pc = 0x2B74A8u;
            goto label_2b74a8;
        }
    }
    ctx->pc = 0x2B7494u;
    // 0x2b7494: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2b7494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2b7498: 0xa0206f4f  sb          $zero, 0x6F4F($at)
    ctx->pc = 0x2b7498u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 28495), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b749c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b74a0: 0xac236eec  sw          $v1, 0x6EEC($at)
    ctx->pc = 0x2b74a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6EECu, _value); } while (0);
    // 0x2b74a4: 0x0  nop
    ctx->pc = 0x2b74a4u;
    // NOP
label_2b74a8:
    // 0x2b74a8: 0x8e852ab0  lw          $a1, 0x2AB0($s4)
    ctx->pc = 0x2b74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b74ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b74b0: 0x90a40640  lbu         $a0, 0x640($a1)
    ctx->pc = 0x2b74b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2b74b4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B74B4u;
    {
        const bool branch_taken_0x2b74b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b74b4) {
            ctx->pc = 0x2B74D0u;
            goto label_2b74d0;
        }
    }
    ctx->pc = 0x2B74BCu;
    // 0x2b74bc: 0x8e8304e4  lw          $v1, 0x4E4($s4)
    ctx->pc = 0x2b74bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1252)));
    // 0x2b74c0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2b74c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2b74c4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B74C4u;
    {
        const bool branch_taken_0x2b74c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b74c4) {
            ctx->pc = 0x2B74F0u;
            goto label_2b74f0;
        }
    }
    ctx->pc = 0x2B74CCu;
    // 0x2b74cc: 0x0  nop
    ctx->pc = 0x2b74ccu;
    // NOP
label_2b74d0:
    // 0x2b74d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b74d4: 0x1483009c  bne         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2B74D4u;
    {
        const bool branch_taken_0x2b74d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b74d4) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B74DCu;
    // 0x2b74dc: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x2b74dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2b74e0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2b74e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b74e4: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2B74E4u;
    {
        const bool branch_taken_0x2b74e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b74e4) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B74ECu;
    // 0x2b74ec: 0x0  nop
    ctx->pc = 0x2b74ecu;
    // NOP
label_2b74f0:
    // 0x2b74f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b74f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74f4: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B74F4u;
    SET_GPR_U32(ctx, 31, 0x2B74FCu);
    ctx->pc = 0x2B74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74F4u;
    // 0x2b74f8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B74F4u, 0x2B74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74FCu;
label_2b74fc:
    // 0x2b74fc: 0x240700f6  addiu       $a3, $zero, 0xF6
    ctx->pc = 0x2b74fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2b7500: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2b7500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2b7504: 0xa2870780  sb          $a3, 0x780($s4)
    ctx->pc = 0x2b7504u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7508: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2b7508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b750c: 0x8e862ab0  lw          $a2, 0x2AB0($s4)
    ctx->pc = 0x2b750cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7510: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2b7514: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2b7514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b7518: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2b751c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7520: 0xa0c70780  sb          $a3, 0x780($a2)
    ctx->pc = 0x2b7520u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1920), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7524: 0x8e872ab0  lw          $a3, 0x2AB0($s4)
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7528: 0x8ce60148  lw          $a2, 0x148($a3)
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x2b752c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x2b752cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x2b7530: 0xace60148  sw          $a2, 0x148($a3)
    ctx->pc = 0x2b7530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 6));
    // 0x2b7534: 0x8e872ab0  lw          $a3, 0x2AB0($s4)
    ctx->pc = 0x2b7534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7538: 0x8ce629c8  lw          $a2, 0x29C8($a3)
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10696)));
    // 0x2b753c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2b753cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2b7540: 0xace529c8  sw          $a1, 0x29C8($a3)
    ctx->pc = 0x2b7540u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10696), GPR_U32(ctx, 5));
    // 0x2b7544: 0x8e872ab0  lw          $a3, 0x2AB0($s4)
    ctx->pc = 0x2b7544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7548: 0x8ce629c0  lw          $a2, 0x29C0($a3)
    ctx->pc = 0x2b7548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10688)));
    // 0x2b754c: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x2b754cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7550: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b7554: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2b7554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x2b7558: 0x8ce306c8  lw          $v1, 0x6C8($a3)
    ctx->pc = 0x2b7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1736)));
    // 0x2b755c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b7560: 0xace306c8  sw          $v1, 0x6C8($a3)
    ctx->pc = 0x2b7560u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1736), GPR_U32(ctx, 3));
    // 0x2b7564: 0x8ce306cc  lw          $v1, 0x6CC($a3)
    ctx->pc = 0x2b7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1740)));
    // 0x2b7568: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b7568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b756c: 0xace306cc  sw          $v1, 0x6CC($a3)
    ctx->pc = 0x2b756cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1740), GPR_U32(ctx, 3));
    // 0x2b7570: 0x8e842ab0  lw          $a0, 0x2AB0($s4)
    ctx->pc = 0x2b7570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7574: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x2b7574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x2b7578: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7578u;
    {
        const bool branch_taken_0x2b7578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b7578) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B7580u;
    // 0x2b7580: 0xa08004f4  sb          $zero, 0x4F4($a0)
    ctx->pc = 0x2b7580u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1268), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7584: 0x0  nop
    ctx->pc = 0x2b7584u;
    // NOP
label_2b7588:
    // 0x2b7588: 0xa680082a  sh          $zero, 0x82A($s4)
    ctx->pc = 0x2b7588u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b758c: 0x8e822ab0  lw          $v0, 0x2AB0($s4)
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b7590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b7590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7594: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2b7594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2b7598: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b7598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b759c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2b759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2b75a0: 0xa446082a  sh          $a2, 0x82A($v0)
    ctx->pc = 0x2b75a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2090), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b75a4: 0xae8304ac  sw          $v1, 0x4AC($s4)
    ctx->pc = 0x2b75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1196), GPR_U32(ctx, 3));
    // 0x2b75a8: 0x8e822ab0  lw          $v0, 0x2AB0($s4)
    ctx->pc = 0x2b75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b75ac: 0xac4304ac  sw          $v1, 0x4AC($v0)
    ctx->pc = 0x2b75acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1196), GPR_U32(ctx, 3));
    // 0x2b75b0: 0x8e822ab0  lw          $v0, 0x2AB0($s4)
    ctx->pc = 0x2b75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b75b4: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x2b75b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b75b8: 0xc0ce92c  jal         func_33A4B0
    ctx->pc = 0x2B75B8u;
    SET_GPR_U32(ctx, 31, 0x2B75C0u);
    ctx->pc = 0x2B75BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B75B8u;
    // 0x2b75bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A4B0u, 0x2B75B8u, 0x2B75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B75C0u;
label_2b75c0:
    // 0x2b75c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b75c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b75c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b75c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b75c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b75cc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b75d0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b75d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b75d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b75d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b75d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b75dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b75dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b75e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b75e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b75e4: 0x0  nop
    ctx->pc = 0x2b75e4u;
    // NOP
    // 0x2b75e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b75e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b75ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b75ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b75f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B75F0u;
    {
        const bool branch_taken_0x2b75f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b75f0) {
            ctx->pc = 0x2B7608u;
            goto label_2b7608;
        }
    }
    ctx->pc = 0x2B75F8u;
    // 0x2b75f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b75f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b75fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b75fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7600u;
    {
        const bool branch_taken_0x2b7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7600) {
            ctx->pc = 0x2B7620u;
            goto label_2b7620;
        }
    }
    ctx->pc = 0x2B7608u;
label_2b7608:
    // 0x2b7608: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b760c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7610: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7614: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7618: 0x0  nop
    ctx->pc = 0x2b7618u;
    // NOP
    // 0x2b761c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b761cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2b7620:
    // 0x2b7620: 0xc0ad088  jal         func_2B4220
    ctx->pc = 0x2B7620u;
    SET_GPR_U32(ctx, 31, 0x2B7628u);
    ctx->pc = 0x2B4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4220u, 0x2B7620u, 0x2B7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7628u;
label_2b7628:
    // 0x2b7628: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2B7628u;
    {
        const bool branch_taken_0x2b7628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7628) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7630u;
label_2b7630:
    // 0x2b7630: 0x9683082e  lhu         $v1, 0x82E($s4)
    ctx->pc = 0x2b7630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2094)));
    // 0x2b7634: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B7634u;
    {
        const bool branch_taken_0x2b7634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7634) {
            ctx->pc = 0x2B76A0u;
            goto label_2b76a0;
        }
    }
    ctx->pc = 0x2B763Cu;
    // 0x2b763c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b7640: 0xa683082e  sh          $v1, 0x82E($s4)
    ctx->pc = 0x2b7640u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7644: 0x96830828  lhu         $v1, 0x828($s4)
    ctx->pc = 0x2b7644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2088)));
    // 0x2b7648: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2B7648u;
    {
        const bool branch_taken_0x2b7648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7648) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7650u;
    // 0x2b7650: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b7654: 0xa6830828  sh          $v1, 0x828($s4)
    ctx->pc = 0x2b7654u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7658: 0x96830828  lhu         $v1, 0x828($s4)
    ctx->pc = 0x2b7658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2088)));
    // 0x2b765c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B765Cu;
    {
        const bool branch_taken_0x2b765c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b765c) {
            ctx->pc = 0x2B7678u;
            goto label_2b7678;
        }
    }
    ctx->pc = 0x2B7664u;
    // 0x2b7664: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b7664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7668: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b7668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b766c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2B766Cu;
    {
        const bool branch_taken_0x2b766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B766Cu;
        // 0x2b7670: 0xa68307f0  sh          $v1, 0x7F0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b766c) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7674u;
    // 0x2b7674: 0x0  nop
    ctx->pc = 0x2b7674u;
    // NOP
label_2b7678:
    // 0x2b7678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b767c: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B767Cu;
    SET_GPR_U32(ctx, 31, 0x2B7684u);
    ctx->pc = 0x2B7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B767Cu;
    // 0x2b7680: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B767Cu, 0x2B7684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7684u;
label_2b7684:
    // 0x2b7684: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7688: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B7688u;
    SET_GPR_U32(ctx, 31, 0x2B7690u);
    ctx->pc = 0x2B768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7688u;
    // 0x2b768c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B7688u, 0x2B7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7690u;
label_2b7690:
    // 0x2b7690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b7690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7694: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2B7694u;
    {
        const bool branch_taken_0x2b7694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7694u;
        // 0x2b7698: 0xa68307f0  sh          $v1, 0x7F0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7694) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B769Cu;
    // 0x2b769c: 0x0  nop
    ctx->pc = 0x2b769cu;
    // NOP
label_2b76a0:
    // 0x2b76a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B76A0u;
    {
        const bool branch_taken_0x2b76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76A0u;
        // 0x2b76a4: 0xa2840821  sb          $a0, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76a0) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B76A8u;
label_2b76a8:
    // 0x2b76a8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b76ac: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b76acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b76b0: 0x9685082c  lhu         $a1, 0x82C($s4)
    ctx->pc = 0x2b76b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2092)));
    // 0x2b76b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b76b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b76b8: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x2b76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x2b76bc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b76bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b76c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b76c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b76c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b76c8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2b76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b76cc: 0xa683082c  sh          $v1, 0x82C($s4)
    ctx->pc = 0x2b76ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2092), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b76d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b76d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b76d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2b76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2b76d8: 0xa68307f0  sh          $v1, 0x7F0($s4)
    ctx->pc = 0x2b76d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b76dc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b76dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b76e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b76e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b76e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b76e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b76e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b76e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b76ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B76ECu;
    {
        const bool branch_taken_0x2b76ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76ECu;
        // 0x2b76f0: 0x9685082c  lhu         $a1, 0x82C($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76ec) {
            ctx->pc = 0x2B7704u;
            goto label_2b7704;
        }
    }
    ctx->pc = 0x2B76F4u;
    // 0x2b76f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b76f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b76f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b76f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b76fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B76FCu;
    {
        const bool branch_taken_0x2b76fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B76FCu;
        // 0x2b7700: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b76fc) {
            ctx->pc = 0x2B7720u;
            goto label_2b7720;
        }
    }
    ctx->pc = 0x2B7704u;
label_2b7704:
    // 0x2b7704: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b7704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b7708: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b7708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b770c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b770cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7710: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b7710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b7714: 0x0  nop
    ctx->pc = 0x2b7714u;
    // NOP
    // 0x2b7718: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b7718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b771c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2b771cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b7720:
    // 0x2b7720: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7720u;
    {
        const bool branch_taken_0x2b7720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7720) {
            ctx->pc = 0x2B7748u;
            goto label_2b7748;
        }
    }
    ctx->pc = 0x2B7728u;
    // 0x2b7728: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b772c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7730: 0xa68207f0  sh          $v0, 0x7F0($s4)
    ctx->pc = 0x2b7730u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2032), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7734: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2B7734u;
    SET_GPR_U32(ctx, 31, 0x2B773Cu);
    ctx->pc = 0x2B7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7734u;
    // 0x2b7738: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2B7734u, 0x2B773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B773Cu;
label_2b773c:
    // 0x2b773c: 0x92830822  lbu         $v1, 0x822($s4)
    ctx->pc = 0x2b773cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2082)));
    // 0x2b7740: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B7740u;
    {
        const bool branch_taken_0x2b7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7740u;
        // 0x2b7744: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7740) {
            ctx->pc = 0x2B77A8u;
            goto label_2b77a8;
        }
    }
    ctx->pc = 0x2B7748u;
label_2b7748:
    // 0x2b7748: 0x8e832ab0  lw          $v1, 0x2AB0($s4)
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10928)));
    // 0x2b774c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B774Cu;
    {
        const bool branch_taken_0x2b774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b774c) {
            ctx->pc = 0x2B7770u;
            goto label_2b7770;
        }
    }
    ctx->pc = 0x2B7754u;
    // 0x2b7754: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B7754u;
    {
        const bool branch_taken_0x2b7754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7754) {
            ctx->pc = 0x2B77A8u;
            goto label_2b77a8;
        }
    }
    ctx->pc = 0x2B775Cu;
    // 0x2b775c: 0x90640640  lbu         $a0, 0x640($v1)
    ctx->pc = 0x2b775cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x2b7760: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7764: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B7764u;
    {
        const bool branch_taken_0x2b7764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b7764) {
            ctx->pc = 0x2B77A8u;
            goto label_2b77a8;
        }
    }
    ctx->pc = 0x2B776Cu;
    // 0x2b776c: 0x0  nop
    ctx->pc = 0x2b776cu;
    // NOP
label_2b7770:
    // 0x2b7770: 0x8786822c  lh          $a2, -0x7DD4($gp)
    ctx->pc = 0x2b7770u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935084)));
    // 0x2b7774: 0x9384822e  lbu         $a0, -0x7DD2($gp)
    ctx->pc = 0x2b7774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935086)));
    // 0x2b7778: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x2b7778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2b777c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b777cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b7780: 0x3c028432  lui         $v0, 0x8432
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33842 << 16));
    // 0x2b7784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b7784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7788: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x2b7788u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b778c: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x2b778cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b7790: 0x928408e8  lbu         $a0, 0x8E8($s4)
    ctx->pc = 0x2b7790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x2b7794: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2b7794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2b7798: 0x9084009c  lbu         $a0, 0x9C($a0)
    ctx->pc = 0x2b7798u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2b779c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2b779cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b77a0: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B77A0u;
    SET_GPR_U32(ctx, 31, 0x2B77A8u);
    ctx->pc = 0x2B77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77A0u;
    // 0x2b77a4: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B77A0u, 0x2B77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77A8u;
label_2b77a8:
    // 0x2b77a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b77a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b77ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2b77acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b77b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b77b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b77b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b77b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b77b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b77b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b77bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b77bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b77c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b77c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b77c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b77c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b77c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B77C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77C8u;
        // 0x2b77cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B77C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B77D0u;
}
