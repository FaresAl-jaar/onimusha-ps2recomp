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

// Function: sub_0037C6A0
// Address: 0x37c6a0 - 0x37c910
void sub_0037C6A0_0x37c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C6A0_0x37c6a0");
#endif

    switch (ctx->pc) {
        case 0x37c718u: goto label_37c718;
        case 0x37c720u: goto label_37c720;
        case 0x37c748u: goto label_37c748;
        case 0x37c760u: goto label_37c760;
        case 0x37c808u: goto label_37c808;
        case 0x37c83cu: goto label_37c83c;
        case 0x37c850u: goto label_37c850;
        case 0x37c85cu: goto label_37c85c;
        case 0x37c8b4u: goto label_37c8b4;
        case 0x37c8e8u: goto label_37c8e8;
        case 0x37c8f0u: goto label_37c8f0;
        case 0x37c8f8u: goto label_37c8f8;
        default: break;
    }

    ctx->pc = 0x37c6a0u;

    // 0x37c6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c6a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c6a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37c6ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c6b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37c6b4: 0xa0852bbd  sb          $a1, 0x2BBD($a0)
    ctx->pc = 0x37c6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11197), (uint8_t)GPR_U32(ctx, 5));
    // 0x37c6b8: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x37c6b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37c6bc: 0x10a30078  beq         $a1, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x37C6BCu;
    {
        const bool branch_taken_0x37c6bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6BCu;
        // 0x37c6c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6bc) {
            ctx->pc = 0x37C8A0u;
            goto label_37c8a0;
        }
    }
    ctx->pc = 0x37C6C4u;
    // 0x37c6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c6c8: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x37C6C8u;
    {
        const bool branch_taken_0x37c6c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c6c8) {
            ctx->pc = 0x37C708u;
            goto label_37c708;
        }
    }
    ctx->pc = 0x37C6D0u;
    // 0x37c6d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C6D0u;
    {
        const bool branch_taken_0x37c6d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c6d0) {
            ctx->pc = 0x37C6E0u;
            goto label_37c6e0;
        }
    }
    ctx->pc = 0x37C6D8u;
    // 0x37c6d8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x37C6D8u;
    {
        const bool branch_taken_0x37c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c6d8) {
            ctx->pc = 0x37C900u;
            goto label_37c900;
        }
    }
    ctx->pc = 0x37C6E0u;
label_37c6e0:
    // 0x37c6e0: 0x92022bb4  lbu         $v0, 0x2BB4($s0)
    ctx->pc = 0x37c6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11188)));
    // 0x37c6e4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37c6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37c6e8: 0xa2022bb4  sb          $v0, 0x2BB4($s0)
    ctx->pc = 0x37c6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11188), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c6ec: 0xa2032b92  sb          $v1, 0x2B92($s0)
    ctx->pc = 0x37c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11154), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c6f0: 0xa6002b94  sh          $zero, 0x2B94($s0)
    ctx->pc = 0x37c6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11156), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c6f4: 0xa600082e  sh          $zero, 0x82E($s0)
    ctx->pc = 0x37c6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x37c6f8: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x37c6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37c6fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c700: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37c700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c704: 0x0  nop
    ctx->pc = 0x37c704u;
    // NOP
label_37c708:
    // 0x37c708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c70c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37c70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c710: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37C710u;
    SET_GPR_U32(ctx, 31, 0x37C718u);
    ctx->pc = 0x37C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C710u;
    // 0x37c714: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37C710u, 0x37C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C718u;
label_37c718:
    // 0x37c718: 0xc0e0240  jal         func_380900
    ctx->pc = 0x37C718u;
    SET_GPR_U32(ctx, 31, 0x37C720u);
    ctx->pc = 0x37C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C718u;
    // 0x37c71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380900u, 0x37C718u, 0x37C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C720u;
label_37c720:
    // 0x37c720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C720u;
    {
        const bool branch_taken_0x37c720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c720) {
            ctx->pc = 0x37C738u;
            goto label_37c738;
        }
    }
    ctx->pc = 0x37C728u;
    // 0x37c728: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37c728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37c72c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37c72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x37c730: 0xa2022b78  sb          $v0, 0x2B78($s0)
    ctx->pc = 0x37c730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c734: 0x0  nop
    ctx->pc = 0x37c734u;
    // NOP
