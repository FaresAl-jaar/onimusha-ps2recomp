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

// Function: sub_003AE990
// Address: 0x3ae990 - 0x3aeb24
void sub_003AE990_0x3ae990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE990_0x3ae990");
#endif

    switch (ctx->pc) {
        case 0x3ae990u: goto label_3ae990;
        case 0x3ae994u: goto label_3ae994;
        case 0x3ae998u: goto label_3ae998;
        case 0x3ae99cu: goto label_3ae99c;
        case 0x3ae9a0u: goto label_3ae9a0;
        case 0x3ae9a4u: goto label_3ae9a4;
        case 0x3ae9a8u: goto label_3ae9a8;
        case 0x3ae9acu: goto label_3ae9ac;
        case 0x3ae9b0u: goto label_3ae9b0;
        case 0x3ae9b4u: goto label_3ae9b4;
        case 0x3ae9b8u: goto label_3ae9b8;
        case 0x3ae9bcu: goto label_3ae9bc;
        case 0x3ae9c0u: goto label_3ae9c0;
        case 0x3ae9c4u: goto label_3ae9c4;
        case 0x3ae9c8u: goto label_3ae9c8;
        case 0x3ae9ccu: goto label_3ae9cc;
        case 0x3ae9d0u: goto label_3ae9d0;
        case 0x3ae9d4u: goto label_3ae9d4;
        case 0x3ae9d8u: goto label_3ae9d8;
        case 0x3ae9dcu: goto label_3ae9dc;
        case 0x3ae9e0u: goto label_3ae9e0;
        case 0x3ae9e4u: goto label_3ae9e4;
        case 0x3ae9e8u: goto label_3ae9e8;
        case 0x3ae9ecu: goto label_3ae9ec;
        case 0x3ae9f0u: goto label_3ae9f0;
        case 0x3ae9f4u: goto label_3ae9f4;
        case 0x3ae9f8u: goto label_3ae9f8;
        case 0x3ae9fcu: goto label_3ae9fc;
        case 0x3aea00u: goto label_3aea00;
        case 0x3aea04u: goto label_3aea04;
        case 0x3aea08u: goto label_3aea08;
        case 0x3aea0cu: goto label_3aea0c;
        case 0x3aea10u: goto label_3aea10;
        case 0x3aea14u: goto label_3aea14;
        case 0x3aea18u: goto label_3aea18;
        case 0x3aea1cu: goto label_3aea1c;
        case 0x3aea20u: goto label_3aea20;
        case 0x3aea24u: goto label_3aea24;
        case 0x3aea28u: goto label_3aea28;
        case 0x3aea2cu: goto label_3aea2c;
        case 0x3aea30u: goto label_3aea30;
        case 0x3aea34u: goto label_3aea34;
        case 0x3aea38u: goto label_3aea38;
        case 0x3aea3cu: goto label_3aea3c;
        case 0x3aea40u: goto label_3aea40;
        case 0x3aea44u: goto label_3aea44;
        case 0x3aea48u: goto label_3aea48;
        case 0x3aea4cu: goto label_3aea4c;
        case 0x3aea50u: goto label_3aea50;
        case 0x3aea54u: goto label_3aea54;
        case 0x3aea58u: goto label_3aea58;
        case 0x3aea5cu: goto label_3aea5c;
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea64u: goto label_3aea64;
        case 0x3aea68u: goto label_3aea68;
        case 0x3aea6cu: goto label_3aea6c;
        case 0x3aea70u: goto label_3aea70;
        case 0x3aea74u: goto label_3aea74;
        case 0x3aea78u: goto label_3aea78;
        case 0x3aea7cu: goto label_3aea7c;
        case 0x3aea80u: goto label_3aea80;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aea88u: goto label_3aea88;
        case 0x3aea8cu: goto label_3aea8c;
        case 0x3aea90u: goto label_3aea90;
        case 0x3aea94u: goto label_3aea94;
        case 0x3aea98u: goto label_3aea98;
        case 0x3aea9cu: goto label_3aea9c;
        case 0x3aeaa0u: goto label_3aeaa0;
        case 0x3aeaa4u: goto label_3aeaa4;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeaacu: goto label_3aeaac;
        case 0x3aeab0u: goto label_3aeab0;
        case 0x3aeab4u: goto label_3aeab4;
        case 0x3aeab8u: goto label_3aeab8;
        case 0x3aeabcu: goto label_3aeabc;
        case 0x3aeac0u: goto label_3aeac0;
        case 0x3aeac4u: goto label_3aeac4;
        case 0x3aeac8u: goto label_3aeac8;
        case 0x3aeaccu: goto label_3aeacc;
        case 0x3aead0u: goto label_3aead0;
        case 0x3aead4u: goto label_3aead4;
        case 0x3aead8u: goto label_3aead8;
        case 0x3aeadcu: goto label_3aeadc;
        case 0x3aeae0u: goto label_3aeae0;
        case 0x3aeae4u: goto label_3aeae4;
        case 0x3aeae8u: goto label_3aeae8;
        case 0x3aeaecu: goto label_3aeaec;
        case 0x3aeaf0u: goto label_3aeaf0;
        case 0x3aeaf4u: goto label_3aeaf4;
        case 0x3aeaf8u: goto label_3aeaf8;
        case 0x3aeafcu: goto label_3aeafc;
        case 0x3aeb00u: goto label_3aeb00;
        case 0x3aeb04u: goto label_3aeb04;
        case 0x3aeb08u: goto label_3aeb08;
        case 0x3aeb0cu: goto label_3aeb0c;
        case 0x3aeb10u: goto label_3aeb10;
        case 0x3aeb14u: goto label_3aeb14;
        case 0x3aeb18u: goto label_3aeb18;
        case 0x3aeb1cu: goto label_3aeb1c;
        case 0x3aeb20u: goto label_3aeb20;
        default: break;
    }

    ctx->pc = 0x3ae990u;

