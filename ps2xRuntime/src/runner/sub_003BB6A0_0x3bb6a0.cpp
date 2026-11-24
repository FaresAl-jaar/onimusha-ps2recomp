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

// Function: sub_003BB6A0
// Address: 0x3bb6a0 - 0x3bb944
void sub_003BB6A0_0x3bb6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB6A0_0x3bb6a0");
#endif

    switch (ctx->pc) {
        case 0x3bb7b0u: goto label_3bb7b0;
        case 0x3bb858u: goto label_3bb858;
        case 0x3bb8c8u: goto label_3bb8c8;
        case 0x3bb91cu: goto label_3bb91c;
        default: break;
    }

    ctx->pc = 0x3bb6a0u;

    // 0x3bb6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb6a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bb6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb6a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bb6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bb6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb6b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb6b8: 0xc7808420  lwc1        $f0, -0x7BE0($gp)
    ctx->pc = 0x3bb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb6bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bb6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb6c0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x3bb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3bb6c4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3bb6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bb6c8: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3bb6c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3bb6cc: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x3BB6CCu;
    {
        const bool branch_taken_0x3bb6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6CCu;
        // 0x3bb6d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6cc) {
            ctx->pc = 0x3BB8F8u;
            goto label_3bb8f8;
        }
    }
    ctx->pc = 0x3BB6D4u;
    // 0x3bb6d4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3BB6D4u;
    {
        const bool branch_taken_0x3bb6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bb6d4) {
            ctx->pc = 0x3BB7B0u;
            goto label_3bb7b0;
        }
    }
    ctx->pc = 0x3BB6DCu;
    // 0x3bb6dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB6DCu;
    {
        const bool branch_taken_0x3bb6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb6dc) {
            ctx->pc = 0x3BB6F0u;
            goto label_3bb6f0;
        }
    }
    ctx->pc = 0x3BB6E4u;
    // 0x3bb6e4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x3BB6E4u;
    {
        const bool branch_taken_0x3bb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb6e4) {
            ctx->pc = 0x3BB900u;
            goto label_3bb900;
        }
    }
    ctx->pc = 0x3BB6ECu;
    // 0x3bb6ec: 0x0  nop
    ctx->pc = 0x3bb6ecu;
    // NOP
label_3bb6f0:
    // 0x3bb6f0: 0x262207a0  addiu       $v0, $s1, 0x7A0
    ctx->pc = 0x3bb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x3bb6f4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3bb6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3bb6f8: 0x3006ffff  andi        $a2, $zero, 0xFFFF
    ctx->pc = 0x3bb6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x3bb6fc: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3bb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3bb700: 0x92280838  lbu         $t0, 0x838($s1)
    ctx->pc = 0x3bb700u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x3bb704: 0x34470040  ori         $a3, $v0, 0x40
    ctx->pc = 0x3bb704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3bb708: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x3bb708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3bb70c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3bb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3bb710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bb710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb714: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bb714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bb718: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bb71c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bb71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bb720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bb720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bb724: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bb728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bb728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb72c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x3bb72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3bb730: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3bb730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3bb734: 0x9063003c  lbu         $v1, 0x3C($v1)
    ctx->pc = 0x3bb734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3bb738: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3bb738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3bb73c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3bb73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb740: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3bb740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bb744: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3bb744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb748: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x3bb748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bb74c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3bb74cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb750: 0xae2707ec  sw          $a3, 0x7EC($s1)
    ctx->pc = 0x3bb750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 7));
    // 0x3bb754: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x3bb754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bb758: 0xa6260826  sh          $a2, 0x826($s1)
    ctx->pc = 0x3bb758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 6));
    // 0x3bb75c: 0xa625082a  sh          $a1, 0x82A($s1)
    ctx->pc = 0x3bb75cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 5));
    // 0x3bb760: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x3bb760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3bb764: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bb764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb768: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bb768u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bb76c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bb76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bb770: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb774: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB774u;
    {
        const bool branch_taken_0x3bb774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb774) {
            ctx->pc = 0x3BB78Cu;
            goto label_3bb78c;
        }
    }
    ctx->pc = 0x3BB77Cu;
    // 0x3bb77c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb780: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bb780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bb784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB784u;
    {
        const bool branch_taken_0x3bb784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB784u;
        // 0x3bb788: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb784) {
            ctx->pc = 0x3BB7A8u;
            goto label_3bb7a8;
        }
    }
    ctx->pc = 0x3BB78Cu;
