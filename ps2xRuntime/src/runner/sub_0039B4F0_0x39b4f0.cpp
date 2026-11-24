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

// Function: sub_0039B4F0
// Address: 0x39b4f0 - 0x39b6bc
void sub_0039B4F0_0x39b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B4F0_0x39b4f0");
#endif

    switch (ctx->pc) {
        case 0x39b538u: goto label_39b538;
        case 0x39b5d8u: goto label_39b5d8;
        case 0x39b5ecu: goto label_39b5ec;
        case 0x39b610u: goto label_39b610;
        case 0x39b638u: goto label_39b638;
        case 0x39b658u: goto label_39b658;
        case 0x39b670u: goto label_39b670;
        case 0x39b67cu: goto label_39b67c;
        case 0x39b6a4u: goto label_39b6a4;
        default: break;
    }

    ctx->pc = 0x39b4f0u;

    // 0x39b4f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39b4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39b4fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39b500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39b504: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39b504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39b508: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x39b508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x39b50c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39b510: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x39b510u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39b514: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x39B514u;
    {
        const bool branch_taken_0x39b514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B514u;
        // 0x39b518: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b514) {
            ctx->pc = 0x39B5C8u;
            goto label_39b5c8;
        }
    }
    ctx->pc = 0x39B51Cu;
    // 0x39b51c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B51Cu;
    {
        const bool branch_taken_0x39b51c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b51c) {
            ctx->pc = 0x39B530u;
            goto label_39b530;
        }
    }
    ctx->pc = 0x39B524u;
    // 0x39b524: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x39B524u;
    {
        const bool branch_taken_0x39b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b524) {
            ctx->pc = 0x39B6A8u;
            goto label_39b6a8;
        }
    }
    ctx->pc = 0x39B52Cu;
    // 0x39b52c: 0x0  nop
    ctx->pc = 0x39b52cu;
    // NOP
label_39b530:
    // 0x39b530: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39B530u;
    SET_GPR_U32(ctx, 31, 0x39B538u);
    ctx->pc = 0x39B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B530u;
    // 0x39b534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39B530u, 0x39B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B538u;
label_39b538:
    // 0x39b538: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x39b538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x39b53c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x39b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x39b540: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x39b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x39b544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39b544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b548: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x39b548u;
    { uint32_t bits = FAST_READ32(0x65C990u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x39b54c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x39b54cu;
    { uint32_t bits = FAST_READ32(0x65C994u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x39b550: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x39b550u;
    { uint32_t bits = FAST_READ32(0x65C998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39b554: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39b554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39b558: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39b55c: 0xe62506a0  swc1        $f5, 0x6A0($s1)
    ctx->pc = 0x39b55cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1696), bits); }
    // 0x39b560: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39b560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39b564: 0xe62406a4  swc1        $f4, 0x6A4($s1)
    ctx->pc = 0x39b564u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1700), bits); }
    // 0x39b568: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39b56c: 0xe62206a8  swc1        $f2, 0x6A8($s1)
    ctx->pc = 0x39b56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1704), bits); }
    // 0x39b570: 0xa2242b4a  sb          $a0, 0x2B4A($s1)
    ctx->pc = 0x39b570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11082), (uint8_t)GPR_U32(ctx, 4));
    // 0x39b574: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39b574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39b578: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x39b578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x39b57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39b580: 0xa6202b4c  sh          $zero, 0x2B4C($s1)
    ctx->pc = 0x39b580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39b584: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39b588: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39b588u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39b58c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39b590: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39b590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39b594: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39B594u;
    {
        const bool branch_taken_0x39b594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39b594) {
            ctx->pc = 0x39B5ACu;
            goto label_39b5ac;
        }
    }
    ctx->pc = 0x39B59Cu;
    // 0x39b59c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b59cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39b5a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b5a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39b5a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39B5A4u;
    {
        const bool branch_taken_0x39b5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5A4u;
        // 0x39b5a8: 0xa6232b4e  sh          $v1, 0x2B4E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5a4) {
            ctx->pc = 0x39B5C8u;
            goto label_39b5c8;
        }
    }
    ctx->pc = 0x39B5ACu;
label_39b5ac:
    // 0x39b5ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39b5acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39b5b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39b5b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b5b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39b5b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39b5bc: 0x0  nop
    ctx->pc = 0x39b5bcu;
    // NOP
    // 0x39b5c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39b5c4: 0xa6232b4e  sh          $v1, 0x2B4E($s1)
    ctx->pc = 0x39b5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39b5c8:
    // 0x39b5c8: 0x8e252b44  lw          $a1, 0x2B44($s1)
    ctx->pc = 0x39b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11076)));
    // 0x39b5cc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39b5d0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39B5D0u;
    SET_GPR_U32(ctx, 31, 0x39B5D8u);
    ctx->pc = 0x39B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5D0u;
    // 0x39b5d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39B5D0u, 0x39B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5D8u;