label_3ae990:
    // 0x3ae990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ae994:
    // 0x3ae994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ae994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ae998:
    // 0x3ae998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ae99c:
    // 0x3ae99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9a0:
    // 0x3ae9a0: 0xc0a60b8  jal         func_2982E0
label_3ae9a4:
    if (ctx->pc == 0x3AE9A4u) {
        ctx->pc = 0x3AE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9A0u;
        // 0x3ae9a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9A8u;
        goto label_3ae9a8;
    }
    ctx->pc = 0x3AE9A0u;
    SET_GPR_U32(ctx, 31, 0x3AE9A8u);
    ctx->pc = 0x3AE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE9A0u;
    // 0x3ae9a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x3AE9A0u, 0x3AE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9A8u;
label_3ae9a8:
    // 0x3ae9a8: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x3ae9a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3ae9ac:
    // 0x3ae9ac: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3ae9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_3ae9b0:
    // 0x3ae9b0: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
label_3ae9b4:
    if (ctx->pc == 0x3AE9B4u) {
        ctx->pc = 0x3AE9B8u;
        goto label_3ae9b8;
    }
    ctx->pc = 0x3AE9B0u;
    {
        const bool branch_taken_0x3ae9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9b0) {
            ctx->pc = 0x3AEB10u;
            goto label_3aeb10;
        }
    }
    ctx->pc = 0x3AE9B8u;
label_3ae9b8:
    // 0x3ae9b8: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x3ae9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
label_3ae9bc:
    // 0x3ae9bc: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_3ae9c0:
    if (ctx->pc == 0x3AE9C0u) {
        ctx->pc = 0x3AE9C4u;
        goto label_3ae9c4;
    }
    ctx->pc = 0x3AE9BCu;
    {
        const bool branch_taken_0x3ae9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9bc) {
            ctx->pc = 0x3AEB10u;
            goto label_3aeb10;
        }
    }
    ctx->pc = 0x3AE9C4u;
label_3ae9c4:
    // 0x3ae9c4: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x3ae9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_3ae9c8:
    // 0x3ae9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae9cc:
    // 0x3ae9cc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x3ae9ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3ae9d0:
    // 0x3ae9d0: 0x1483004f  bne         $a0, $v1, . + 4 + (0x4F << 2)
label_3ae9d4:
    if (ctx->pc == 0x3AE9D4u) {
        ctx->pc = 0x3AE9D8u;
        goto label_3ae9d8;
    }
    ctx->pc = 0x3AE9D0u;
    {
        const bool branch_taken_0x3ae9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae9d0) {
            ctx->pc = 0x3AEB10u;
            goto label_3aeb10;
        }
    }
    ctx->pc = 0x3AE9D8u;
label_3ae9d8:
    // 0x3ae9d8: 0x8e3001ec  lw          $s0, 0x1EC($s1)
    ctx->pc = 0x3ae9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3ae9dc:
    // 0x3ae9dc: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_3ae9e0:
    if (ctx->pc == 0x3AE9E0u) {
        ctx->pc = 0x3AE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9DCu;
        // 0x3ae9e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9E4u;
        goto label_3ae9e4;
    }
    ctx->pc = 0x3AE9DCu;
    {
        const bool branch_taken_0x3ae9dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9DCu;
        // 0x3ae9e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae9dc) {
            ctx->pc = 0x3AEB10u;
            goto label_3aeb10;
        }
    }
    ctx->pc = 0x3AE9E4u;
