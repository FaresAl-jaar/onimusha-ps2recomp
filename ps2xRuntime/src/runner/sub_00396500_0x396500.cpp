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

// Function: sub_00396500
// Address: 0x396500 - 0x396840
void sub_00396500_0x396500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396500_0x396500");
#endif

    switch (ctx->pc) {
        case 0x396580u: goto label_396580;
        case 0x396588u: goto label_396588;
        case 0x3965e4u: goto label_3965e4;
        case 0x39661cu: goto label_39661c;
        case 0x396634u: goto label_396634;
        case 0x396678u: goto label_396678;
        case 0x3966f0u: goto label_3966f0;
        case 0x396700u: goto label_396700;
        case 0x39675cu: goto label_39675c;
        case 0x396778u: goto label_396778;
        case 0x396784u: goto label_396784;
        case 0x396794u: goto label_396794;
        case 0x3967c8u: goto label_3967c8;
        case 0x396804u: goto label_396804;
        default: break;
    }

    ctx->pc = 0x396500u;

    // 0x396500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396504: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x396504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39650c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x396510: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x396510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x396514: 0x1068003c  beq         $v1, $t0, . + 4 + (0x3C << 2)
    ctx->pc = 0x396514u;
    {
        const bool branch_taken_0x396514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x396518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396514u;
        // 0x396518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396514) {
            ctx->pc = 0x396608u;
            goto label_396608;
        }
    }
    ctx->pc = 0x39651Cu;
    // 0x39651c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39651Cu;
    {
        const bool branch_taken_0x39651c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39651c) {
            ctx->pc = 0x396530u;
            goto label_396530;
        }
    }
    ctx->pc = 0x396524u;
    // 0x396524: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x396524u;
    {
        const bool branch_taken_0x396524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396524) {
            ctx->pc = 0x396830u;
            goto label_396830;
        }
    }
    ctx->pc = 0x39652Cu;
    // 0x39652c: 0x0  nop
    ctx->pc = 0x39652cu;
    // NOP
label_396530:
    // 0x396530: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x396530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x396534: 0x78275c10  lq          $a3, 0x5C10($at)
    ctx->pc = 0x396534u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C10u));
    // 0x396538: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x396538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39653c: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x39653cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
    // 0x396540: 0x3c03c475  lui         $v1, 0xC475
    ctx->pc = 0x396540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50293 << 16));
    // 0x396544: 0x24422330  addiu       $v0, $v0, 0x2330
    ctx->pc = 0x396544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x396548: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x396548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39654c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x39654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x396550: 0x7e070090  sq          $a3, 0x90($s0)
    ctx->pc = 0x396550u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 7));
    // 0x396554: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x396554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x396558: 0x78275c10  lq          $a3, 0x5C10($at)
    ctx->pc = 0x396558u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C10u));
    // 0x39655c: 0x7e0700a0  sq          $a3, 0xA0($s0)
    ctx->pc = 0x39655cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 7));
    // 0x396560: 0xae050094  sw          $a1, 0x94($s0)
    ctx->pc = 0x396560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 5));
    // 0x396564: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x396564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x396568: 0xa2002b2d  sb          $zero, 0x2B2D($s0)
    ctx->pc = 0x396568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 0));
    // 0x39656c: 0xa2080821  sb          $t0, 0x821($s0)
    ctx->pc = 0x39656cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 8));
    // 0x396570: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x396570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x396574: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x396574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x396578: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x396578u;
    SET_GPR_U32(ctx, 31, 0x396580u);
    ctx->pc = 0x39657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396578u;
    // 0x39657c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x396578u, 0x396580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396580u;
label_396580:
    // 0x396580: 0xc096e44  jal         func_25B910
    ctx->pc = 0x396580u;
    SET_GPR_U32(ctx, 31, 0x396588u);
    ctx->pc = 0x396584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396580u;
    // 0x396584: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x396580u, 0x396588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396588u;
label_396588:
    // 0x396588: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x396588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39658c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39658cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x396590: 0x3c023991  lui         $v0, 0x3991
    ctx->pc = 0x396590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14737 << 16));
    // 0x396594: 0x3442a2ac  ori         $v0, $v0, 0xA2AC
    ctx->pc = 0x396594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41644);
    // 0x396598: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x396598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39659c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x39659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3965a0: 0x3c024564  lui         $v0, 0x4564
    ctx->pc = 0x3965a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17764 << 16));
    // 0x3965a4: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x3965a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3965a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3965a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3965ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3965acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3965b0: 0xc60400a4  lwc1        $f4, 0xA4($s0)
    ctx->pc = 0x3965b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3965b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3965b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3965b8: 0x0  nop
    ctx->pc = 0x3965b8u;
    // NOP
    // 0x3965bc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3965bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3965c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3965c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3965c4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3965c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3965c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3965c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3965cc: 0x0  nop
    ctx->pc = 0x3965ccu;
    // NOP
    // 0x3965d0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3965d0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3965d4: 0x0  nop
    ctx->pc = 0x3965d4u;
    // NOP
    // 0x3965d8: 0x0  nop
    ctx->pc = 0x3965d8u;
    // NOP
    // 0x3965dc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3965DCu;
    SET_GPR_U32(ctx, 31, 0x3965E4u);
    ctx->pc = 0x3965E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965DCu;
    // 0x3965e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3965DCu, 0x3965E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965E4u;
