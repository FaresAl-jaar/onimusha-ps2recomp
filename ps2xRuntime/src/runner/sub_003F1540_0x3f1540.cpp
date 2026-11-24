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

// Function: sub_003F1540
// Address: 0x3f1540 - 0x3f1680
void sub_003F1540_0x3f1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1540_0x3f1540");
#endif

    switch (ctx->pc) {
        case 0x3f156cu: goto label_3f156c;
        case 0x3f1580u: goto label_3f1580;
        case 0x3f166cu: goto label_3f166c;
        default: break;
    }

    ctx->pc = 0x3f1540u;

    // 0x3f1540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f1544: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x3f1544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3f1548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f154c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3f154cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3f1550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f1554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f155c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f1560: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f1560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1564: 0xc0d0a44  jal         func_342910
    ctx->pc = 0x3F1564u;
    SET_GPR_U32(ctx, 31, 0x3F156Cu);
    ctx->pc = 0x3F1568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1564u;
    // 0x3f1568: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342910u, 0x3F1564u, 0x3F156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F156Cu;
label_3f156c:
    // 0x3f156c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f156cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f1570: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f1570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3f1574: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x3f1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    // 0x3f1578: 0xc0d0a58  jal         func_342960
    ctx->pc = 0x3F1578u;
    SET_GPR_U32(ctx, 31, 0x3F1580u);
    ctx->pc = 0x3F157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1578u;
    // 0x3f157c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342960u, 0x3F1578u, 0x3F1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1580u;
label_3f1580:
    // 0x3f1580: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3f1580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3f1584: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f1584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3f1588: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x3f1588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x3f158c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3f158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f1590: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f1590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3f1594: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3f1594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3f1598: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3f1598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x3f159c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x3f159cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x3f15a0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3f15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x3f15a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3f15a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3f15a8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3f15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3f15ac: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3f15acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x3f15b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3f15b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3f15b4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3f15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3f15b8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3f15b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3f15bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f15bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f15c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3f15c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f15c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f15c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f15c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f15cc: 0x0  nop
    ctx->pc = 0x3f15ccu;
    // NOP
    // 0x3f15d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f15d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f15d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F15D4u;
    {
        const bool branch_taken_0x3f15d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15D4u;
        // 0x3f15d8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f15d4) {
            ctx->pc = 0x3F15ECu;
            goto label_3f15ec;
        }
    }
    ctx->pc = 0x3F15DCu;
    // 0x3f15dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f15dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f15e0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f15e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f15e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F15E4u;
    {
        const bool branch_taken_0x3f15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F15E4u;
        // 0x3f15e8: 0x3c044040  lui         $a0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f15e4) {
            ctx->pc = 0x3F1608u;
            goto label_3f1608;
        }
    }
    ctx->pc = 0x3F15ECu;
label_3f15ec:
    // 0x3f15ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f15ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f15f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f15f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f15f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f15f8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f15f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f15fc: 0x0  nop
    ctx->pc = 0x3f15fcu;
    // NOP
    // 0x3f1600: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x3f1600u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3f1604: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x3f1604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_3f1608:
    // 0x3f1608: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3f1608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3f160c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3f160cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f1610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f1610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f1614: 0x0  nop
    ctx->pc = 0x3f1614u;
    // NOP
    // 0x3f1618: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3f1618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3f161c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f161cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f1620: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1620u;
    {
        const bool branch_taken_0x3f1620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f1620) {
            ctx->pc = 0x3F1638u;
            goto label_3f1638;
        }
    }
    ctx->pc = 0x3F1628u;
    // 0x3f1628: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f162c: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x3f162cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x3f1630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1630u;
    {
        const bool branch_taken_0x3f1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1630u;
        // 0x3f1634: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1630) {
            ctx->pc = 0x3F1654u;
            goto label_3f1654;
        }
    }
    ctx->pc = 0x3F1638u;
label_3f1638:
    // 0x3f1638: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f1638u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f163c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f163cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f1640: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1644: 0x440a0800  mfc1        $t2, $f1
    ctx->pc = 0x3f1644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x3f1648: 0x0  nop
    ctx->pc = 0x3f1648u;
    // NOP
    // 0x3f164c: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x3f164cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x3f1650: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3f1650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f1654:
    // 0x3f1654: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f1654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3f1658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f1658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f165c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3f165cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3f1660: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3f1660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3f1664: 0xc0d07d0  jal         func_341F40
    ctx->pc = 0x3F1664u;
    SET_GPR_U32(ctx, 31, 0x3F166Cu);
    ctx->pc = 0x3F1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1664u;
    // 0x3f1668: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341F40u, 0x3F1664u, 0x3F166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F166Cu;
label_3f166c:
    // 0x3f166c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1678: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1678u;
        // 0x3f167c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1680u;
}
