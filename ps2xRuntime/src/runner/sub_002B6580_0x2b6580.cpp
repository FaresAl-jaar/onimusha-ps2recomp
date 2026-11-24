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

// Function: sub_002B6580
// Address: 0x2b6580 - 0x2b6bb4
void sub_002B6580_0x2b6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6580_0x2b6580");
#endif

    switch (ctx->pc) {
        case 0x2b65a4u: goto label_2b65a4;
        case 0x2b66d8u: goto label_2b66d8;
        case 0x2b66e4u: goto label_2b66e4;
        case 0x2b67bcu: goto label_2b67bc;
        case 0x2b685cu: goto label_2b685c;
        case 0x2b6914u: goto label_2b6914;
        case 0x2b6944u: goto label_2b6944;
        case 0x2b69b0u: goto label_2b69b0;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69dcu: goto label_2b69dc;
        case 0x2b6a78u: goto label_2b6a78;
        case 0x2b6a94u: goto label_2b6a94;
        case 0x2b6b1cu: goto label_2b6b1c;
        case 0x2b6b94u: goto label_2b6b94;
        default: break;
    }

    ctx->pc = 0x2b6580u;

    // 0x2b6580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b658c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b658cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6594: 0x8e2507c8  lw          $a1, 0x7C8($s1)
    ctx->pc = 0x2b6594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2b6598: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b6598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b659c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2B659Cu;
    SET_GPR_U32(ctx, 31, 0x2B65A4u);
    ctx->pc = 0x2B65A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B659Cu;
    // 0x2b65a0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2B659Cu, 0x2B65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65A4u;
label_2b65a4:
    // 0x2b65a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b65a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65a8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B65A8u;
    {
        const bool branch_taken_0x2b65a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b65a8) {
            ctx->pc = 0x2B65E0u;
            goto label_2b65e0;
        }
    }
    ctx->pc = 0x2B65B0u;
    // 0x2b65b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b65b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b65b4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2b65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2b65b8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2b65b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b65bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B65BCu;
    {
        const bool branch_taken_0x2b65bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65BCu;
        // 0x2b65c0: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65bc) {
            ctx->pc = 0x2B65C8u;
            goto label_2b65c8;
        }
    }
    ctx->pc = 0x2B65C4u;
    // 0x2b65c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b65c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b65c8:
    // 0x2b65c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B65C8u;
    {
        const bool branch_taken_0x2b65c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b65c8) {
            ctx->pc = 0x2B65E0u;
            goto label_2b65e0;
        }
    }
    ctx->pc = 0x2B65D0u;
    // 0x2b65d0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x2b65d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b65d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B65D4u;
    {
        const bool branch_taken_0x2b65d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65D4u;
        // 0x2b65d8: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65d4) {
            ctx->pc = 0x2B65E8u;
            goto label_2b65e8;
        }
    }
    ctx->pc = 0x2B65DCu;
    // 0x2b65dc: 0x0  nop
    ctx->pc = 0x2b65dcu;
    // NOP
label_2b65e0:
    // 0x2b65e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b65e4: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x2b65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2b65e8:
    // 0x2b65e8: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x2b65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2b65ec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b65ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b65f0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2b65f4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b65f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b65f8: 0xae240148  sw          $a0, 0x148($s1)
    ctx->pc = 0x2b65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 4));
    // 0x2b65fc: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x2b65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2b6600: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b6600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b6604: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x2b6604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x2b6608: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x2b6608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x2b660c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x2b660cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b6610: 0x10200163  beqz        $at, . + 4 + (0x163 << 2)
    ctx->pc = 0x2B6610u;
    {
        const bool branch_taken_0x2b6610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6610u;
        // 0x2b6614: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6610) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6618u;
    // 0x2b6618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b661c: 0x24847450  addiu       $a0, $a0, 0x7450
    ctx->pc = 0x2b661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29776));
    // 0x2b6620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b6624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6628: 0x600008  jr          $v1
    ctx->pc = 0x2B6628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6630u: goto label_2b6630;
            case 0x2B68C8u: goto label_2b68c8;
            case 0x2B6938u: goto label_2b6938;
            case 0x2B6A88u: goto label_2b6a88;
            case 0x2B6AF8u: goto label_2b6af8;
            case 0x2B6B08u: goto label_2b6b08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B6630u;