label_37c738:
    // 0x37c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c740: 0xc0e01cc  jal         func_380730
    ctx->pc = 0x37C740u;
    SET_GPR_U32(ctx, 31, 0x37C748u);
    ctx->pc = 0x37C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C740u;
    // 0x37c744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380730u, 0x37C740u, 0x37C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C748u;
label_37c748:
    // 0x37c748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37C748u;
    {
        const bool branch_taken_0x37c748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c748) {
            ctx->pc = 0x37C770u;
            goto label_37c770;
        }
    }
    ctx->pc = 0x37C750u;
    // 0x37c750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c758: 0xc0e0250  jal         func_380940
    ctx->pc = 0x37C758u;
    SET_GPR_U32(ctx, 31, 0x37C760u);
    ctx->pc = 0x37C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C758u;
    // 0x37c75c: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x37C758u, 0x37C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C760u;
label_37c760:
    // 0x37c760: 0x92032bb4  lbu         $v1, 0x2BB4($s0)
    ctx->pc = 0x37c760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11188)));
    // 0x37c764: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x37c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x37c768: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x37C768u;
    {
        const bool branch_taken_0x37c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C768u;
        // 0x37c76c: 0xa2032bb4  sb          $v1, 0x2BB4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11188), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c768) {
            ctx->pc = 0x37C900u;
            goto label_37c900;
        }
    }
    ctx->pc = 0x37C770u;
label_37c770:
    // 0x37c770: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x37c770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x37c774: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37c778: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37c778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37c77c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37c77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37c780: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37c780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37c784: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37c784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c788: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37c788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37c78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c790: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37c790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37c794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37c794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37c798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37c798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c79c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37C79Cu;
    {
        const bool branch_taken_0x37c79c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c79c) {
            ctx->pc = 0x37C7B4u;
            goto label_37c7b4;
        }
    }
    ctx->pc = 0x37C7A4u;
    // 0x37c7a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37c7a8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37c7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37c7ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37C7ACu;
    {
        const bool branch_taken_0x37c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7ACu;
        // 0x37c7b0: 0x9604082e  lhu         $a0, 0x82E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2094)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7ac) {
            ctx->pc = 0x37C7D0u;
            goto label_37c7d0;
        }
    }
    ctx->pc = 0x37C7B4u;
label_37c7b4:
    // 0x37c7b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37c7b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37c7b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37c7bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c7bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37c7c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37c7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37c7c4: 0x0  nop
    ctx->pc = 0x37c7c4u;
    // NOP
    // 0x37c7c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37c7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37c7cc: 0x9604082e  lhu         $a0, 0x82E($s0)
    ctx->pc = 0x37c7ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2094)));
label_37c7d0:
    // 0x37c7d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37c7d4: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x37c7d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37c7d8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x37C7D8u;
    {
        const bool branch_taken_0x37c7d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7D8u;
        // 0x37c7dc: 0xa603082e  sh          $v1, 0x82E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7d8) {
            ctx->pc = 0x37C900u;
            goto label_37c900;
        }
    }
    ctx->pc = 0x37C7E0u;
    // 0x37c7e0: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37c7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37c7e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37c7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37c7e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37C7E8u;
    {
        const bool branch_taken_0x37c7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7E8u;
        // 0x37c7ec: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7e8) {
            ctx->pc = 0x37C848u;
            goto label_37c848;
        }
    }
    ctx->pc = 0x37C7F0u;
    // 0x37c7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c7f4: 0xa2020780  sb          $v0, 0x780($s0)
    ctx->pc = 0x37c7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x37c7f8: 0x92022bb4  lbu         $v0, 0x2BB4($s0)
    ctx->pc = 0x37c7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11188)));
    // 0x37c7fc: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x37c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x37c800: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x37C800u;
    SET_GPR_U32(ctx, 31, 0x37C808u);
    ctx->pc = 0x37C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C800u;
    // 0x37c804: 0xa2022bb4  sb          $v0, 0x2BB4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11188), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x37C800u, 0x37C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C808u;
label_37c808:
    // 0x37c808: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37c808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37c80c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37c810: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37c814: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37c814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37c818: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37c818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37c81c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37c81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37c820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37c820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37c824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c828: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37c828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c82c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37c830: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37c830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c834: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37C834u;
    SET_GPR_U32(ctx, 31, 0x37C83Cu);
    ctx->pc = 0x37C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C834u;
    // 0x37c838: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37C834u, 0x37C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C83Cu;