label_3965e4:
    // 0x3965e4: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x3965e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x3965e8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3965e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3965ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3965ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3965f0: 0x0  nop
    ctx->pc = 0x3965f0u;
    // NOP
    // 0x3965f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3965f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3965f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3965f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3965fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3965fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x396600: 0x0  nop
    ctx->pc = 0x396600u;
    // NOP
    // 0x396604: 0xa6022b30  sh          $v0, 0x2B30($s0)
    ctx->pc = 0x396604u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
label_396608:
    // 0x396608: 0x92022b2d  lbu         $v0, 0x2B2D($s0)
    ctx->pc = 0x396608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11053)));
    // 0x39660c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39660Cu;
    {
        const bool branch_taken_0x39660c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x396610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39660Cu;
        // 0x396610: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39660c) {
            ctx->pc = 0x396638u;
            goto label_396638;
        }
    }
    ctx->pc = 0x396614u;
    // 0x396614: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x396614u;
    SET_GPR_U32(ctx, 31, 0x39661Cu);
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x396614u, 0x39661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39661Cu;
label_39661c:
    // 0x39661c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39661Cu;
    {
        const bool branch_taken_0x39661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39661Cu;
        // 0x396620: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39661c) {
            ctx->pc = 0x396638u;
            goto label_396638;
        }
    }
    ctx->pc = 0x396624u;
    // 0x396624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39662c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x39662Cu;
    SET_GPR_U32(ctx, 31, 0x396634u);
    ctx->pc = 0x396630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39662Cu;
    // 0x396630: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x39662Cu, 0x396634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396634u;
label_396634:
    // 0x396634: 0x0  nop
    ctx->pc = 0x396634u;
    // NOP
label_396638:
    // 0x396638: 0x860800c0  lh          $t0, 0xC0($s0)
    ctx->pc = 0x396638u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39663c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x396640: 0x86072b30  lh          $a3, 0x2B30($s0)
    ctx->pc = 0x396640u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x396644: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x396644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x396648: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x396648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39664c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x396650: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x396650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x396654: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x396654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x396658: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x396658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x39665c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x39665cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x396660: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x396660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x396664: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x396664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x396668: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x396668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39666c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x39666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x396670: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x396670u;
    SET_GPR_U32(ctx, 31, 0x396678u);
    ctx->pc = 0x396674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396670u;
    // 0x396674: 0xa60200c0  sh          $v0, 0xC0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x396670u, 0x396678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396678u;
label_396678:
    // 0x396678: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x396678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39667c: 0x3c034564  lui         $v1, 0x4564
    ctx->pc = 0x39667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17764 << 16));
    // 0x396680: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x396680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x396684: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x396684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x396688: 0x0  nop
    ctx->pc = 0x396688u;
    // NOP
    // 0x39668c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39668cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x396690: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x396690u;
    {
        const bool branch_taken_0x396690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x396690) {
            ctx->pc = 0x396818u;
            goto label_396818;
        }
    }
    ctx->pc = 0x396698u;
    // 0x396698: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x396698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x39669c: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x39669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x3966a0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3966a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3966a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3966a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3966a8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x3966a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3966ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3966acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3966b0: 0x0  nop
    ctx->pc = 0x3966b0u;
    // NOP
    // 0x3966b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3966b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3966b8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3966b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3966bc: 0x92022b2d  lbu         $v0, 0x2B2D($s0)
    ctx->pc = 0x3966bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11053)));
    // 0x3966c0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3966C0u;
    {
        const bool branch_taken_0x3966c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3966c0) {
            ctx->pc = 0x3967D0u;
            goto label_3967d0;
        }
    }
    ctx->pc = 0x3966C8u;
    // 0x3966c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3966cc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3966ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3966d0: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3966d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3966d4: 0x24422330  addiu       $v0, $v0, 0x2330
    ctx->pc = 0x3966d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x3966d8: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3966d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3966dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3966dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3966e0: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3966e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3966e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3966e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3966e8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3966E8u;
    SET_GPR_U32(ctx, 31, 0x3966F0u);
    ctx->pc = 0x3966ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966E8u;
    // 0x3966ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3966E8u, 0x3966F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966F0u;