label_3bb78c:
    // 0x3bb78c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bb78cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bb790: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bb790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bb794: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb798: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bb798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bb79c: 0x0  nop
    ctx->pc = 0x3bb79cu;
    // NOP
    // 0x3bb7a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bb7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bb7a4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3bb7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3bb7a8:
    // 0x3bb7a8: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x3BB7A8u;
    SET_GPR_U32(ctx, 31, 0x3BB7B0u);
    ctx->pc = 0x3BB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7A8u;
    // 0x3bb7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x3BB7A8u, 0x3BB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7B0u;
label_3bb7b0:
    // 0x3bb7b0: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x3bb7b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3bb7b4: 0x28611000  slti        $at, $v1, 0x1000
    ctx->pc = 0x3bb7b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3bb7b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB7B8u;
    {
        const bool branch_taken_0x3bb7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb7b8) {
            ctx->pc = 0x3BB7C8u;
            goto label_3bb7c8;
        }
    }
    ctx->pc = 0x3BB7C0u;
    // 0x3bb7c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb7c4: 0xa623082c  sh          $v1, 0x82C($s1)
    ctx->pc = 0x3bb7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
label_3bb7c8:
    // 0x3bb7c8: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x3bb7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x3bb7cc: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3BB7CCu;
    {
        const bool branch_taken_0x3bb7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb7cc) {
            ctx->pc = 0x3BB8D8u;
            goto label_3bb8d8;
        }
    }
    ctx->pc = 0x3BB7D4u;
    // 0x3bb7d4: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bb7d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb7d8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x3BB7D8u;
    {
        const bool branch_taken_0x3bb7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb7d8) {
            ctx->pc = 0x3BB8C8u;
            goto label_3bb8c8;
        }
    }
    ctx->pc = 0x3BB7E0u;
    // 0x3bb7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb7e4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3BB7E4u;
    {
        const bool branch_taken_0x3bb7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7E4u;
        // 0x3bb7e8: 0xa622082a  sh          $v0, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb7e4) {
            ctx->pc = 0x3BB860u;
            goto label_3bb860;
        }
    }
    ctx->pc = 0x3BB7ECu;
    // 0x3bb7ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bb7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb7f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3bb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3bb7f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bb7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bb7f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3bb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3bb7fc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3bb7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3bb800: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bb800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bb804: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bb804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bb808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bb808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bb80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bb80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb810: 0x0  nop
    ctx->pc = 0x3bb810u;
    // NOP
    // 0x3bb814: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bb814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bb818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb81c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB81Cu;
    {
        const bool branch_taken_0x3bb81c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb81c) {
            ctx->pc = 0x3BB834u;
            goto label_3bb834;
        }
    }
    ctx->pc = 0x3BB824u;
    // 0x3bb824: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb828: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb82c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB82Cu;
    {
        const bool branch_taken_0x3bb82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB82Cu;
        // 0x3bb830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb82c) {
            ctx->pc = 0x3BB850u;
            goto label_3bb850;
        }
    }
    ctx->pc = 0x3BB834u;
label_3bb834:
    // 0x3bb834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bb834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bb838: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bb838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bb83c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb840: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb844: 0x0  nop
    ctx->pc = 0x3bb844u;
    // NOP
    // 0x3bb848: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3bb848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3bb84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bb84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb850:
    // 0x3bb850: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x3BB850u;
    SET_GPR_U32(ctx, 31, 0x3BB858u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x3BB850u, 0x3BB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB858u;
label_3bb858:
    // 0x3bb858: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3BB858u;
    {
        const bool branch_taken_0x3bb858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb858) {
            ctx->pc = 0x3BB8C8u;
            goto label_3bb8c8;
        }
    }
    ctx->pc = 0x3BB860u;
