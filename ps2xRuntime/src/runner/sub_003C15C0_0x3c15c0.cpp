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

// Function: sub_003C15C0
// Address: 0x3c15c0 - 0x3c16ec
void sub_003C15C0_0x3c15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C15C0_0x3c15c0");
#endif

    switch (ctx->pc) {
        case 0x3c15e4u: goto label_3c15e4;
        case 0x3c15ecu: goto label_3c15ec;
        case 0x3c15f4u: goto label_3c15f4;
        default: break;
    }

    ctx->pc = 0x3c15c0u;

    // 0x3c15c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c15c4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3c15c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3c15c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c15c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c15cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c15ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c15d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c15d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c15d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c15d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c15d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c15d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c15dc: 0xc049590  jal         func_125640
    ctx->pc = 0x3C15DCu;
    SET_GPR_U32(ctx, 31, 0x3C15E4u);
    ctx->pc = 0x3C15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15DCu;
    // 0x3c15e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C15DCu, 0x3C15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15E4u;
label_3c15e4:
    // 0x3c15e4: 0xc04150c  jal         func_105430
    ctx->pc = 0x3C15E4u;
    SET_GPR_U32(ctx, 31, 0x3C15ECu);
    ctx->pc = 0x3C15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15E4u;
    // 0x3c15e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3C15E4u, 0x3C15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15ECu;
label_3c15ec:
    // 0x3c15ec: 0xc04150c  jal         func_105430
    ctx->pc = 0x3C15ECu;
    SET_GPR_U32(ctx, 31, 0x3C15F4u);
    ctx->pc = 0x3C15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C15ECu;
    // 0x3c15f0: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3C15ECu, 0x3C15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C15F4u;
label_3c15f4:
    // 0x3c15f4: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c15f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c15f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c15f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3c15fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C15FCu;
    {
        const bool branch_taken_0x3c15fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c15fc) {
            ctx->pc = 0x3C1610u;
            goto label_3c1610;
        }
    }
    ctx->pc = 0x3C1604u;
    // 0x3c1604: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x3c1604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c1608: 0xa6230084  sh          $v1, 0x84($s1)
    ctx->pc = 0x3c1608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c160c: 0x0  nop
    ctx->pc = 0x3c160cu;
    // NOP
label_3c1610:
    // 0x3c1610: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c1614: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3c1614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3c1618: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1618u;
    {
        const bool branch_taken_0x3c1618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1618) {
            ctx->pc = 0x3C1628u;
            goto label_3c1628;
        }
    }
    ctx->pc = 0x3C1620u;
    // 0x3c1620: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3c1620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1624: 0xa6230086  sh          $v1, 0x86($s1)
    ctx->pc = 0x3c1624u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 3));
label_3c1628:
    // 0x3c1628: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c162c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3c162cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3c1630: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1630u;
    {
        const bool branch_taken_0x3c1630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1630) {
            ctx->pc = 0x3C1640u;
            goto label_3c1640;
        }
    }
    ctx->pc = 0x3C1638u;
    // 0x3c1638: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c1638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c163c: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x3c163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_3c1640:
    // 0x3c1640: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c1644: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3c1644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3c1648: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1648u;
    {
        const bool branch_taken_0x3c1648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1648) {
            ctx->pc = 0x3C1658u;
            goto label_3c1658;
        }
    }
    ctx->pc = 0x3C1650u;
    // 0x3c1650: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3c1650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c1654: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x3c1654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3c1658:
    // 0x3c1658: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c165c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3c165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3c1660: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1660u;
    {
        const bool branch_taken_0x3c1660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1660) {
            ctx->pc = 0x3C1670u;
            goto label_3c1670;
        }
    }
    ctx->pc = 0x3C1668u;
    // 0x3c1668: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3c1668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c166c: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x3c166cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3c1670:
    // 0x3c1670: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1670u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c1674: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3c1674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3c1678: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1678u;
    {
        const bool branch_taken_0x3c1678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1678) {
            ctx->pc = 0x3C1688u;
            goto label_3c1688;
        }
    }
    ctx->pc = 0x3C1680u;
    // 0x3c1680: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3c1680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c1684: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x3c1684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_3c1688:
    // 0x3c1688: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c1688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c168c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3c168cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3c1690: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1690u;
    {
        const bool branch_taken_0x3c1690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1690) {
            ctx->pc = 0x3C16A0u;
            goto label_3c16a0;
        }
    }
    ctx->pc = 0x3C1698u;
    // 0x3c1698: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3c1698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c169c: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x3c169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_3c16a0:
    // 0x3c16a0: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c16a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c16a4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3c16a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3c16a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C16A8u;
    {
        const bool branch_taken_0x3c16a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c16a8) {
            ctx->pc = 0x3C16B8u;
            goto label_3c16b8;
        }
    }
    ctx->pc = 0x3C16B0u;
    // 0x3c16b0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3c16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c16b4: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x3c16b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_3c16b8:
    // 0x3c16b8: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x3c16b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c16bc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3c16bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3c16c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C16C0u;
    {
        const bool branch_taken_0x3c16c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c16c0) {
            ctx->pc = 0x3C16D0u;
            goto label_3c16d0;
        }
    }
    ctx->pc = 0x3C16C8u;
    // 0x3c16c8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3c16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c16cc: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x3c16ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_3c16d0:
    // 0x3c16d0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c16d4: 0xa2230080  sb          $v1, 0x80($s1)
    ctx->pc = 0x3c16d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c16d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c16d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c16dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c16dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c16e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c16e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c16e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C16E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C16E4u;
        // 0x3c16e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C16E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C16ECu;
}
