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

// Function: sub_002F06F0
// Address: 0x2f06f0 - 0x2f08d0
void sub_002F06F0_0x2f06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06F0_0x2f06f0");
#endif

    switch (ctx->pc) {
        case 0x2f0834u: goto label_2f0834;
        case 0x2f0844u: goto label_2f0844;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0894u: goto label_2f0894;
        case 0x2f08b8u: goto label_2f08b8;
        default: break;
    }

    ctx->pc = 0x2f06f0u;

    // 0x2f06f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f06f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f06f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f06f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f06fc: 0x83838ac0  lb          $v1, -0x7540($gp)
    ctx->pc = 0x2f06fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x2f0700: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F0700u;
    {
        const bool branch_taken_0x2f0700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0700u;
        // 0x2f0704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0700) {
            ctx->pc = 0x2F07A0u;
            goto label_2f07a0;
        }
    }
    ctx->pc = 0x2F0708u;
    // 0x2f0708: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2f0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f070c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f070cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0710: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f0710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f0714: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2f0714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2f0718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f071c: 0x0  nop
    ctx->pc = 0x2f071cu;
    // NOP
    // 0x2f0720: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2f0720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2f0724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f0724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0728: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0728u;
    {
        const bool branch_taken_0x2f0728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0728) {
            ctx->pc = 0x2F0740u;
            goto label_2f0740;
        }
    }
    ctx->pc = 0x2F0730u;
    // 0x2f0730: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f0734: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2f0734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f0738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0738u;
    {
        const bool branch_taken_0x2f0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0738) {
            ctx->pc = 0x2F0758u;
            goto label_2f0758;
        }
    }
    ctx->pc = 0x2F0740u;
label_2f0740:
    // 0x2f0740: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f0740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0744: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f0744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0748: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f074c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2f074cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2f0750: 0x0  nop
    ctx->pc = 0x2f0750u;
    // NOP
    // 0x2f0754: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2f0754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2f0758:
    // 0x2f0758: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0758u;
    {
        const bool branch_taken_0x2f0758 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2F075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0758u;
        // 0x2f075c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0758) {
            ctx->pc = 0x2F076Cu;
            goto label_2f076c;
        }
    }
    ctx->pc = 0x2F0760u;
    // 0x2f0760: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2f0760u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0764u;
    {
        const bool branch_taken_0x2f0764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0764u;
        // 0x2f0768: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0764) {
            ctx->pc = 0x2F0784u;
            goto label_2f0784;
        }
    }
    ctx->pc = 0x2F076Cu;
label_2f076c:
    // 0x2f076c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2f076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2f0770: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f0770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f0774: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0778: 0x0  nop
    ctx->pc = 0x2f0778u;
    // NOP
    // 0x2f077c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f077cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0780: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f0780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f0784:
    // 0x2f0784: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2f0784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2f0788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f078c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f078cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0790: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2f0790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2f0794: 0xa3838ac0  sb          $v1, -0x7540($gp)
    ctx->pc = 0x2f0794u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937280), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f0798: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f0798u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f079c: 0xe420c650  swc1        $f0, -0x39B0($at)
    ctx->pc = 0x2f079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x67C650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67C650u, _value); } while (0); }
label_2f07a0:
    // 0x2f07a0: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2f07a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2f07a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f07a8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F07A8u;
    {
        const bool branch_taken_0x2f07a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f07a8) {
            ctx->pc = 0x2F07E8u;
            goto label_2f07e8;
        }
    }
    ctx->pc = 0x2F07B0u;
    // 0x2f07b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F07B0u;
    {
        const bool branch_taken_0x2f07b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f07b0) {
            ctx->pc = 0x2F07C0u;
            goto label_2f07c0;
        }
    }
    ctx->pc = 0x2F07B8u;
    // 0x2f07b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F07B8u;
    {
        const bool branch_taken_0x2f07b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f07b8) {
            ctx->pc = 0x2F08C0u;
            goto label_2f08c0;
        }
    }
    ctx->pc = 0x2F07C0u;
label_2f07c0:
    // 0x2f07c0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2f07c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2f07c4: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2f07c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2f07c8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2f07c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2f07cc: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2f07ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2f07d0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2f07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2f07d4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2f07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2f07d8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2f07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2f07dc: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2f07dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2f07e0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2f07e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f07e4: 0x0  nop
    ctx->pc = 0x2f07e4u;
    // NOP