label_2b6630:
    // 0x2b6630: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2b6634: 0x24634fc8  addiu       $v1, $v1, 0x4FC8
    ctx->pc = 0x2b6634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20424));
    // 0x2b6638: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b6638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b663c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2b663cu;
    { uint32_t bits = FAST_READ32(0x4E4FC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b6640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6644: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2b6644u;
    { uint32_t bits = FAST_READ32(0x4E4FCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b6648: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2b6648u;
    { uint32_t bits = FAST_READ32(0x4E4FD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b664c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b664cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6650: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6658: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b665c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b665cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b6660: 0xe62506a0  swc1        $f5, 0x6A0($s1)
    ctx->pc = 0x2b6660u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1696), bits); }
    // 0x2b6664: 0xe62406a4  swc1        $f4, 0x6A4($s1)
    ctx->pc = 0x2b6664u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1700), bits); }
    // 0x2b6668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b666c: 0xe62206a8  swc1        $f2, 0x6A8($s1)
    ctx->pc = 0x2b666cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1704), bits); }
    // 0x2b6670: 0x8e232ab0  lw          $v1, 0x2AB0($s1)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x2b6674: 0x8c620148  lw          $v0, 0x148($v1)
    ctx->pc = 0x2b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x2b6678: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b6678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b667c: 0xac620148  sw          $v0, 0x148($v1)
    ctx->pc = 0x2b667cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 2));
    // 0x2b6680: 0x8e222ab0  lw          $v0, 0x2AB0($s1)
    ctx->pc = 0x2b6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x2b6684: 0xa04404f4  sb          $a0, 0x4F4($v0)
    ctx->pc = 0x2b6684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1268), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6688: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b668c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b668cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6690: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6698: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6698u;
    {
        const bool branch_taken_0x2b6698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6698) {
            ctx->pc = 0x2B66B0u;
            goto label_2b66b0;
        }
    }
    ctx->pc = 0x2B66A0u;
    // 0x2b66a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b66a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b66a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b66a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b66a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B66A8u;
    {
        const bool branch_taken_0x2b66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66A8u;
        // 0x2b66ac: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66a8) {
            ctx->pc = 0x2B66CCu;
            goto label_2b66cc;
        }
    }
    ctx->pc = 0x2B66B0u;
label_2b66b0:
    // 0x2b66b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b66b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b66b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b66b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b66b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b66bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b66bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b66c0: 0x0  nop
    ctx->pc = 0x2b66c0u;
    // NOP
    // 0x2b66c4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2b66c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2b66c8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2b66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2b66cc:
    // 0x2b66cc: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b66d0: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B66D0u;
    SET_GPR_U32(ctx, 31, 0x2B66D8u);
    ctx->pc = 0x2B66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66D0u;
    // 0x2b66d4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B66D0u, 0x2B66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66D8u;
label_2b66d8:
    // 0x2b66d8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b66dc: 0xc096988  jal         func_25A620
    ctx->pc = 0x2B66DCu;
    SET_GPR_U32(ctx, 31, 0x2B66E4u);
    ctx->pc = 0x2B66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66DCu;
    // 0x2b66e0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2B66DCu, 0x2B66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66E4u;
