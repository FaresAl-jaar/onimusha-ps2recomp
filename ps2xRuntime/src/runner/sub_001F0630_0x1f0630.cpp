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

// Function: sub_001F0630
// Address: 0x1f0630 - 0x1f0b70
void sub_001F0630_0x1f0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0630_0x1f0630");
#endif

    switch (ctx->pc) {
        case 0x1f0674u: goto label_1f0674;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b24u: goto label_1f0b24;
        default: break;
    }

    ctx->pc = 0x1f0630u;

    // 0x1f0630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f0638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f063c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f063cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0644: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x1f0644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f0648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f064c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f064cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f0650: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f0650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0654: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f0658: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0658u;
    {
        const bool branch_taken_0x1f0658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0658u;
        // 0x1f065c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0658) {
            ctx->pc = 0x1F0680u;
            goto label_1f0680;
        }
    }
    ctx->pc = 0x1F0660u;
    // 0x1f0660: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f0660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f0664: 0x2482ff80  addiu       $v0, $a0, -0x80
    ctx->pc = 0x1f0664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x1f0668: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f0668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f066c: 0xc0c70ec  jal         func_31C3B0
    ctx->pc = 0x1F066Cu;
    SET_GPR_U32(ctx, 31, 0x1F0674u);
    ctx->pc = 0x1F0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F066Cu;
    // 0x1f0670: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C3B0u, 0x1F066Cu, 0x1F0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0674u;
label_1f0674:
    // 0x1f0674: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1F0674u;
    {
        const bool branch_taken_0x1f0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0674) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F067Cu;
    // 0x1f067c: 0x0  nop
    ctx->pc = 0x1f067cu;
    // NOP
label_1f0680:
    // 0x1f0680: 0x2c81001f  sltiu       $at, $a0, 0x1F
    ctx->pc = 0x1f0680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f0684: 0x10200134  beqz        $at, . + 4 + (0x134 << 2)
    ctx->pc = 0x1F0684u;
    {
        const bool branch_taken_0x1f0684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0684u;
        // 0x1f0688: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0684) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F068Cu;
    // 0x1f068c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1f068cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1f0690: 0x24845fb0  addiu       $a0, $a0, 0x5FB0
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24496));
    // 0x1f0694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0698: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f069c: 0x600008  jr          $v1
    ctx->pc = 0x1F069Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F0758u: goto label_1f0758;
            case 0x1F07D8u: goto label_1f07d8;
            case 0x1F0858u: goto label_1f0858;
            case 0x1F08D8u: goto label_1f08d8;
            case 0x1F0958u: goto label_1f0958;
            case 0x1F0980u: goto label_1f0980;
            case 0x1F09A8u: goto label_1f09a8;
            case 0x1F09D0u: goto label_1f09d0;
            case 0x1F09E8u: goto label_1f09e8;
            case 0x1F0A00u: goto label_1f0a00;
            case 0x1F0A10u: goto label_1f0a10;
            case 0x1F0A20u: goto label_1f0a20;
            case 0x1F0A38u: goto label_1f0a38;
            case 0x1F0A50u: goto label_1f0a50;
            case 0x1F0A70u: goto label_1f0a70;
            case 0x1F0A90u: goto label_1f0a90;
            case 0x1F0AB0u: goto label_1f0ab0;
            case 0x1F0AD0u: goto label_1f0ad0;
            case 0x1F0AF0u: goto label_1f0af0;
            case 0x1F0B38u: goto label_1f0b38;
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B58u: goto label_1f0b58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F069Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F06A4u;
    // 0x1f06a4: 0x0  nop
    ctx->pc = 0x1f06a4u;
    // NOP
