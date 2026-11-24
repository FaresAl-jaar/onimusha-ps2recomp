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

// Function: sub_002F4610
// Address: 0x2f4610 - 0x2f473c
void sub_002F4610_0x2f4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4610_0x2f4610");
#endif

    switch (ctx->pc) {
        case 0x2f4648u: goto label_2f4648;
        case 0x2f4678u: goto label_2f4678;
        default: break;
    }

    ctx->pc = 0x2f4610u;

    // 0x2f4610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4614: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2f4614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f461c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f4620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4628: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f4628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f462c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F462Cu;
    {
        const bool branch_taken_0x2f462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F462Cu;
        // 0x2f4630: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f462c) {
            ctx->pc = 0x2F4640u;
            goto label_2f4640;
        }
    }
    ctx->pc = 0x2F4634u;
    // 0x2f4634: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F4634u;
    {
        const bool branch_taken_0x2f4634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4634u;
        // 0x2f4638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4634) {
            ctx->pc = 0x2F4728u;
            goto label_2f4728;
        }
    }
    ctx->pc = 0x2F463Cu;
    // 0x2f463c: 0x0  nop
    ctx->pc = 0x2f463cu;
    // NOP
label_2f4640:
    // 0x2f4640: 0xc0bccf8  jal         func_2F33E0
    ctx->pc = 0x2F4640u;
    SET_GPR_U32(ctx, 31, 0x2F4648u);
    ctx->pc = 0x2F33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33E0u, 0x2F4640u, 0x2F4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4648u;
label_2f4648:
    // 0x2f4648: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f464c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x2f464cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f4650: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F4650u;
    {
        const bool branch_taken_0x2f4650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4650u;
        // 0x2f4654: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4650) {
            ctx->pc = 0x2F4720u;
            goto label_2f4720;
        }
    }
    ctx->pc = 0x2F4658u;
    // 0x2f4658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f465c: 0x2463c670  addiu       $v1, $v1, -0x3990
    ctx->pc = 0x2f465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x2f4660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4668: 0x400008  jr          $v0
    ctx->pc = 0x2F4668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4670u: goto label_2f4670;
            case 0x2F4710u: goto label_2f4710;
            case 0x2F4720u: goto label_2f4720;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4668u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F4670u;
label_2f4670:
    // 0x2f4670: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4670u;
    SET_GPR_U32(ctx, 31, 0x2F4678u);
    ctx->pc = 0x2F4674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4670u;
    // 0x2f4674: 0x3224ffff  andi        $a0, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4670u, 0x2F4678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4678u;
label_2f4678:
    // 0x2f4678: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4678u;
    {
        const bool branch_taken_0x2f4678 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2F467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4678u;
        // 0x2f467c: 0x102042  srl         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4678) {
            ctx->pc = 0x2F468Cu;
            goto label_2f468c;
        }
    }
    ctx->pc = 0x2F4680u;
    // 0x2f4680: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2f4680u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4684: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4684u;
    {
        const bool branch_taken_0x2f4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4684) {
            ctx->pc = 0x2F46A4u;
            goto label_2f46a4;
        }
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2f468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f4690: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f4690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2f4694: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f4694u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4698: 0x0  nop
    ctx->pc = 0x2f4698u;
    // NOP
    // 0x2f469c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2f469cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f46a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2f46a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2f46a4:
    // 0x2f46a4: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2f46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2f46a8: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x2f46a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2f46ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f46acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f46b0: 0x0  nop
    ctx->pc = 0x2f46b0u;
    // NOP
    // 0x2f46b4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2f46b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2f46b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f46bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f46bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f46c0: 0x0  nop
    ctx->pc = 0x2f46c0u;
    // NOP
    // 0x2f46c4: 0x0  nop
    ctx->pc = 0x2f46c4u;
    // NOP
    // 0x2f46c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F46C8u;
    {
        const bool branch_taken_0x2f46c8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F46CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46C8u;
        // 0x2f46cc: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46c8) {
            ctx->pc = 0x2F46DCu;
            goto label_2f46dc;
        }
    }
    ctx->pc = 0x2F46D0u;
    // 0x2f46d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f46d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f46d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F46D4u;
    {
        const bool branch_taken_0x2f46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46D4u;
        // 0x2f46d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46d4) {
            ctx->pc = 0x2F46F8u;
            goto label_2f46f8;
        }
    }
    ctx->pc = 0x2F46DCu;
label_2f46dc:
    // 0x2f46dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f46e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f46e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f46e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f46e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f46e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f46e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f46ec: 0x0  nop
    ctx->pc = 0x2f46ecu;
    // NOP
    // 0x2f46f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f46f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f46f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f46f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f46f8:
    // 0x2f46f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f46f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f46fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f46fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f4700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f4700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f4704: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4704u;
    {
        const bool branch_taken_0x2f4704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4704) {
            ctx->pc = 0x2F4728u;
            goto label_2f4728;
        }
    }
    ctx->pc = 0x2F470Cu;
    // 0x2f470c: 0x0  nop
    ctx->pc = 0x2f470cu;
    // NOP
label_2f4710:
    // 0x2f4710: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2f4710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f4714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4714u;
    {
        const bool branch_taken_0x2f4714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4714u;
        // 0x2f4718: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4714) {
            ctx->pc = 0x2F4728u;
            goto label_2f4728;
        }
    }
    ctx->pc = 0x2F471Cu;
    // 0x2f471c: 0x0  nop
    ctx->pc = 0x2f471cu;
    // NOP
label_2f4720:
    // 0x2f4720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4724: 0x0  nop
    ctx->pc = 0x2f4724u;
    // NOP
label_2f4728:
    // 0x2f4728: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f472c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f472cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4734: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4734u;
        // 0x2f4738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F473Cu;
}