label_2b66e4:
    // 0x2b66e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b66e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b66e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b66ec: 0x0  nop
    ctx->pc = 0x2b66ecu;
    // NOP
    // 0x2b66f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b66f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b66f4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2B66F4u;
    {
        const bool branch_taken_0x2b66f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66F4u;
        // 0x2b66f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66f4) {
            ctx->pc = 0x2B6728u;
            goto label_2b6728;
        }
    }
    ctx->pc = 0x2B66FCu;
    // 0x2b66fc: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x2b66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2b6700: 0xa6220828  sh          $v0, 0x828($s1)
    ctx->pc = 0x2b6700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6704: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2b6704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6708: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b670c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2b670cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6710: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b6710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b6714: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2b6714u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6718: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2b6718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b671c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B671Cu;
    {
        const bool branch_taken_0x2b671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B671Cu;
        // 0x2b6720: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b671c) {
            ctx->pc = 0x2B67A8u;
            goto label_2b67a8;
        }
    }
    ctx->pc = 0x2B6724u;
    // 0x2b6724: 0x0  nop
    ctx->pc = 0x2b6724u;
    // NOP
label_2b6728:
    // 0x2b6728: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b6728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b672c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6730: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b6730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6734: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6738: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b6738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b673c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b673cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6740: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6748: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b674c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b674cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6754: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6754u;
    {
        const bool branch_taken_0x2b6754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6754) {
            ctx->pc = 0x2B676Cu;
            goto label_2b676c;
        }
    }
    ctx->pc = 0x2B675Cu;
    // 0x2b675c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b675cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6760: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6764u;
    {
        const bool branch_taken_0x2b6764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6764u;
        // 0x2b6768: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6764) {
            ctx->pc = 0x2B6788u;
            goto label_2b6788;
        }
    }
    ctx->pc = 0x2B676Cu;
label_2b676c:
    // 0x2b676c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b676cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6770: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6774: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6778: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b677c: 0x0  nop
    ctx->pc = 0x2b677cu;
    // NOP
    // 0x2b6780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b6780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6784: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2b6784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2b6788:
    // 0x2b6788: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b678c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2b678cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6790: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2b6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2b6794: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2b6794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6798: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2b6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2b679c: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2b679cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b67a0: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2b67a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b67a4: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x2b67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_2b67a8:
    // 0x2b67a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b67ac: 0xa62207f0  sh          $v0, 0x7F0($s1)
    ctx->pc = 0x2b67acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b67b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b67b4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B67B4u;
    SET_GPR_U32(ctx, 31, 0x2B67BCu);
    ctx->pc = 0x2B67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67B4u;
    // 0x2b67b8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B67B4u, 0x2B67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67BCu;
label_2b67bc:
    // 0x2b67bc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2b67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2b67c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b67c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b67c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b67c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b67c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b67cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b67ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b67d0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2b67d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b67d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b67d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b67dc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b67dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b67e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b67e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b67e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b67e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b67e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b67ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b67ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b67f0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2b67f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b67f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b67f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b67f8: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x2b67f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2b67fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2b67fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2b6800: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2b6800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2b6804: 0xa62400c2  sh          $a0, 0xC2($s1)
    ctx->pc = 0x2b6804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b6808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b680c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6810: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6810u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6814: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b681c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B681Cu;
    {
        const bool branch_taken_0x2b681c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b681c) {
            ctx->pc = 0x2B6834u;
            goto label_2b6834;
        }
    }
    ctx->pc = 0x2B6824u;
    // 0x2b6824: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6828: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b682c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B682Cu;
    {
        const bool branch_taken_0x2b682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B682Cu;
        // 0x2b6830: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b682c) {
            ctx->pc = 0x2B6850u;
            goto label_2b6850;
        }
    }
    ctx->pc = 0x2B6834u;
label_2b6834:
    // 0x2b6834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6838: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b683c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b683cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6840: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6844: 0x0  nop
    ctx->pc = 0x2b6844u;
    // NOP
    // 0x2b6848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b6848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b684c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2b684cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2b6850:
    // 0x2b6850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6854: 0xc098a8c  jal         func_262A30
    ctx->pc = 0x2B6854u;
    SET_GPR_U32(ctx, 31, 0x2B685Cu);
    ctx->pc = 0x2B6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6854u;
    // 0x2b6858: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A30u, 0x2B6854u, 0x2B685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B685Cu;