label_3bb860:
    // 0x3bb860: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3bb860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3bb864: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bb864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb868: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3bb868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3bb86c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bb86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bb870: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3bb870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3bb874: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bb874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bb878: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bb878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bb87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bb87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb880: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bb880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bb884: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bb884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bb888: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb88c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB88Cu;
    {
        const bool branch_taken_0x3bb88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bb88c) {
            ctx->pc = 0x3BB8A4u;
            goto label_3bb8a4;
        }
    }
    ctx->pc = 0x3BB894u;
    // 0x3bb894: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb898: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb89c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB89Cu;
    {
        const bool branch_taken_0x3bb89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB89Cu;
        // 0x3bb8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb89c) {
            ctx->pc = 0x3BB8C0u;
            goto label_3bb8c0;
        }
    }
    ctx->pc = 0x3BB8A4u;
label_3bb8a4:
    // 0x3bb8a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bb8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bb8a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bb8ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb8acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb8b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb8b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb8b4: 0x0  nop
    ctx->pc = 0x3bb8b4u;
    // NOP
    // 0x3bb8b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3bb8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3bb8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bb8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb8c0:
    // 0x3bb8c0: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x3BB8C0u;
    SET_GPR_U32(ctx, 31, 0x3BB8C8u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x3BB8C0u, 0x3BB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB8C8u;
label_3bb8c8:
    // 0x3bb8c8: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3bb8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3bb8cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb8d0: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x3bb8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb8d4: 0x0  nop
    ctx->pc = 0x3bb8d4u;
    // NOP
label_3bb8d8:
    // 0x3bb8d8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB8D8u;
    {
        const bool branch_taken_0x3bb8d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8d8) {
            ctx->pc = 0x3BB900u;
            goto label_3bb900;
        }
    }
    ctx->pc = 0x3BB8E0u;
    // 0x3bb8e0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3bb8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3bb8e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB8E4u;
    {
        const bool branch_taken_0x3bb8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8E4u;
        // 0x3bb8e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8e4) {
            ctx->pc = 0x3BB900u;
            goto label_3bb900;
        }
    }
    ctx->pc = 0x3BB8ECu;
    // 0x3bb8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB8ECu;
    {
        const bool branch_taken_0x3bb8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8ECu;
        // 0x3bb8f0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8ec) {
            ctx->pc = 0x3BB900u;
            goto label_3bb900;
        }
    }
    ctx->pc = 0x3BB8F4u;
    // 0x3bb8f4: 0x0  nop
    ctx->pc = 0x3bb8f4u;
    // NOP
label_3bb8f8:
    // 0x3bb8f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3BB8F8u;
    {
        const bool branch_taken_0x3bb8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8f8) {
            ctx->pc = 0x3BB930u;
            goto label_3bb930;
        }
    }
    ctx->pc = 0x3BB900u;
label_3bb900:
    // 0x3bb900: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x3bb900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x3bb904: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB904u;
    {
        const bool branch_taken_0x3bb904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb904) {
            ctx->pc = 0x3BB928u;
            goto label_3bb928;
        }
    }
    ctx->pc = 0x3BB90Cu;
    // 0x3bb90c: 0x9622082c  lhu         $v0, 0x82C($s1)
    ctx->pc = 0x3bb90cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3bb910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bb910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb914: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3BB914u;
    SET_GPR_U32(ctx, 31, 0x3BB91Cu);
    ctx->pc = 0x3BB918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB914u;
    // 0x3bb918: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3BB914u, 0x3BB91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB91Cu;
label_3bb91c:
    // 0x3bb91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB91Cu;
    {
        const bool branch_taken_0x3bb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB91Cu;
        // 0x3bb920: 0xa62207f0  sh          $v0, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb91c) {
            ctx->pc = 0x3BB930u;
            goto label_3bb930;
        }
    }
    ctx->pc = 0x3BB924u;
    // 0x3bb924: 0x0  nop
    ctx->pc = 0x3bb924u;
    // NOP
label_3bb928:
    // 0x3bb928: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3bb928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3bb92c: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x3bb92cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_3bb930:
    // 0x3bb930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bb930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb93c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB93Cu;
        // 0x3bb940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB944u;
}