label_3ae9e4:
    // 0x3ae9e4: 0x0  nop
    ctx->pc = 0x3ae9e4u;
    // NOP
label_3ae9e8:
    // 0x3ae9e8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3ae9e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae9ec:
    // 0x3ae9ec: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3ae9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ae9f0:
    // 0x3ae9f0: 0x14800043  bnez        $a0, . + 4 + (0x43 << 2)
label_3ae9f4:
    if (ctx->pc == 0x3AE9F4u) {
        ctx->pc = 0x3AE9F8u;
        goto label_3ae9f8;
    }
    ctx->pc = 0x3AE9F0u;
    {
        const bool branch_taken_0x3ae9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9f0) {
            ctx->pc = 0x3AEB00u;
            goto label_3aeb00;
        }
    }
    ctx->pc = 0x3AE9F8u;
label_3ae9f8:
    // 0x3ae9f8: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x3ae9f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3ae9fc:
    // 0x3ae9fc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3ae9fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_3aea00:
    // 0x3aea00: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x3aea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_3aea04:
    // 0x3aea04: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
label_3aea08:
    if (ctx->pc == 0x3AEA08u) {
        ctx->pc = 0x3AEA0Cu;
        goto label_3aea0c;
    }
    ctx->pc = 0x3AEA04u;
    {
        const bool branch_taken_0x3aea04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aea04) {
            ctx->pc = 0x3AEB00u;
            goto label_3aeb00;
        }
    }
    ctx->pc = 0x3AEA0Cu;
label_3aea0c:
    // 0x3aea0c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x3aea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_3aea10:
    // 0x3aea10: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3aea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3aea14:
    // 0x3aea14: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3aea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3aea18:
    // 0x3aea18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3aea18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3aea1c:
    // 0x3aea1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3aea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3aea20:
    // 0x3aea20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aea20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aea24:
    // 0x3aea24: 0x0  nop
    ctx->pc = 0x3aea24u;
    // NOP
label_3aea28:
    // 0x3aea28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3aea28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3aea2c:
    // 0x3aea2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3aea2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3aea30:
    // 0x3aea30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3aea34:
    if (ctx->pc == 0x3AEA34u) {
        ctx->pc = 0x3AEA38u;
        goto label_3aea38;
    }
    ctx->pc = 0x3AEA30u;
    {
        const bool branch_taken_0x3aea30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3aea30) {
            ctx->pc = 0x3AEA48u;
            goto label_3aea48;
        }
    }
    ctx->pc = 0x3AEA38u;
label_3aea38:
    // 0x3aea38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aea38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3aea3c:
    // 0x3aea3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3aea3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3aea40:
    // 0x3aea40: 0x10000008  b           . + 4 + (0x8 << 2)
label_3aea44:
    if (ctx->pc == 0x3AEA44u) {
        ctx->pc = 0x3AEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA40u;
        // 0x3aea44: 0x92060002  lbu         $a2, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA48u;
        goto label_3aea48;
    }
    ctx->pc = 0x3AEA40u;
    {
        const bool branch_taken_0x3aea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA40u;
        // 0x3aea44: 0x92060002  lbu         $a2, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea40) {
            ctx->pc = 0x3AEA64u;
            goto label_3aea64;
        }
    }
    ctx->pc = 0x3AEA48u;
label_3aea48:
    // 0x3aea48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3aea48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3aea4c:
    // 0x3aea4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3aea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3aea50:
    // 0x3aea50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aea50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3aea54:
    // 0x3aea54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3aea54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3aea58:
    // 0x3aea58: 0x0  nop
    ctx->pc = 0x3aea58u;
    // NOP
label_3aea5c:
    // 0x3aea5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aea60:
    // 0x3aea60: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3aea60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3aea64:
    // 0x3aea64: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3aea64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3aea68:
    // 0x3aea68: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3aea68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3aea6c:
    // 0x3aea6c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x3aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_3aea70:
    // 0x3aea70: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x3aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
label_3aea74:
    // 0x3aea74: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3aea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3aea78:
    // 0x3aea78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3aea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3aea7c:
    // 0x3aea7c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3aea7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3aea80:
    // 0x3aea80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3aea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3aea84:
    // 0x3aea84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aea88:
    // 0x3aea88: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3aea88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aea8c:
    // 0x3aea8c: 0x320f809  jalr        $t9
