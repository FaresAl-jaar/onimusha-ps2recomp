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

// Function: sub_00146560
// Address: 0x146560 - 0x146684
void sub_00146560_0x146560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146560_0x146560");
#endif

    switch (ctx->pc) {
        case 0x146580u: goto label_146580;
        case 0x146628u: goto label_146628;
        default: break;
    }

    ctx->pc = 0x146560u;

    // 0x146560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x146564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x146564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x146568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14656c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146578: 0x26510100  addiu       $s1, $s2, 0x100
    ctx->pc = 0x146578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x14657c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14657cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146580:
    // 0x146580: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x146580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x146584: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x146584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x146588: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x146588u;
    {
        const bool branch_taken_0x146588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146588u;
        // 0x14658c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146588) {
            ctx->pc = 0x146658u;
            goto label_146658;
        }
    }
    ctx->pc = 0x146590u;
    // 0x146590: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x146594: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x146594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x146598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x146598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14659c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x14659Cu;
    {
        const bool branch_taken_0x14659c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14659c) {
            ctx->pc = 0x146658u;
            goto label_146658;
        }
    }
    ctx->pc = 0x1465A4u;
    // 0x1465a4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1465a8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1465A8u;
    {
        const bool branch_taken_0x1465a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1465a8) {
            ctx->pc = 0x146610u;
            goto label_146610;
        }
    }
    ctx->pc = 0x1465B0u;
    // 0x1465b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1465B0u;
    {
        const bool branch_taken_0x1465b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1465B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465B0u;
        // 0x1465b4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465b0) {
            ctx->pc = 0x1465C4u;
            goto label_1465c4;
        }
    }
    ctx->pc = 0x1465B8u;
    // 0x1465b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1465b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1465bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1465BCu;
    {
        const bool branch_taken_0x1465bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465BCu;
        // 0x1465c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465bc) {
            ctx->pc = 0x1465DCu;
            goto label_1465dc;
        }
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1465c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1465c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1465c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1465cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1465ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1465d0: 0x0  nop
    ctx->pc = 0x1465d0u;
    // NOP
    // 0x1465d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1465d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1465d8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1465d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1465dc:
    // 0x1465dc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1465dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1465e0: 0x0  nop
    ctx->pc = 0x1465e0u;
    // NOP
    // 0x1465e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1465e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1465e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1465e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1465ec: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1465ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1465f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1465f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1465f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1465f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1465f8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1465f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1465fc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x146600: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146604: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x146604u;
    {
        const bool branch_taken_0x146604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146604u;
        // 0x146608: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146604) {
            ctx->pc = 0x146658u;
            goto label_146658;
        }
    }
    ctx->pc = 0x14660Cu;
    // 0x14660c: 0x0  nop
    ctx->pc = 0x14660cu;
    // NOP
label_146610:
    // 0x146610: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x146610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x146614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14661c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x14661cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x146620: 0xc049590  jal         func_125640
    ctx->pc = 0x146620u;
    SET_GPR_U32(ctx, 31, 0x146628u);
    ctx->pc = 0x146624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146620u;
    // 0x146624: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x146620u, 0x146628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146628u;
label_146628:
    // 0x146628: 0x92430355  lbu         $v1, 0x355($s2)
    ctx->pc = 0x146628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 853)));
    // 0x14662c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14662Cu;
    {
        const bool branch_taken_0x14662c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14662c) {
            ctx->pc = 0x146640u;
            goto label_146640;
        }
    }
    ctx->pc = 0x146634u;
    // 0x146634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146638: 0xa2430355  sb          $v1, 0x355($s2)
    ctx->pc = 0x146638u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 853), (uint8_t)GPR_U32(ctx, 3));
    // 0x14663c: 0x0  nop
    ctx->pc = 0x14663cu;
    // NOP
label_146640:
    // 0x146640: 0x92430357  lbu         $v1, 0x357($s2)
    ctx->pc = 0x146640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 855)));
    // 0x146644: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146644u;
    {
        const bool branch_taken_0x146644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146644) {
            ctx->pc = 0x146658u;
            goto label_146658;
        }
    }
    ctx->pc = 0x14664Cu;
    // 0x14664c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146650: 0xa2430357  sb          $v1, 0x357($s2)
    ctx->pc = 0x146650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 855), (uint8_t)GPR_U32(ctx, 3));
    // 0x146654: 0x0  nop
    ctx->pc = 0x146654u;
    // NOP
label_146658:
    // 0x146658: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x146658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14665c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x14665cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x146660: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x146660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146664: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x146664u;
    {
        const bool branch_taken_0x146664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146664u;
        // 0x146668: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146664) {
            ctx->pc = 0x146580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146580;
        }
    }
    ctx->pc = 0x14666Cu;
    // 0x14666c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14666cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14667c: 0x3e00008  jr          $ra
    ctx->pc = 0x14667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14667Cu;
        // 0x146680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146684u;
}