label_39b5d8:
    // 0x39b5d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39b5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b5dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B5DCu;
    {
        const bool branch_taken_0x39b5dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5DCu;
        // 0x39b5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b5dc) {
            ctx->pc = 0x39B5F8u;
            goto label_39b5f8;
        }
    }
    ctx->pc = 0x39B5E4u;
    // 0x39b5e4: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B5E4u;
    SET_GPR_U32(ctx, 31, 0x39B5ECu);
    ctx->pc = 0x39B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B5E4u;
    // 0x39b5e8: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B5E4u, 0x39B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B5ECu;
label_39b5ec:
    // 0x39b5ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x39B5ECu;
    {
        const bool branch_taken_0x39b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b5ec) {
            ctx->pc = 0x39B6A8u;
            goto label_39b6a8;
        }
    }
    ctx->pc = 0x39B5F4u;
    // 0x39b5f4: 0x0  nop
    ctx->pc = 0x39b5f4u;
    // NOP
label_39b5f8:
    // 0x39b5f8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x39b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39b5fc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39b5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39b600: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39B600u;
    {
        const bool branch_taken_0x39b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B600u;
        // 0x39b604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b600) {
            ctx->pc = 0x39B618u;
            goto label_39b618;
        }
    }
    ctx->pc = 0x39B608u;
    // 0x39b608: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B608u;
    SET_GPR_U32(ctx, 31, 0x39B610u);
    ctx->pc = 0x39B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B608u;
    // 0x39b60c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B608u, 0x39B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B610u;
label_39b610:
    // 0x39b610: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x39B610u;
    {
        const bool branch_taken_0x39b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b610) {
            ctx->pc = 0x39B6A8u;
            goto label_39b6a8;
        }
    }
    ctx->pc = 0x39B618u;
label_39b618:
    // 0x39b618: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39b61c: 0x92232b48  lbu         $v1, 0x2B48($s1)
    ctx->pc = 0x39b61cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11080)));
    // 0x39b620: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x39b620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x39b624: 0x26262b30  addiu       $a2, $s1, 0x2B30
    ctx->pc = 0x39b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11056));
    // 0x39b628: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39b62c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x39b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x39b630: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x39B630u;
    SET_GPR_U32(ctx, 31, 0x39B638u);
    ctx->pc = 0x39B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B630u;
    // 0x39b634: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x39B630u, 0x39B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B638u;
label_39b638:
    // 0x39b638: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39b63c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39b640: 0x92232b48  lbu         $v1, 0x2B48($s1)
    ctx->pc = 0x39b640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11080)));
    // 0x39b644: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x39b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x39b648: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39b64c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x39b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x39b650: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x39B650u;
    SET_GPR_U32(ctx, 31, 0x39B658u);
    ctx->pc = 0x39B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B650u;
    // 0x39b654: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x39B650u, 0x39B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B658u;
label_39b658:
    // 0x39b658: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x39b658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x39b65c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39b660: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x39b660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x39b664: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39b664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39b668: 0xc097384  jal         func_25CE10
    ctx->pc = 0x39B668u;
    SET_GPR_U32(ctx, 31, 0x39B670u);
    ctx->pc = 0x39B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B668u;
    // 0x39b66c: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x39B668u, 0x39B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B670u;
label_39b670:
    // 0x39b670: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x39b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x39b674: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x39B674u;
    SET_GPR_U32(ctx, 31, 0x39B67Cu);
    ctx->pc = 0x39B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B674u;
    // 0x39b678: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x39B674u, 0x39B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B67Cu;
label_39b67c:
    // 0x39b67c: 0x86232b4c  lh          $v1, 0x2B4C($s1)
    ctx->pc = 0x39b67cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11084)));
    // 0x39b680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39b684: 0xa6232b4c  sh          $v1, 0x2B4C($s1)
    ctx->pc = 0x39b684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11084), (uint16_t)GPR_U32(ctx, 3));
    // 0x39b688: 0x86242b4c  lh          $a0, 0x2B4C($s1)
    ctx->pc = 0x39b688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11084)));
    // 0x39b68c: 0x86232b4e  lh          $v1, 0x2B4E($s1)
    ctx->pc = 0x39b68cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11086)));
    // 0x39b690: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39b690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39b694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B694u;
    {
        const bool branch_taken_0x39b694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B694u;
        // 0x39b698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b694) {
            ctx->pc = 0x39B6A8u;
            goto label_39b6a8;
        }
    }
    ctx->pc = 0x39B69Cu;
    // 0x39b69c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39B69Cu;
    SET_GPR_U32(ctx, 31, 0x39B6A4u);
    ctx->pc = 0x39B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B69Cu;
    // 0x39b6a0: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39B69Cu, 0x39B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B6A4u;
label_39b6a4:
    // 0x39b6a4: 0x0  nop
    ctx->pc = 0x39b6a4u;
    // NOP
label_39b6a8:
    // 0x39b6a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b6ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x39B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6B4u;
        // 0x39b6b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B6BCu;
}