label_1f06a8:
    // 0x1f06a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f06ac: 0x1080012a  beqz        $a0, . + 4 + (0x12A << 2)
    ctx->pc = 0x1F06ACu;
    {
        const bool branch_taken_0x1f06ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06ACu;
        // 0x1f06b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06ac) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F06B4u;
    // 0x1f06b4: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F06B4u;
    SET_GPR_U32(ctx, 31, 0x1F06BCu);
    ctx->pc = 0x1F06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06B4u;
    // 0x1f06b8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F06B4u, 0x1F06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06BCu;
label_1f06bc:
    // 0x1f06bc: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f06c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f06c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06c4: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F06C4u;
    SET_GPR_U32(ctx, 31, 0x1F06CCu);
    ctx->pc = 0x1F06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06C4u;
    // 0x1f06c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F06C4u, 0x1F06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06CCu;
label_1f06cc:
    // 0x1f06cc: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x1F06CCu;
    {
        const bool branch_taken_0x1f06cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06cc) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F06D4u;
    // 0x1f06d4: 0x0  nop
    ctx->pc = 0x1f06d4u;
    // NOP
label_1f06d8:
    // 0x1f06d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f06dc: 0x1080011e  beqz        $a0, . + 4 + (0x11E << 2)
    ctx->pc = 0x1F06DCu;
    {
        const bool branch_taken_0x1f06dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06dc) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F06E4u;
    // 0x1f06e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1f06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f06ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f06ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f06f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f06f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f06f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06f8: 0x0  nop
    ctx->pc = 0x1f06f8u;
    // NOP
    // 0x1f06fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f06fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0700: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0704: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0704u;
    {
        const bool branch_taken_0x1f0704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0704) {
            ctx->pc = 0x1F071Cu;
            goto label_1f071c;
        }
    }
    ctx->pc = 0x1F070Cu;
    // 0x1f070c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f070cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0710: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f0714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0714u;
    {
        const bool branch_taken_0x1f0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0714u;
        // 0x1f0718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0714) {
            ctx->pc = 0x1F0738u;
            goto label_1f0738;
        }
    }
    ctx->pc = 0x1F071Cu;
label_1f071c:
    // 0x1f071c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f071cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0720: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f0720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f0724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0728: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f072c: 0x0  nop
    ctx->pc = 0x1f072cu;
    // NOP
    // 0x1f0730: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f0730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f0734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0738:
    // 0x1f0738: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0738u;
    SET_GPR_U32(ctx, 31, 0x1F0740u);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0738u, 0x1F0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f0744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0748: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0748u;
    SET_GPR_U32(ctx, 31, 0x1F0750u);
    ctx->pc = 0x1F074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0748u;
    // 0x1f074c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0748u, 0x1F0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0750u;
label_1f0750:
    // 0x1f0750: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1F0750u;
    {
        const bool branch_taken_0x1f0750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0750) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0758u;
label_1f0758:
    // 0x1f0758: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f0758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f075c: 0x108000fe  beqz        $a0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1F075Cu;
    {
        const bool branch_taken_0x1f075c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f075c) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0764u;
    // 0x1f0764: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1f0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0768: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f076c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f076cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f0770: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f0770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f0774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0778: 0x0  nop
    ctx->pc = 0x1f0778u;
    // NOP
    // 0x1f077c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f077cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0780: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0784: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0784u;
    {
        const bool branch_taken_0x1f0784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0784) {
            ctx->pc = 0x1F079Cu;
            goto label_1f079c;
        }
    }
    ctx->pc = 0x1F078Cu;
    // 0x1f078c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f078cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0790: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f0794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0794u;
    {
        const bool branch_taken_0x1f0794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0794u;
        // 0x1f0798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0794) {
            ctx->pc = 0x1F07B8u;
            goto label_1f07b8;
        }
    }
    ctx->pc = 0x1F079Cu;
label_1f079c:
    // 0x1f079c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f079cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f07a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f07a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f07a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f07a8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f07a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f07ac: 0x0  nop
    ctx->pc = 0x1f07acu;
    // NOP
    // 0x1f07b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f07b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f07b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f07b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f07b8:
    // 0x1f07b8: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F07B8u;
    SET_GPR_U32(ctx, 31, 0x1F07C0u);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F07B8u, 0x1F07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07C0u;
