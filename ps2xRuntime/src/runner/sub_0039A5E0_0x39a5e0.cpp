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

// Function: sub_0039A5E0
// Address: 0x39a5e0 - 0x39a728
void sub_0039A5E0_0x39a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A5E0_0x39a5e0");
#endif

    switch (ctx->pc) {
        case 0x39a620u: goto label_39a620;
        case 0x39a6e8u: goto label_39a6e8;
        case 0x39a714u: goto label_39a714;
        default: break;
    }

    ctx->pc = 0x39a5e0u;

    // 0x39a5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a5e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39a5f0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x39a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39a5f4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x39a5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x39a5f8: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x39a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x39a5fc: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x39a5fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39a600: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x39A600u;
    {
        const bool branch_taken_0x39a600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A600u;
        // 0x39a604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a600) {
            ctx->pc = 0x39A6E0u;
            goto label_39a6e0;
        }
    }
    ctx->pc = 0x39A608u;
    // 0x39a608: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A608u;
    {
        const bool branch_taken_0x39a608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a608) {
            ctx->pc = 0x39A618u;
            goto label_39a618;
        }
    }
    ctx->pc = 0x39A610u;
    // 0x39a610: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x39A610u;
    {
        const bool branch_taken_0x39a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a610) {
            ctx->pc = 0x39A718u;
            goto label_39a718;
        }
    }
    ctx->pc = 0x39A618u;
label_39a618:
    // 0x39a618: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39A618u;
    SET_GPR_U32(ctx, 31, 0x39A620u);
    ctx->pc = 0x39A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A618u;
    // 0x39a61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39A618u, 0x39A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A620u;
label_39a620:
    // 0x39a620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a624: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x39a624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39a628: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39a628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39a62c: 0x92042b24  lbu         $a0, 0x2B24($s0)
    ctx->pc = 0x39a62cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x39a630: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A630u;
    {
        const bool branch_taken_0x39a630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A630u;
        // 0x39a634: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a630) {
            ctx->pc = 0x39A64Cu;
            goto label_39a64c;
        }
    }
    ctx->pc = 0x39A638u;
    // 0x39a638: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39a63c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x39a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x39a640: 0x64180a  movz        $v1, $v1, $a0
    ctx->pc = 0x39a640u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 3));
    // 0x39a644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39A644u;
    {
        const bool branch_taken_0x39a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A644u;
        // 0x39a648: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a644) {
            ctx->pc = 0x39A658u;
            goto label_39a658;
        }
    }
    ctx->pc = 0x39A64Cu;
label_39a64c:
    // 0x39a64c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x39a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39a650: 0x64180a  movz        $v1, $v1, $a0
    ctx->pc = 0x39a650u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 3));
    // 0x39a654: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39a654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a658:
    // 0x39a658: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A658u;
    {
        const bool branch_taken_0x39a658 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x39A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A658u;
        // 0x39a65c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a658) {
            ctx->pc = 0x39A66Cu;
            goto label_39a66c;
        }
    }
    ctx->pc = 0x39A660u;
    // 0x39a660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39a660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a664: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39A664u;
    {
        const bool branch_taken_0x39a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A664u;
        // 0x39a668: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a664) {
            ctx->pc = 0x39A684u;
            goto label_39a684;
        }
    }
    ctx->pc = 0x39A66Cu;
label_39a66c:
    // 0x39a66c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39a670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39a674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a678: 0x0  nop
    ctx->pc = 0x39a678u;
    // NOP
    // 0x39a67c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x39a67cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39a680: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39a680u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_39a684:
    // 0x39a684: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39a688: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39a688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39a68c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39a690: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39a694: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39a694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39a698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39a698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a69c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39a69cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39a6a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39a6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39a6a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39a6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39a6a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39A6A8u;
    {
        const bool branch_taken_0x39a6a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a6a8) {
            ctx->pc = 0x39A6C0u;
            goto label_39a6c0;
        }
    }
    ctx->pc = 0x39A6B0u;
    // 0x39a6b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39a6b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39a6b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39a6b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39a6b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39A6B8u;
    {
        const bool branch_taken_0x39a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6B8u;
        // 0x39a6bc: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6b8) {
            ctx->pc = 0x39A6DCu;
            goto label_39a6dc;
        }
    }
    ctx->pc = 0x39A6C0u;
label_39a6c0:
    // 0x39a6c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39a6c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39a6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39a6c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39a6c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39a6cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39a6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39a6d0: 0x0  nop
    ctx->pc = 0x39a6d0u;
    // NOP
    // 0x39a6d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a6d8: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39a6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39a6dc:
    // 0x39a6dc: 0x0  nop
    ctx->pc = 0x39a6dcu;
    // NOP
label_39a6e0:
    // 0x39a6e0: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39A6E0u;
    SET_GPR_U32(ctx, 31, 0x39A6E8u);
    ctx->pc = 0x39A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A6E0u;
    // 0x39a6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39A6E0u, 0x39A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A6E8u;
label_39a6e8:
    // 0x39a6e8: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39a6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x39a6ec: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39a6ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
    // 0x39a6f0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x39a6f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39a6f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A6F4u;
    {
        const bool branch_taken_0x39a6f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6F4u;
        // 0x39a6f8: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6f4) {
            ctx->pc = 0x39A708u;
            goto label_39a708;
        }
    }
    ctx->pc = 0x39A6FCu;
    // 0x39a6fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39A6FCu;
    {
        const bool branch_taken_0x39a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6FCu;
        // 0x39a700: 0xa6032b4c  sh          $v1, 0x2B4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6fc) {
            ctx->pc = 0x39A718u;
            goto label_39a718;
        }
    }
    ctx->pc = 0x39A704u;
    // 0x39a704: 0x0  nop
    ctx->pc = 0x39a704u;
    // NOP
label_39a708:
    // 0x39a708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a70c: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39A70Cu;
    SET_GPR_U32(ctx, 31, 0x39A714u);
    ctx->pc = 0x39A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A70Cu;
    // 0x39a710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39A70Cu, 0x39A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A714u;
label_39a714:
    // 0x39a714: 0x0  nop
    ctx->pc = 0x39a714u;
    // NOP
label_39a718:
    // 0x39a718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39a71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a720: 0x3e00008  jr          $ra
    ctx->pc = 0x39A720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A720u;
        // 0x39a724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A728u;
}