label_2b685c:
    // 0x2b685c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b685cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6860: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b6864: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x2b6864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6868: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b6868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b686c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6870: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b6870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6874: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2b6874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b6878: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b6878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b687c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b687cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6884: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6884u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6888: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b688c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b688cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6890: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6890u;
    {
        const bool branch_taken_0x2b6890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6890) {
            ctx->pc = 0x2B68A8u;
            goto label_2b68a8;
        }
    }
    ctx->pc = 0x2B6898u;
    // 0x2b6898: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b689c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b689cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b68a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B68A0u;
    {
        const bool branch_taken_0x2b68a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68A0u;
        // 0x2b68a4: 0xa624082e  sh          $a0, 0x82E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68a0) {
            ctx->pc = 0x2B68C4u;
            goto label_2b68c4;
        }
    }
    ctx->pc = 0x2B68A8u;
label_2b68a8:
    // 0x2b68a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b68a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b68ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b68acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b68b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b68b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b68b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b68b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b68b8: 0x0  nop
    ctx->pc = 0x2b68b8u;
    // NOP
    // 0x2b68bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b68bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b68c0: 0xa624082e  sh          $a0, 0x82E($s1)
    ctx->pc = 0x2b68c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 4));
label_2b68c4:
    // 0x2b68c4: 0x0  nop
    ctx->pc = 0x2b68c4u;
    // NOP
label_2b68c8:
    // 0x2b68c8: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x2b68c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x2b68cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B68CCu;
    {
        const bool branch_taken_0x2b68cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b68cc) {
            ctx->pc = 0x2B6920u;
            goto label_2b6920;
        }
    }
    ctx->pc = 0x2B68D4u;
    // 0x2b68d4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2b68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b68d8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x2b68d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2b68dc: 0xa622082e  sh          $v0, 0x82E($s1)
    ctx->pc = 0x2b68dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b68e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b68e4: 0x8786822c  lh          $a2, -0x7DD4($gp)
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935084)));
    // 0x2b68e8: 0x3c028410  lui         $v0, 0x8410
    ctx->pc = 0x2b68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33808 << 16));
    // 0x2b68ec: 0x9384822e  lbu         $a0, -0x7DD2($gp)
    ctx->pc = 0x2b68ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935086)));
    // 0x2b68f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b68f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68f4: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x2b68f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b68f8: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x2b68f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b68fc: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x2b68fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2b6900: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x2b6900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2b6904: 0x9084004c  lbu         $a0, 0x4C($a0)
    ctx->pc = 0x2b6904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b6908: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2b6908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2b690c: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B690Cu;
    SET_GPR_U32(ctx, 31, 0x2B6914u);
    ctx->pc = 0x2B6910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B690Cu;
    // 0x2b6910: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B690Cu, 0x2B6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6914u;
label_2b6914:
    // 0x2b6914: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2B6914u;
    {
        const bool branch_taken_0x2b6914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6914) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B691Cu;
    // 0x2b691c: 0x0  nop
    ctx->pc = 0x2b691cu;
    // NOP
label_2b6920:
    // 0x2b6920: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b6924: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x2b6924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b692c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2B692Cu;
    {
        const bool branch_taken_0x2b692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B692Cu;
        // 0x2b6930: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b692c) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6934u;
    // 0x2b6934: 0x0  nop
    ctx->pc = 0x2b6934u;
    // NOP
label_2b6938:
    // 0x2b6938: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b6938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b693c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B693Cu;
    SET_GPR_U32(ctx, 31, 0x2B6944u);
    ctx->pc = 0x2B6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B693Cu;
    // 0x2b6940: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B693Cu, 0x2B6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6944u;
label_2b6944:
    // 0x2b6944: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2b6944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2b6948: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b694c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b694cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b6950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b6954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6958: 0x0  nop
    ctx->pc = 0x2b6958u;
    // NOP
    // 0x2b695c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b695cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b6960: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b6960u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b6964: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6968: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b6968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b696c: 0x0  nop
    ctx->pc = 0x2b696cu;
    // NOP
    // 0x2b6970: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b6970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b6974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b6974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b6978: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2b6978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2b697c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x2b697cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6980: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2b6984: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2b6984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2b6988: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2b6988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2b698c: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x2b698cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2b6990: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6990u;
    {
        const bool branch_taken_0x2b6990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6990u;
        // 0x2b6994: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6990) {
            ctx->pc = 0x2B69B8u;
            goto label_2b69b8;
        }
    }
    ctx->pc = 0x2B6998u;
    // 0x2b6998: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2b6998u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b699c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b69a0: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2b69a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b69a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b69a8: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B69A8u;
    SET_GPR_U32(ctx, 31, 0x2B69B0u);
    ctx->pc = 0x2B69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69A8u;
    // 0x2b69ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B69A8u, 0x2B69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69B0u;