label_1f07c0:
    // 0x1f07c0: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f07c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f07c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07c8: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F07C8u;
    SET_GPR_U32(ctx, 31, 0x1F07D0u);
    ctx->pc = 0x1F07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07C8u;
    // 0x1f07cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F07C8u, 0x1F07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F07D0u;
label_1f07d0:
    // 0x1f07d0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1F07D0u;
    {
        const bool branch_taken_0x1f07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07d0) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F07D8u;
label_1f07d8:
    // 0x1f07d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f07dc: 0x108000de  beqz        $a0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1F07DCu;
    {
        const bool branch_taken_0x1f07dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f07dc) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F07E4u;
    // 0x1f07e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1f07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f07e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f07ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f07ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f07f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f07f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f07f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f07f8: 0x0  nop
    ctx->pc = 0x1f07f8u;
    // NOP
    // 0x1f07fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f07fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0800: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0804: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0804u;
    {
        const bool branch_taken_0x1f0804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0804) {
            ctx->pc = 0x1F081Cu;
            goto label_1f081c;
        }
    }
    ctx->pc = 0x1F080Cu;
    // 0x1f080c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f080cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0810: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f0814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0814u;
    {
        const bool branch_taken_0x1f0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0814u;
        // 0x1f0818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0814) {
            ctx->pc = 0x1F0838u;
            goto label_1f0838;
        }
    }
    ctx->pc = 0x1F081Cu;
label_1f081c:
    // 0x1f081c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f081cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0820: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f0820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f0824: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0828: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f082c: 0x0  nop
    ctx->pc = 0x1f082cu;
    // NOP
    // 0x1f0830: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f0830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f0834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0838:
    // 0x1f0838: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0838u;
    SET_GPR_U32(ctx, 31, 0x1F0840u);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0838u, 0x1F0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0840u;
label_1f0840:
    // 0x1f0840: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f0840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f0844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0848: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0848u;
    SET_GPR_U32(ctx, 31, 0x1F0850u);
    ctx->pc = 0x1F084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0848u;
    // 0x1f084c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0848u, 0x1F0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0850u;
label_1f0850:
    // 0x1f0850: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1F0850u;
    {
        const bool branch_taken_0x1f0850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0850) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0858u;
label_1f0858:
    // 0x1f0858: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f0858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f085c: 0x108000be  beqz        $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1F085Cu;
    {
        const bool branch_taken_0x1f085c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f085c) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0864u;
    // 0x1f0864: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1f0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0868: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1f0868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1f086c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f086cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f0870: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f0874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0878: 0x0  nop
    ctx->pc = 0x1f0878u;
    // NOP
    // 0x1f087c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f087cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0880: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0884: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0884u;
    {
        const bool branch_taken_0x1f0884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0884) {
            ctx->pc = 0x1F089Cu;
            goto label_1f089c;
        }
    }
    ctx->pc = 0x1F088Cu;
    // 0x1f088c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f088cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0890: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f0894: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0894u;
    {
        const bool branch_taken_0x1f0894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0894u;
        // 0x1f0898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0894) {
            ctx->pc = 0x1F08B8u;
            goto label_1f08b8;
        }
    }
    ctx->pc = 0x1F089Cu;
label_1f089c:
    // 0x1f089c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f089cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f08a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f08a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f08a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f08a8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f08a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f08ac: 0x0  nop
    ctx->pc = 0x1f08acu;
    // NOP
    // 0x1f08b0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f08b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f08b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f08b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f08b8:
    // 0x1f08b8: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F08B8u;
    SET_GPR_U32(ctx, 31, 0x1F08C0u);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F08B8u, 0x1F08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08C0u;
label_1f08c0:
    // 0x1f08c0: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f08c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f08c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08c8: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F08C8u;
    SET_GPR_U32(ctx, 31, 0x1F08D0u);
    ctx->pc = 0x1F08CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08C8u;
    // 0x1f08cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F08C8u, 0x1F08D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08D0u;