label_3aea90:
    if (ctx->pc == 0x3AEA90u) {
        ctx->pc = 0x3AEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA8Cu;
        // 0x3aea90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA94u;
        goto label_3aea94;
    }
    ctx->pc = 0x3AEA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AEA94u);
        ctx->pc = 0x3AEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA8Cu;
        // 0x3aea90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEA8Cu, 0x3AEA94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEA94u;
label_3aea94:
    // 0x3aea94: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3aea94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3aea98:
    // 0x3aea98: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x3aea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_3aea9c:
    // 0x3aea9c: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x3aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
label_3aeaa0:
    // 0x3aeaa0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3aeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3aeaa4:
    // 0x3aeaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3aeaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3aeaa8:
    // 0x3aeaa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3aeaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3aeaac:
    // 0x3aeaac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aeab0:
    // 0x3aeab0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3aeab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aeab4:
    // 0x3aeab4: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3aeab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3aeab8:
    // 0x3aeab8: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x3aeab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_3aeabc:
    // 0x3aeabc: 0x320f809  jalr        $t9
label_3aeac0:
    if (ctx->pc == 0x3AEAC0u) {
        ctx->pc = 0x3AEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEABCu;
        // 0x3aeac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAC4u;
        goto label_3aeac4;
    }
    ctx->pc = 0x3AEABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AEAC4u);
        ctx->pc = 0x3AEAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEABCu;
        // 0x3aeac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEABCu, 0x3AEAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEAC4u;
label_3aeac4:
    // 0x3aeac4: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x3aeac4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3aeac8:
    // 0x3aeac8: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x3aeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_3aeacc:
    // 0x3aeacc: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x3aeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
label_3aead0:
    // 0x3aead0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aead4:
    // 0x3aead4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3aead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3aead8:
    // 0x3aead8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aead8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aeadc:
    // 0x3aeadc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3aeadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3aeae0:
    // 0x3aeae0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3aeae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3aeae4:
    // 0x3aeae4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3aeae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3aeae8:
    // 0x3aeae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aeaec:
    // 0x3aeaec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3aeaecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aeaf0:
    // 0x3aeaf0: 0xc09fcf4  jal         func_27F3D0
label_3aeaf4:
    if (ctx->pc == 0x3AEAF4u) {
        ctx->pc = 0x3AEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAF0u;
        // 0x3aeaf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAF8u;
        goto label_3aeaf8;
    }
    ctx->pc = 0x3AEAF0u;
    SET_GPR_U32(ctx, 31, 0x3AEAF8u);
    ctx->pc = 0x3AEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAF0u;
    // 0x3aeaf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x3AEAF0u, 0x3AEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAF8u;
label_3aeaf8:
    // 0x3aeaf8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3aeafc:
    if (ctx->pc == 0x3AEAFCu) {
        ctx->pc = 0x3AEB00u;
        goto label_3aeb00;
    }
    ctx->pc = 0x3AEAF8u;
    {
        const bool branch_taken_0x3aeaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aeaf8) {
            ctx->pc = 0x3AEB10u;
            goto label_3aeb10;
        }
    }
    ctx->pc = 0x3AEB00u;
label_3aeb00:
    // 0x3aeb00: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3aeb00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3aeb04:
    // 0x3aeb04: 0x1600ffb8  bnez        $s0, . + 4 + (-0x48 << 2)
label_3aeb08:
    if (ctx->pc == 0x3AEB08u) {
        ctx->pc = 0x3AEB0Cu;
        goto label_3aeb0c;
    }
    ctx->pc = 0x3AEB04u;
    {
        const bool branch_taken_0x3aeb04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeb04) {
            ctx->pc = 0x3AE9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae9e8;
        }
    }
    ctx->pc = 0x3AEB0Cu;
label_3aeb0c:
    // 0x3aeb0c: 0x0  nop
    ctx->pc = 0x3aeb0cu;
    // NOP
label_3aeb10:
    // 0x3aeb10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aeb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3aeb14:
    // 0x3aeb14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aeb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aeb18:
    // 0x3aeb18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aeb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aeb1c:
    // 0x3aeb1c: 0x3e00008  jr          $ra
label_3aeb20:
    if (ctx->pc == 0x3AEB20u) {
        ctx->pc = 0x3AEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB1Cu;
        // 0x3aeb20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB24u;
        goto label_fallthrough_0x3aeb1c;
    }
    ctx->pc = 0x3AEB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB1Cu;
        // 0x3aeb20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aeb1c:
    ctx->pc = 0x3AEB24u;
}