label_3966f0:
    // 0x3966f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3966f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3966f4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3966f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3966f8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3966F8u;
    SET_GPR_U32(ctx, 31, 0x396700u);
    ctx->pc = 0x3966FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966F8u;
    // 0x3966fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3966F8u, 0x396700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396700u;
label_396700:
    // 0x396700: 0x86062b30  lh          $a2, 0x2B30($s0)
    ctx->pc = 0x396700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x396704: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x396704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x396708: 0x3443463b  ori         $v1, $v0, 0x463B
    ctx->pc = 0x396708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17979);
    // 0x39670c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x396710: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x396710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x396714: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x396714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396718: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x396718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x39671c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39671cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x396720: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x396720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x396724: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x396724u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x396728: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x396728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39672c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x39672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x396730: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x396730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x396734: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x396734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x396738: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x396738u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x39673c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39673cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x396740: 0x0  nop
    ctx->pc = 0x396740u;
    // NOP
    // 0x396744: 0x0  nop
    ctx->pc = 0x396744u;
    // NOP
    // 0x396748: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x396748u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x39674c: 0x0  nop
    ctx->pc = 0x39674cu;
    // NOP
    // 0x396750: 0x0  nop
    ctx->pc = 0x396750u;
    // NOP
    // 0x396754: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x396754u;
    SET_GPR_U32(ctx, 31, 0x39675Cu);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x396754u, 0x39675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39675Cu;
label_39675c:
    // 0x39675c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x39675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x396760: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x396760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x396764: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x396764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x396768: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x396768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39676c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x39676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x396770: 0xc096e44  jal         func_25B910
    ctx->pc = 0x396770u;
    SET_GPR_U32(ctx, 31, 0x396778u);
    ctx->pc = 0x396774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396770u;
    // 0x396774: 0xa60000c0  sh          $zero, 0xC0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x396770u, 0x396778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396778u;
label_396778:
    // 0x396778: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x396778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x39677c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39677Cu;
    SET_GPR_U32(ctx, 31, 0x396784u);
    ctx->pc = 0x396780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39677Cu;
    // 0x396780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39677Cu, 0x396784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396784u;
label_396784:
    // 0x396784: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x396784u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x396788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39678c: 0xc0a9a14  jal         func_2A6850
    ctx->pc = 0x39678Cu;
    SET_GPR_U32(ctx, 31, 0x396794u);
    ctx->pc = 0x396790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39678Cu;
    // 0x396790: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6850u, 0x39678Cu, 0x396794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396794u;
label_396794:
    // 0x396794: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x396798: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39679c: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x39679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x3967a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3967a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3967a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3967a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967a8: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x3967a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
    // 0x3967ac: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3967acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3967b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3967b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3967b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3967b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3967bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3967C0u;
    SET_GPR_U32(ctx, 31, 0x3967C8u);
    ctx->pc = 0x3967C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3967C0u;
    // 0x3967c4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3967C0u, 0x3967C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3967C8u;
label_3967c8:
    // 0x3967c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3967C8u;
    {
        const bool branch_taken_0x3967c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3967c8) {
            ctx->pc = 0x396808u;
            goto label_396808;
        }
    }
    ctx->pc = 0x3967D0u;
label_3967d0:
    // 0x3967d0: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x3967d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3967d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3967d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3967d8: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3967d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x3967dc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3967dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3967e0: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x3967e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
    // 0x3967e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3967e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967e8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3967e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3967ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3967ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3967f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3967f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3967f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967fc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3967FCu;
    SET_GPR_U32(ctx, 31, 0x396804u);
    ctx->pc = 0x396800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3967FCu;
    // 0x396800: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3967FCu, 0x396804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396804u;
label_396804:
    // 0x396804: 0x0  nop
    ctx->pc = 0x396804u;
    // NOP
label_396808:
    // 0x396808: 0x92032b2d  lbu         $v1, 0x2B2D($s0)
    ctx->pc = 0x396808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11053)));
    // 0x39680c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x396810: 0xa2032b2d  sb          $v1, 0x2B2D($s0)
    ctx->pc = 0x396810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x396814: 0x0  nop
    ctx->pc = 0x396814u;
    // NOP
label_396818:
    // 0x396818: 0x92032b2d  lbu         $v1, 0x2B2D($s0)
    ctx->pc = 0x396818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11053)));
    // 0x39681c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x39681cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x396820: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396820u;
    {
        const bool branch_taken_0x396820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396820u;
        // 0x396824: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396820) {
            ctx->pc = 0x396830u;
            goto label_396830;
        }
    }
    ctx->pc = 0x396828u;
    // 0x396828: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x396828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x39682c: 0x0  nop
    ctx->pc = 0x39682cu;
    // NOP
label_396830:
    // 0x396830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396834: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x396834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396838: 0x3e00008  jr          $ra
    ctx->pc = 0x396838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396838u;
        // 0x39683c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396840u;
}