label_1f08d0:
    // 0x1f08d0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1F08D0u;
    {
        const bool branch_taken_0x1f08d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08d0) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F08D8u;
label_1f08d8:
    // 0x1f08d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f08dc: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1F08DCu;
    {
        const bool branch_taken_0x1f08dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08dc) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F08E4u;
    // 0x1f08e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x1f08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f08e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f08ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f08ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f08f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1f08f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f08f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f08f8: 0x0  nop
    ctx->pc = 0x1f08f8u;
    // NOP
    // 0x1f08fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f08fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f0900: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f0900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0904: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0904u;
    {
        const bool branch_taken_0x1f0904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0904) {
            ctx->pc = 0x1F091Cu;
            goto label_1f091c;
        }
    }
    ctx->pc = 0x1F090Cu;
    // 0x1f090c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f090cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0910: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f0914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0914u;
    {
        const bool branch_taken_0x1f0914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0914u;
        // 0x1f0918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0914) {
            ctx->pc = 0x1F0938u;
            goto label_1f0938;
        }
    }
    ctx->pc = 0x1F091Cu;
label_1f091c:
    // 0x1f091c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f091cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0920: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f0924: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f0928: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1f0928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f092c: 0x0  nop
    ctx->pc = 0x1f092cu;
    // NOP
    // 0x1f0930: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f0930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f0934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0938:
    // 0x1f0938: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0938u;
    SET_GPR_U32(ctx, 31, 0x1F0940u);
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0938u, 0x1F0940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0940u;
label_1f0940:
    // 0x1f0940: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x1f0940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f0944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0948: 0xc0b8c7c  jal         func_2E31F0
    ctx->pc = 0x1F0948u;
    SET_GPR_U32(ctx, 31, 0x1F0950u);
    ctx->pc = 0x1F094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0948u;
    // 0x1f094c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31F0u, 0x1F0948u, 0x1F0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0950u;
label_1f0950:
    // 0x1f0950: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F0950u;
    {
        const bool branch_taken_0x1f0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0950) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0958u;
label_1f0958:
    // 0x1f0958: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f095c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1f095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1f0960: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1f0960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f0964: 0x3446120c  ori         $a2, $v0, 0x120C
    ctx->pc = 0x1f0964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4620);
    // 0x1f0968: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f0968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f096c: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1f0970: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x1F0970u;
    SET_GPR_U32(ctx, 31, 0x1F0978u);
    ctx->pc = 0x1F0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0970u;
    // 0x1f0974: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x1F0970u, 0x1F0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0978u;
label_1f0978:
    // 0x1f0978: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1F0978u;
    {
        const bool branch_taken_0x1f0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0978) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0980u;
label_1f0980:
    // 0x1f0980: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f0984: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1f0988: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f098c: 0x3446140d  ori         $a2, $v0, 0x140D
    ctx->pc = 0x1f098cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5133);
    // 0x1f0990: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f0990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f0994: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x1f0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1f0998: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x1F0998u;
    SET_GPR_U32(ctx, 31, 0x1F09A0u);
    ctx->pc = 0x1F099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0998u;
    // 0x1f099c: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x1F0998u, 0x1F09A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A0u;
label_1f09a0:
    // 0x1f09a0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1F09A0u;
    {
        const bool branch_taken_0x1f09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09a0) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F09A8u;
label_1f09a8:
    // 0x1f09a8: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1f09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1f09ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1f09b0: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f09b4: 0x3446160d  ori         $a2, $v0, 0x160D
    ctx->pc = 0x1f09b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5645);
    // 0x1f09b8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f09b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f09bc: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x1f09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1f09c0: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x1F09C0u;
    SET_GPR_U32(ctx, 31, 0x1F09C8u);
    ctx->pc = 0x1F09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09C0u;
    // 0x1f09c4: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x1F09C0u, 0x1F09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09C8u;
label_1f09c8:
    // 0x1f09c8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1F09C8u;
    {
        const bool branch_taken_0x1f09c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09c8) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F09D0u;