label_37c83c:
    // 0x37c83c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x37C83Cu;
    {
        const bool branch_taken_0x37c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c83c) {
            ctx->pc = 0x37C898u;
            goto label_37c898;
        }
    }
    ctx->pc = 0x37C844u;
    // 0x37c844: 0x0  nop
    ctx->pc = 0x37c844u;
    // NOP
label_37c848:
    // 0x37c848: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x37C848u;
    SET_GPR_U32(ctx, 31, 0x37C850u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x37C848u, 0x37C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C850u;
label_37c850:
    // 0x37c850: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37c854: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x37C854u;
    SET_GPR_U32(ctx, 31, 0x37C85Cu);
    ctx->pc = 0x37C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C854u;
    // 0x37c858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x37C854u, 0x37C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C85Cu;
label_37c85c:
    // 0x37c85c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x37c85cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x37c860: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x37C860u;
    {
        const bool branch_taken_0x37c860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C860u;
        // 0x37c864: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c860) {
            ctx->pc = 0x37C898u;
            goto label_37c898;
        }
    }
    ctx->pc = 0x37C868u;
    // 0x37c868: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37c868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c86c: 0x24841d60  addiu       $a0, $a0, 0x1D60
    ctx->pc = 0x37c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7520));
    // 0x37c870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37c874: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37c878: 0x600008  jr          $v1
    ctx->pc = 0x37C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C880u: goto label_37c880;
            case 0x37C890u: goto label_37c890;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37C880u;
label_37c880:
    // 0x37c880: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x37c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x37c884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37C884u;
    {
        const bool branch_taken_0x37c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C884u;
        // 0x37c888: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c884) {
            ctx->pc = 0x37C898u;
            goto label_37c898;
        }
    }
    ctx->pc = 0x37C88Cu;
    // 0x37c88c: 0x0  nop
    ctx->pc = 0x37c88cu;
    // NOP
label_37c890:
    // 0x37c890: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x37c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x37c894: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37c894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37c898:
    // 0x37c898: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37C898u;
    {
        const bool branch_taken_0x37c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C898u;
        // 0x37c89c: 0xa600082e  sh          $zero, 0x82E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c898) {
            ctx->pc = 0x37C900u;
            goto label_37c900;
        }
    }
    ctx->pc = 0x37C8A0u;
label_37c8a0:
    // 0x37c8a0: 0x96032b9c  lhu         $v1, 0x2B9C($s0)
    ctx->pc = 0x37c8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11164)));
    // 0x37c8a4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37C8A4u;
    {
        const bool branch_taken_0x37c8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c8a4) {
            ctx->pc = 0x37C900u;
            goto label_37c900;
        }
    }
    ctx->pc = 0x37C8ACu;
    // 0x37c8ac: 0xc0e02a0  jal         func_380A80
    ctx->pc = 0x37C8ACu;
    SET_GPR_U32(ctx, 31, 0x37C8B4u);
    ctx->pc = 0x380A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A80u, 0x37C8ACu, 0x37C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8B4u;
label_37c8b4:
    // 0x37c8b4: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37c8b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37c8b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37c8bc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37c8c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37c8c4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37c8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37c8c8: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37c8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37c8cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37c8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37c8d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37c8d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37c8dc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c8e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37C8E0u;
    SET_GPR_U32(ctx, 31, 0x37C8E8u);
    ctx->pc = 0x37C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8E0u;
    // 0x37c8e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37C8E0u, 0x37C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8E8u;
label_37c8e8:
    // 0x37c8e8: 0xc0e0240  jal         func_380900
    ctx->pc = 0x37C8E8u;
    SET_GPR_U32(ctx, 31, 0x37C8F0u);
    ctx->pc = 0x37C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8E8u;
    // 0x37c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380900u, 0x37C8E8u, 0x37C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8F0u;
label_37c8f0:
    // 0x37c8f0: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x37C8F0u;
    SET_GPR_U32(ctx, 31, 0x37C8F8u);
    ctx->pc = 0x37C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8F0u;
    // 0x37c8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x37C8F0u, 0x37C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8F8u;
label_37c8f8:
    // 0x37c8f8: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x37c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x37c8fc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37c8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37c900:
    // 0x37c900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37c904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c908: 0x3e00008  jr          $ra
    ctx->pc = 0x37C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C908u;
        // 0x37c90c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C910u;
}
