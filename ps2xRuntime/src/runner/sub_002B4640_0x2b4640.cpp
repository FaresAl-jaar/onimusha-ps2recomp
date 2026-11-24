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

// Function: sub_002B4640
// Address: 0x2b4640 - 0x2b4764
void sub_002B4640_0x2b4640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4640_0x2b4640");
#endif

    switch (ctx->pc) {
        case 0x2b4684u: goto label_2b4684;
        case 0x2b46a0u: goto label_2b46a0;
        case 0x2b46ecu: goto label_2b46ec;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b4704u: goto label_2b4704;
        case 0x2b4718u: goto label_2b4718;
        default: break;
    }

    ctx->pc = 0x2b4640u;

    // 0x2b4640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b4640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b4644: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b4644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b4648: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b4648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b464c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2b464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2b4650: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b4654: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b4654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b4658: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b465c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4660: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2b4660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2b4664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b466c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b466cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b4670: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b4670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4674: 0x87838230  lh          $v1, -0x7DD0($gp)
    ctx->pc = 0x2b4674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935088)));
    // 0x2b4678: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2b4678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b467c: 0xc0b2bc0  jal         func_2CAF00
    ctx->pc = 0x2B467Cu;
    SET_GPR_U32(ctx, 31, 0x2B4684u);
    ctx->pc = 0x2B4680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B467Cu;
    // 0x2b4680: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2B467Cu, 0x2B4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4684u;
label_2b4684:
    // 0x2b4684: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b4684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4688: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2B4688u;
    {
        const bool branch_taken_0x2b4688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4688u;
        // 0x2b468c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4688) {
            ctx->pc = 0x2B4740u;
            goto label_2b4740;
        }
    }
    ctx->pc = 0x2B4690u;
    // 0x2b4690: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2b4690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2b4694: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b4698: 0x2450006c  addiu       $s0, $v0, 0x6C
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2b469c: 0x0  nop
    ctx->pc = 0x2b469cu;
    // NOP
label_2b46a0:
    // 0x2b46a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b46a4: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B46A4u;
    {
        const bool branch_taken_0x2b46a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b46a4) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B46ACu;
    // 0x2b46ac: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2b46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2b46b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2b46b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b46b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B46B4u;
    {
        const bool branch_taken_0x2b46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b46b4) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B46BCu;
    // 0x2b46bc: 0x92232ab0  lbu         $v1, 0x2AB0($s1)
    ctx->pc = 0x2b46bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x2b46c0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b46c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B46C4u;
    {
        const bool branch_taken_0x2b46c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b46c4) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B46CCu;
    // 0x2b46cc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b46ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b46d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b46d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b46d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B46D4u;
    {
        const bool branch_taken_0x2b46d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b46d4) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B46DCu;
    // 0x2b46dc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2b46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b46e0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2b46e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b46e4: 0xc04b946  jal         func_12E518
    ctx->pc = 0x2B46E4u;
    SET_GPR_U32(ctx, 31, 0x2B46ECu);
    ctx->pc = 0x2B46E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46E4u;
    // 0x2b46e8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x2B46E4u, 0x2B46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46ECu;
label_2b46ec:
    // 0x2b46ec: 0xc0478a6  jal         func_11E298
    ctx->pc = 0x2B46ECu;
    SET_GPR_U32(ctx, 31, 0x2B46F4u);
    ctx->pc = 0x2B46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46ECu;
    // 0x2b46f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E298u, 0x2B46ECu, 0x2B46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46F4u;
label_2b46f4:
    // 0x2b46f4: 0x3c034059  lui         $v1, 0x4059
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16473 << 16));
    // 0x2b46f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b46f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46fc: 0xc0400b8  jal         func_1002E0
    ctx->pc = 0x2B46FCu;
    SET_GPR_U32(ctx, 31, 0x2B4704u);
    ctx->pc = 0x2B4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46FCu;
    // 0x2b4700: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002E0u, 0x2B46FCu, 0x2B4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4704u;
label_2b4704:
    // 0x2b4704: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4704u;
    {
        const bool branch_taken_0x2b4704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4704) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B470Cu;
    // 0x2b470c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2b470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2b4710: 0xc096988  jal         func_25A620
    ctx->pc = 0x2B4710u;
    SET_GPR_U32(ctx, 31, 0x2B4718u);
    ctx->pc = 0x2B4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4710u;
    // 0x2b4714: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2B4710u, 0x2B4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4718u;
label_2b4718:
    // 0x2b4718: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2b4718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b471c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B471Cu;
    {
        const bool branch_taken_0x2b471c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b471c) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B4724u;
    // 0x2b4724: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b4724u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b4728: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2b4728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b472c: 0x0  nop
    ctx->pc = 0x2b472cu;
    // NOP
label_2b4730:
    // 0x2b4730: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x2b4730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b4734: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2b4734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b4738: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2B4738u;
    {
        const bool branch_taken_0x2b4738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4738) {
            ctx->pc = 0x2B46A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b46a0;
        }
    }
    ctx->pc = 0x2B4740u;
label_2b4740:
    // 0x2b4740: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b4740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4744: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4748: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b474c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b474cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4750: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b4750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4754: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4758: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b475c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B475Cu;
        // 0x2b4760: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4764u;
}