label_1f09d0:
    // 0x1f09d0: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f09d4: 0x90830680  lbu         $v1, 0x680($a0)
    ctx->pc = 0x1f09d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1664)));
    // 0x1f09d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1f09d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1f09dc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1F09DCu;
    {
        const bool branch_taken_0x1f09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09DCu;
        // 0x1f09e0: 0xa0830680  sb          $v1, 0x680($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1664), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09dc) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F09E4u;
    // 0x1f09e4: 0x0  nop
    ctx->pc = 0x1f09e4u;
    // NOP
label_1f09e8:
    // 0x1f09e8: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x1f09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f09ec: 0x90830680  lbu         $v1, 0x680($a0)
    ctx->pc = 0x1f09ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1664)));
    // 0x1f09f0: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x1f09f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x1f09f4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1F09F4u;
    {
        const bool branch_taken_0x1f09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F4u;
        // 0x1f09f8: 0xa0830680  sb          $v1, 0x680($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1664), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09f4) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F09FCu;
    // 0x1f09fc: 0x0  nop
    ctx->pc = 0x1f09fcu;
    // NOP
label_1f0a00:
    // 0x1f0a00: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x1f0a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f0a04: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1f0a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1f0a08: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1F0A08u;
    {
        const bool branch_taken_0x1f0a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A08u;
        // 0x1f0a0c: 0xa6230030  sh          $v1, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a08) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A10u;
label_1f0a10:
    // 0x1f0a10: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x1f0a10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1f0a14: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x1f0a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x1f0a18: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1F0A18u;
    {
        const bool branch_taken_0x1f0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A18u;
        // 0x1f0a1c: 0xa6230030  sh          $v1, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a18) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A20u;
label_1f0a20:
    // 0x1f0a20: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f0a24: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1f0a28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f0a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f0a2c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F0A2Cu;
    {
        const bool branch_taken_0x1f0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A2Cu;
        // 0x1f0a30: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a2c) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A34u;
    // 0x1f0a34: 0x0  nop
    ctx->pc = 0x1f0a34u;
    // NOP
label_1f0a38:
    // 0x1f0a38: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x1f0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f0a3c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f0a40: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1f0a44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f0a48: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F0A48u;
    {
        const bool branch_taken_0x1f0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A48u;
        // 0x1f0a4c: 0xaca30044  sw          $v1, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a48) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A50u;
label_1f0a50:
    // 0x1f0a50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0a54: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0a54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0a58: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f0a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f0a5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0a60: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1f0a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1f0a64: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0a68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1F0A68u;
    {
        const bool branch_taken_0x1f0a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A68u;
        // 0x1f0a6c: 0xa423a3d6  sh          $v1, -0x5C2A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a68) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A70u;
label_1f0a70:
    // 0x1f0a70: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a78: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0a78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0a7c: 0xa022a3d8  sb          $v0, -0x5C28($at)
    ctx->pc = 0x1f0a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943704), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0a80: 0xc0acc18  jal         func_2B3060
    ctx->pc = 0x1F0A80u;
    SET_GPR_U32(ctx, 31, 0x1F0A88u);
    ctx->pc = 0x1F0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A80u;
    // 0x1f0a84: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3060u, 0x1F0A80u, 0x1F0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A88u;
label_1f0a88:
    // 0x1f0a88: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1F0A88u;
    {
        const bool branch_taken_0x1f0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a88) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0A90u;
label_1f0a90:
    // 0x1f0a90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a98: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0a98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0a9c: 0xa022a3d8  sb          $v0, -0x5C28($at)
    ctx->pc = 0x1f0a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943704), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0aa0: 0xc0acc18  jal         func_2B3060
    ctx->pc = 0x1F0AA0u;
    SET_GPR_U32(ctx, 31, 0x1F0AA8u);
    ctx->pc = 0x1F0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AA0u;
    // 0x1f0aa4: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3060u, 0x1F0AA0u, 0x1F0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0AA8u;
label_1f0aa8:
    // 0x1f0aa8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F0AA8u;
    {
        const bool branch_taken_0x1f0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0aa8) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0AB0u;
label_1f0ab0:
    // 0x1f0ab0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ab8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0abc: 0xa022a3d8  sb          $v0, -0x5C28($at)
    ctx->pc = 0x1f0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943704), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ac0: 0xc0acc18  jal         func_2B3060
    ctx->pc = 0x1F0AC0u;
    SET_GPR_U32(ctx, 31, 0x1F0AC8u);
    ctx->pc = 0x1F0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AC0u;
    // 0x1f0ac4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3060u, 0x1F0AC0u, 0x1F0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0AC8u;
label_1f0ac8:
    // 0x1f0ac8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F0AC8u;
    {
        const bool branch_taken_0x1f0ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ac8) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0AD0u;
label_1f0ad0:
    // 0x1f0ad0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ad8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0adc: 0xa022a3d8  sb          $v0, -0x5C28($at)
    ctx->pc = 0x1f0adcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943704), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ae0: 0xc0acc18  jal         func_2B3060
    ctx->pc = 0x1F0AE0u;
    SET_GPR_U32(ctx, 31, 0x1F0AE8u);
    ctx->pc = 0x1F0AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AE0u;
    // 0x1f0ae4: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3060u, 0x1F0AE0u, 0x1F0AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0AE8u;
label_1f0ae8:
    // 0x1f0ae8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F0AE8u;
    {
        const bool branch_taken_0x1f0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ae8) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0AF0u;
label_1f0af0:
    // 0x1f0af0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f0af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0af8: 0xc069000  jal         func_1A4000
    ctx->pc = 0x1F0AF8u;
    SET_GPR_U32(ctx, 31, 0x1F0B00u);
    ctx->pc = 0x1F0AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AF8u;
    // 0x1f0afc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x1F0AF8u, 0x1F0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B00u;
label_1f0b00:
    // 0x1f0b00: 0xc068fe0  jal         func_1A3F80
    ctx->pc = 0x1F0B00u;
    SET_GPR_U32(ctx, 31, 0x1F0B08u);
    ctx->pc = 0x1A3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F80u, 0x1F0B00u, 0x1F0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B08u;
label_1f0b08:
    // 0x1f0b08: 0xc069078  jal         func_1A41E0
    ctx->pc = 0x1F0B08u;
    SET_GPR_U32(ctx, 31, 0x1F0B10u);
    ctx->pc = 0x1A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41E0u, 0x1F0B08u, 0x1F0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B10u;
label_1f0b10:
    // 0x1f0b10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0b14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f0b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0b1c: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x1F0B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F0B24u);
    ctx->pc = 0x1F0B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B1Cu;
    // 0x1f0b20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x1F0B1Cu, 0x1F0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0B24u;
label_1f0b24:
    // 0x1f0b24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0b28: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0b28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0b2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F0B2Cu;
    {
        const bool branch_taken_0x1f0b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B2Cu;
        // 0x1f0b30: 0xa430a3d4  sh          $s0, -0x5C2C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943700), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b2c) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0B34u;
    // 0x1f0b34: 0x0  nop
    ctx->pc = 0x1f0b34u;
    // NOP
label_1f0b38:
    // 0x1f0b38: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x1f0b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
    // 0x1f0b3c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1f0b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1f0b40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0B40u;
    {
        const bool branch_taken_0x1f0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B40u;
        // 0x1f0b44: 0xa243004f  sb          $v1, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b40) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0B48u;
label_1f0b48:
    // 0x1f0b48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0b4c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f0b50: 0xac31a3c0  sw          $s1, -0x5C40($at)
    ctx->pc = 0x1f0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943680), GPR_U32(ctx, 17));
    // 0x1f0b54: 0x0  nop
    ctx->pc = 0x1f0b54u;
    // NOP
label_1f0b58:
    // 0x1f0b58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f0b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B68u;
        // 0x1f0b6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B70u;
}