label_2b69b0:
    // 0x2b69b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B69B0u;
    {
        const bool branch_taken_0x2b69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69b0) {
            ctx->pc = 0x2B69D0u;
            goto label_2b69d0;
        }
    }
    ctx->pc = 0x2B69B8u;
label_2b69b8:
    // 0x2b69b8: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x2b69b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2b69bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b69c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b69c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b69c4: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B69C4u;
    SET_GPR_U32(ctx, 31, 0x2B69CCu);
    ctx->pc = 0x2B69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69C4u;
    // 0x2b69c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B69C4u, 0x2B69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69CCu;
label_2b69cc:
    // 0x2b69cc: 0x0  nop
    ctx->pc = 0x2b69ccu;
    // NOP
label_2b69d0:
    // 0x2b69d0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b69d4: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B69D4u;
    SET_GPR_U32(ctx, 31, 0x2B69DCu);
    ctx->pc = 0x2B69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B69D4u;
    // 0x2b69d8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B69D4u, 0x2B69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69DCu;
label_2b69dc:
    // 0x2b69dc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b69e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b69e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b69e4: 0x0  nop
    ctx->pc = 0x2b69e4u;
    // NOP
    // 0x2b69e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b69e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b69ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B69ECu;
    {
        const bool branch_taken_0x2b69ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69ECu;
        // 0x2b69f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69ec) {
            ctx->pc = 0x2B6A00u;
            goto label_2b6a00;
        }
    }
    ctx->pc = 0x2B69F4u;
    // 0x2b69f4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2B69F4u;
    {
        const bool branch_taken_0x2b69f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69F4u;
        // 0x2b69f8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69f4) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B69FCu;
    // 0x2b69fc: 0x0  nop
    ctx->pc = 0x2b69fcu;
    // NOP
label_2b6a00:
    // 0x2b6a00: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2b6a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2b6a04: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2B6A04u;
    {
        const bool branch_taken_0x2b6a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6a04) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6A0Cu;
    // 0x2b6a0c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6a10: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b6a14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6a18: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6a1c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b6a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b6a20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6a24: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6a28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a30: 0x0  nop
    ctx->pc = 0x2b6a30u;
    // NOP
    // 0x2b6a34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6a38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6a3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6A3Cu;
    {
        const bool branch_taken_0x2b6a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6a3c) {
            ctx->pc = 0x2B6A54u;
            goto label_2b6a54;
        }
    }
    ctx->pc = 0x2B6A44u;
    // 0x2b6a44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6a44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6a48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6A4Cu;
    {
        const bool branch_taken_0x2b6a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A4Cu;
        // 0x2b6a50: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a4c) {
            ctx->pc = 0x2B6A70u;
            goto label_2b6a70;
        }
    }
    ctx->pc = 0x2B6A54u;
label_2b6a54:
    // 0x2b6a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6a58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6a5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6a60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6a60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6a64: 0x0  nop
    ctx->pc = 0x2b6a64u;
    // NOP
    // 0x2b6a68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6a6c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2b6a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b6a70:
    // 0x2b6a70: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x2B6A70u;
    SET_GPR_U32(ctx, 31, 0x2B6A78u);
    ctx->pc = 0x2B6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A70u;
    // 0x2b6a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x2B6A70u, 0x2B6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A78u;
