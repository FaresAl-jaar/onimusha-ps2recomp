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

// Function: sub_00375F80
// Address: 0x375f80 - 0x3760a0
void sub_00375F80_0x375f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375F80_0x375f80");
#endif

    switch (ctx->pc) {
        case 0x375f9cu: goto label_375f9c;
        case 0x375fa8u: goto label_375fa8;
        case 0x375fb4u: goto label_375fb4;
        case 0x375fdcu: goto label_375fdc;
        case 0x376064u: goto label_376064;
        default: break;
    }

    ctx->pc = 0x375f80u;

    // 0x375f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f90: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x375f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    // 0x375f94: 0xc04fae4  jal         func_13EB90
    ctx->pc = 0x375F94u;
    SET_GPR_U32(ctx, 31, 0x375F9Cu);
    ctx->pc = 0x375F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F94u;
    // 0x375f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EB90u, 0x375F94u, 0x375F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F9Cu;
label_375f9c:
    // 0x375f9c: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x375f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    // 0x375fa0: 0xc04e718  jal         func_139C60
    ctx->pc = 0x375FA0u;
    SET_GPR_U32(ctx, 31, 0x375FA8u);
    ctx->pc = 0x375FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FA0u;
    // 0x375fa4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C60u, 0x375FA0u, 0x375FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FA8u;
label_375fa8:
    // 0x375fa8: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x375fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    // 0x375fac: 0xc04e71c  jal         func_139C70
    ctx->pc = 0x375FACu;
    SET_GPR_U32(ctx, 31, 0x375FB4u);
    ctx->pc = 0x375FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FACu;
    // 0x375fb0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C70u, 0x375FACu, 0x375FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FB4u;
label_375fb4:
    // 0x375fb4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x375fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x375fb8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x375fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x375fbc: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x375fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x375fc0: 0xae0318e0  sw          $v1, 0x18E0($s0)
    ctx->pc = 0x375fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6368), GPR_U32(ctx, 3));
    // 0x375fc4: 0x26040930  addiu       $a0, $s0, 0x930
    ctx->pc = 0x375fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    // 0x375fc8: 0xae0218e4  sw          $v0, 0x18E4($s0)
    ctx->pc = 0x375fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6372), GPR_U32(ctx, 2));
    // 0x375fcc: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x375fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x375fd0: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x375fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375fd4: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x375FD4u;
    SET_GPR_U32(ctx, 31, 0x375FDCu);
    ctx->pc = 0x375FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375FD4u;
    // 0x375fd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x375FD4u, 0x375FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375FDCu;
label_375fdc:
    // 0x375fdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x375fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375fe0: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x375FE0u;
    {
        const bool branch_taken_0x375fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x375fe0) {
            ctx->pc = 0x376018u;
            goto label_376018;
        }
    }
    ctx->pc = 0x375FE8u;
    // 0x375fe8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x375fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375fec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x375fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x375ff0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375ff8: 0xe60028f0  swc1        $f0, 0x28F0($s0)
    ctx->pc = 0x375ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10480), bits); }
    // 0x375ffc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376000: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x376000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x376004: 0x8e0328d4  lw          $v1, 0x28D4($s0)
    ctx->pc = 0x376004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10452)));
    // 0x376008: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x376008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37600c: 0xae0228d4  sw          $v0, 0x28D4($s0)
    ctx->pc = 0x37600cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 2));
    // 0x376010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x376010u;
    {
        const bool branch_taken_0x376010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376010u;
        // 0x376014: 0xae0028f4  sw          $zero, 0x28F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376010) {
            ctx->pc = 0x376050u;
            goto label_376050;
        }
    }
    ctx->pc = 0x376018u;
label_376018:
    // 0x376018: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x376018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x37601c: 0xc60128f4  lwc1        $f1, 0x28F4($s0)
    ctx->pc = 0x37601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376020: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x376020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x376024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376028: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x376028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x37602c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37602cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376030: 0xe60128f4  swc1        $f1, 0x28F4($s0)
    ctx->pc = 0x376030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10484), bits); }
    // 0x376034: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x376034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376038: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376038u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37603c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x37603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x376040: 0x8e0328d4  lw          $v1, 0x28D4($s0)
    ctx->pc = 0x376040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10452)));
    // 0x376044: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x376044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x376048: 0xae0328d4  sw          $v1, 0x28D4($s0)
    ctx->pc = 0x376048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 3));
    // 0x37604c: 0xae0228f0  sw          $v0, 0x28F0($s0)
    ctx->pc = 0x37604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10480), GPR_U32(ctx, 2));
label_376050:
    // 0x376050: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x376050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x376054: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x376054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x376058: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x376058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37605c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37605Cu;
    SET_GPR_U32(ctx, 31, 0x376064u);
    ctx->pc = 0x376060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37605Cu;
    // 0x376060: 0x2484c6e0  addiu       $a0, $a0, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37605Cu, 0x376064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376064u;
label_376064:
    // 0x376064: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x376064u;
    {
        const bool branch_taken_0x376064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376064) {
            ctx->pc = 0x376090u;
            goto label_376090;
        }
    }
    ctx->pc = 0x37606Cu;
    // 0x37606c: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x37606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376070: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x376070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376074: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x376074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376078: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x376078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37607c: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x37607cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x376080: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x376080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x376084: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x376084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x376088: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x376088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x37608c: 0x0  nop
    ctx->pc = 0x37608cu;
    // NOP
label_376090:
    // 0x376090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376098: 0x3e00008  jr          $ra
    ctx->pc = 0x376098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376098u;
        // 0x37609c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3760A0u;
}