label_2f07e8:
    // 0x2f07e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f07ec: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x2f07ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f07f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f07f4: 0x0  nop
    ctx->pc = 0x2f07f4u;
    // NOP
    // 0x2f07f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f07f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f07fc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x2F07FCu;
    {
        const bool branch_taken_0x2f07fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f07fc) {
            ctx->pc = 0x2F0860u;
            goto label_2f0860;
        }
    }
    ctx->pc = 0x2F0804u;
    // 0x2f0804: 0x92022b27  lbu         $v0, 0x2B27($s0)
    ctx->pc = 0x2f0804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11047)));
    // 0x2f0808: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f0808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f080c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F080Cu;
    {
        const bool branch_taken_0x2f080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F080Cu;
        // 0x2f0810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f080c) {
            ctx->pc = 0x2F0818u;
            goto label_2f0818;
        }
    }
    ctx->pc = 0x2F0814u;
    // 0x2f0814: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x2f0814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_2f0818:
    // 0x2f0818: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2f0818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2f081c: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x2f081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x2f0820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0824: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2f0824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f0828: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f0828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f082c: 0xc052214  jal         func_148850
    ctx->pc = 0x2F082Cu;
    SET_GPR_U32(ctx, 31, 0x2F0834u);
    ctx->pc = 0x2F0830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F082Cu;
    // 0x2f0830: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x2F082Cu, 0x2F0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0834u;
label_2f0834:
    // 0x2f0834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0838: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f083c: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2F083Cu;
    SET_GPR_U32(ctx, 31, 0x2F0844u);
    ctx->pc = 0x2F0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F083Cu;
    // 0x2f0840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2F083Cu, 0x2F0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0844u;
label_2f0844:
    // 0x2f0844: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x2f0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f084c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2f084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0850: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f0850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f0854: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2f0854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2f0858: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F0858u;
    {
        const bool branch_taken_0x2f0858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0858u;
        // 0x2f085c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0858) {
            ctx->pc = 0x2F08C0u;
            goto label_2f08c0;
        }
    }
    ctx->pc = 0x2F0860u;
label_2f0860:
    // 0x2f0860: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2f0860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2f0864: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2f0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0868: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2f0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2f086c: 0xc420c650  lwc1        $f0, -0x39B0($at)
    ctx->pc = 0x2f086cu;
    { uint32_t bits = FAST_READ32(0x67C650u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0870: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f0870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0874: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x2f0874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2f0878: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f0878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f087c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2F087Cu;
    SET_GPR_U32(ctx, 31, 0x2F0884u);
    ctx->pc = 0x2F0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F087Cu;
    // 0x2f0880: 0xe6000094  swc1        $f0, 0x94($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2F087Cu, 0x2F0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0884u;
label_2f0884:
    // 0x2f0884: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2f0884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2f0888: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2f0888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2f088c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2F088Cu;
    SET_GPR_U32(ctx, 31, 0x2F0894u);
    ctx->pc = 0x2F0890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F088Cu;
    // 0x2f0890: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2F088Cu, 0x2F0894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0894u;
label_2f0894:
    // 0x2f0894: 0x920307d8  lbu         $v1, 0x7D8($s0)
    ctx->pc = 0x2f0894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x2f0898: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2f0898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2f089c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F089Cu;
    {
        const bool branch_taken_0x2f089c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F089Cu;
        // 0x2f08a0: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f089c) {
            ctx->pc = 0x2F08B8u;
            goto label_2f08b8;
        }
    }
    ctx->pc = 0x2F08A4u;
    // 0x2f08a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f08a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f08a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f08acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08b0: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x2F08B0u;
    SET_GPR_U32(ctx, 31, 0x2F08B8u);
    ctx->pc = 0x2F08B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08B0u;
    // 0x2f08b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x2F08B0u, 0x2F08B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08B8u;
label_2f08b8:
    // 0x2f08b8: 0xa2002b26  sb          $zero, 0x2B26($s0)
    ctx->pc = 0x2f08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11046), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f08bc: 0x0  nop
    ctx->pc = 0x2f08bcu;
    // NOP
label_2f08c0:
    // 0x2f08c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f08c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f08c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f08c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f08c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F08C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08C8u;
        // 0x2f08cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F08C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F08D0u;
}