label_2b6a78:
    // 0x2b6a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6a7c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2B6A7Cu;
    {
        const bool branch_taken_0x2b6a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A7Cu;
        // 0x2b6a80: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a7c) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6A84u;
    // 0x2b6a84: 0x0  nop
    ctx->pc = 0x2b6a84u;
    // NOP
label_2b6a88:
    // 0x2b6a88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6a8c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6A94u);
    ctx->pc = 0x2B6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A8Cu;
    // 0x2b6a90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B6A8Cu, 0x2B6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A94u;
label_2b6a94:
    // 0x2b6a94: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2b6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2b6a98: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b6a9c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b6a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6aa0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b6aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b6aa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6aa8: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x2b6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2b6aac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b6aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b6ab0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6ab4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2b6ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2b6ab8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b6abc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b6abcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b6ac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6ac4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b6ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b6ac8: 0x0  nop
    ctx->pc = 0x2b6ac8u;
    // NOP
    // 0x2b6acc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2b6accu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2b6ad0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2b6ad0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2b6ad4: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x2b6ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x2b6ad8: 0xa62600c2  sh          $a2, 0xC2($s1)
    ctx->pc = 0x2b6ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b6adc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2b6adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6ae0: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2b6ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6ae4: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2b6ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6ae8: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2b6ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6aec: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2b6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2b6af0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B6AF0u;
    {
        const bool branch_taken_0x2b6af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AF0u;
        // 0x2b6af4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6af0) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6AF8u;
label_2b6af8:
    // 0x2b6af8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b6afc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B6AFCu;
    {
        const bool branch_taken_0x2b6afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AFCu;
        // 0x2b6b00: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6afc) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6B04u;
    // 0x2b6b04: 0x0  nop
    ctx->pc = 0x2b6b04u;
    // NOP
label_2b6b08:
    // 0x2b6b08: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2b6b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b14: 0xc0a259c  jal         func_289670
    ctx->pc = 0x2B6B14u;
    SET_GPR_U32(ctx, 31, 0x2B6B1Cu);
    ctx->pc = 0x2B6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B14u;
    // 0x2b6b18: 0xae2207c0  sw          $v0, 0x7C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289670u, 0x2B6B14u, 0x2B6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B1Cu;
label_2b6b1c:
    // 0x2b6b1c: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2b6b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2b6b20: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B6B20u;
    {
        const bool branch_taken_0x2b6b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b20) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6B28u;
    // 0x2b6b28: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6b2c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b6b30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6b34: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b6b38: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b6b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b6b3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b6b40: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b6b40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6b44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6b4c: 0x0  nop
    ctx->pc = 0x2b6b4cu;
    // NOP
    // 0x2b6b50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b6b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b6b54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b6b54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6b58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6B58u;
    {
        const bool branch_taken_0x2b6b58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6b58) {
            ctx->pc = 0x2B6B70u;
            goto label_2b6b70;
        }
    }
    ctx->pc = 0x2B6B60u;
    // 0x2b6b60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6b64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6B68u;
    {
        const bool branch_taken_0x2b6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B68u;
        // 0x2b6b6c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b68) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6B70u;
label_2b6b70:
    // 0x2b6b70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6b70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b6b74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6b78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6b7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6b80: 0x0  nop
    ctx->pc = 0x2b6b80u;
    // NOP
    // 0x2b6b84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b6b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6b88: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2b6b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b6b8c:
    // 0x2b6b8c: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x2B6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B94u);
    ctx->pc = 0x2B6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B8Cu;
    // 0x2b6b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x2B6B8Cu, 0x2B6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B94u;
label_2b6b94:
    // 0x2b6b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6b98: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2b6b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6b9c: 0x0  nop
    ctx->pc = 0x2b6b9cu;
    // NOP
label_2b6ba0:
    // 0x2b6ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BACu;
        // 0x2b6bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BB4u;
}
