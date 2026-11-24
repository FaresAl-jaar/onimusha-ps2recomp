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

// Function: sub_003A2730
// Address: 0x3a2730 - 0x3a2b2c
void sub_003A2730_0x3a2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2730_0x3a2730");
#endif

    switch (ctx->pc) {
        case 0x3a27bcu: goto label_3a27bc;
        case 0x3a2800u: goto label_3a2800;
        case 0x3a285cu: goto label_3a285c;
        case 0x3a286cu: goto label_3a286c;
        case 0x3a2968u: goto label_3a2968;
        case 0x3a2980u: goto label_3a2980;
        case 0x3a29b8u: goto label_3a29b8;
        case 0x3a29f0u: goto label_3a29f0;
        case 0x3a2a00u: goto label_3a2a00;
        case 0x3a2a6cu: goto label_3a2a6c;
        case 0x3a2b18u: goto label_3a2b18;
        default: break;
    }

    ctx->pc = 0x3a2730u;

    // 0x3a2730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a2734: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a2738: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a273c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a2740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a2744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a2744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2748: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3a2748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3a274c: 0x10a300a4  beq         $a1, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3A274Cu;
    {
        const bool branch_taken_0x3a274c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A274Cu;
        // 0x3a2750: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a274c) {
            ctx->pc = 0x3A29E0u;
            goto label_3a29e0;
        }
    }
    ctx->pc = 0x3A2754u;
    // 0x3a2754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a2754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a2758: 0x10a3007f  beq         $a1, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x3A2758u;
    {
        const bool branch_taken_0x3a2758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2758u;
        // 0x3a275c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2758) {
            ctx->pc = 0x3A2958u;
            goto label_3a2958;
        }
    }
    ctx->pc = 0x3A2760u;
    // 0x3a2760: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A2760u;
    {
        const bool branch_taken_0x3a2760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a2760) {
            ctx->pc = 0x3A2830u;
            goto label_3a2830;
        }
    }
    ctx->pc = 0x3A2768u;
    // 0x3a2768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a276c: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A276Cu;
    {
        const bool branch_taken_0x3a276c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a276c) {
            ctx->pc = 0x3A2810u;
            goto label_3a2810;
        }
    }
    ctx->pc = 0x3A2774u;
    // 0x3a2774: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2774u;
    {
        const bool branch_taken_0x3a2774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2774) {
            ctx->pc = 0x3A2788u;
            goto label_3a2788;
        }
    }
    ctx->pc = 0x3A277Cu;
    // 0x3a277c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x3A277Cu;
    {
        const bool branch_taken_0x3a277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a277c) {
            ctx->pc = 0x3A2B18u;
            goto label_3a2b18;
        }
    }
    ctx->pc = 0x3A2784u;
    // 0x3a2784: 0x0  nop
    ctx->pc = 0x3a2784u;
    // NOP
label_3a2788:
    // 0x3a2788: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A2788u;
    {
        const bool branch_taken_0x3a2788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2788) {
            ctx->pc = 0x3A27F8u;
            goto label_3a27f8;
        }
    }
    ctx->pc = 0x3A2790u;
    // 0x3a2790: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3a2790u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3a2794: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3a2794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3a2798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a279c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3a279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3a27a0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a27a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a27a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a27a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a27a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3a27ac: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3a27acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3a27b0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3a27b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3a27b4: 0xc0a9bec  jal         func_2A6FB0
    ctx->pc = 0x3A27B4u;
    SET_GPR_U32(ctx, 31, 0x3A27BCu);
    ctx->pc = 0x3A27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27B4u;
    // 0x3a27b8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6FB0u, 0x3A27B4u, 0x3A27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A27BCu;
label_3a27bc:
    // 0x3a27bc: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3a27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3a27c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a27c4: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x3a27c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a27c8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x3a27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x3a27cc: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3a27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3a27d0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x3a27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3a27d4: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x3a27d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x3a27d8: 0x8cc51934  lw          $a1, 0x1934($a2)
    ctx->pc = 0x3a27d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6452)));
    // 0x3a27dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3a27dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3a27e0: 0xacc41934  sw          $a0, 0x1934($a2)
    ctx->pc = 0x3a27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6452), GPR_U32(ctx, 4));
    // 0x3a27e4: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x3a27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x3a27e8: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x3a27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x3a27ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A27ECu;
    {
        const bool branch_taken_0x3a27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A27ECu;
        // 0x3a27f0: 0xae0304cc  sw          $v1, 0x4CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a27ec) {
            ctx->pc = 0x3A2800u;
            goto label_3a2800;
        }
    }
    ctx->pc = 0x3A27F4u;
    // 0x3a27f4: 0x0  nop
    ctx->pc = 0x3a27f4u;
    // NOP
label_3a27f8:
    // 0x3a27f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3A27F8u;
    SET_GPR_U32(ctx, 31, 0x3A2800u);
    ctx->pc = 0x3A27FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27F8u;
    // 0x3a27fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3A27F8u, 0x3A2800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2800u;
label_3a2800:
    // 0x3a2800: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3a2800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3a2804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2808: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x3A2808u;
    {
        const bool branch_taken_0x3a2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2808u;
        // 0x3a280c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2808) {
            ctx->pc = 0x3A2B18u;
            goto label_3a2b18;
        }
    }
    ctx->pc = 0x3A2810u;
label_3a2810:
    // 0x3a2810: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3a2810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3a2814: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3a2814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a2818: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3a2818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a281c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3a281cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2820: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3a2820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2824: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3a2824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3a2828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a282c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3a282cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3a2830:
    // 0x3a2830: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3a2830u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3a2834: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3a2834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3a2838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a283c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a283cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2840: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3a2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3a2844: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a2844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a2848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a284c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3a2850: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3a2850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3a2854: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3A2854u;
    SET_GPR_U32(ctx, 31, 0x3A285Cu);
    ctx->pc = 0x3A2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2854u;
    // 0x3a2858: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3A2854u, 0x3A285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A285Cu;
label_3a285c:
    // 0x3a285c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A285Cu;
    {
        const bool branch_taken_0x3a285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A285Cu;
        // 0x3a2860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a285c) {
            ctx->pc = 0x3A2870u;
            goto label_3a2870;
        }
    }
    ctx->pc = 0x3A2864u;
    // 0x3a2864: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3A2864u;
    SET_GPR_U32(ctx, 31, 0x3A286Cu);
    ctx->pc = 0x3A2868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2864u;
    // 0x3a2868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3A2864u, 0x3A286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A286Cu;
label_3a286c:
    // 0x3a286c: 0x0  nop
    ctx->pc = 0x3a286cu;
    // NOP
label_3a2870:
    // 0x3a2870: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2874: 0x78265c20  lq          $a2, 0x5C20($at)
    ctx->pc = 0x3a2874u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C20u));
    // 0x3a2878: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3a2878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a287c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2880: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3a2880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3a2884: 0x78255c30  lq          $a1, 0x5C30($at)
    ctx->pc = 0x3a2884u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C30u));
    // 0x3a2888: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a288c: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3a288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x3a2890: 0x78245c40  lq          $a0, 0x5C40($at)
    ctx->pc = 0x3a2890u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C40u));
    // 0x3a2894: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2898: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x3a2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x3a289c: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x3a289cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x3a28a0: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a28a4: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3a28a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3a28a8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a28ac: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3a28acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3a28b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A28B0u;
    {
        const bool branch_taken_0x3a28b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28B0u;
        // 0x3a28b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28b0) {
            ctx->pc = 0x3A28C0u;
            goto label_3a28c0;
        }
    }
    ctx->pc = 0x3A28B8u;
    // 0x3a28b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A28B8u;
    {
        const bool branch_taken_0x3a28b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a28b8) {
            ctx->pc = 0x3A2940u;
            goto label_3a2940;
        }
    }
    ctx->pc = 0x3A28C0u;
label_3a28c0:
    // 0x3a28c0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3a28c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a28c4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3a28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3a28c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a28c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a28cc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a28ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a28d0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3a28d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3a28d4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A28D4u;
    {
        const bool branch_taken_0x3a28d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a28d4) {
            ctx->pc = 0x3A2910u;
            goto label_3a2910;
        }
    }
    ctx->pc = 0x3A28DCu;
    // 0x3a28dc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3a28dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a28e0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3a28e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3a28e4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A28E4u;
    {
        const bool branch_taken_0x3a28e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A28E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A28E4u;
        // 0x3a28e8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a28e4) {
            ctx->pc = 0x3A2938u;
            goto label_3a2938;
        }
    }
    ctx->pc = 0x3A28ECu;
    // 0x3a28ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a28f0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3a28f0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a28f4: 0x0  nop
    ctx->pc = 0x3a28f4u;
    // NOP
    // 0x3a28f8: 0x0  nop
    ctx->pc = 0x3a28f8u;
    // NOP
    // 0x3a28fc: 0x2010  mfhi        $a0
    ctx->pc = 0x3a28fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3a2900: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a2900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a2904: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A2904u;
    {
        const bool branch_taken_0x3a2904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2904u;
        // 0x3a2908: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2904) {
            ctx->pc = 0x3A2938u;
            goto label_3a2938;
        }
    }
    ctx->pc = 0x3A290Cu;
    // 0x3a290c: 0x0  nop
    ctx->pc = 0x3a290cu;
    // NOP
label_3a2910:
    // 0x3a2910: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3a2910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a2914: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3a2914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a2918: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2918u;
    {
        const bool branch_taken_0x3a2918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2918) {
            ctx->pc = 0x3A2938u;
            goto label_3a2938;
        }
    }
    ctx->pc = 0x3A2920u;
    // 0x3a2920: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a2920u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a2924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2928: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3a2928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a292c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A292Cu;
    {
        const bool branch_taken_0x3a292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A292Cu;
        // 0x3a2930: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a292c) {
            ctx->pc = 0x3A2940u;
            goto label_3a2940;
        }
    }
    ctx->pc = 0x3A2934u;
    // 0x3a2934: 0x0  nop
    ctx->pc = 0x3a2934u;
    // NOP
label_3a2938:
    // 0x3a2938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a293c: 0x0  nop
    ctx->pc = 0x3a293cu;
    // NOP
label_3a2940:
    // 0x3a2940: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A2940u;
    {
        const bool branch_taken_0x3a2940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2940) {
            ctx->pc = 0x3A2B18u;
            goto label_3a2b18;
        }
    }
    ctx->pc = 0x3A2948u;
    // 0x3a2948: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3a2948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3a294c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2950: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3A2950u;
    {
        const bool branch_taken_0x3a2950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2950u;
        // 0x3a2954: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2950) {
            ctx->pc = 0x3A2B18u;
            goto label_3a2b18;
        }
    }
    ctx->pc = 0x3A2958u;
label_3a2958:
    // 0x3a2958: 0xa2200558  sb          $zero, 0x558($s1)
    ctx->pc = 0x3a2958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a295c: 0xa620053c  sh          $zero, 0x53C($s1)
    ctx->pc = 0x3a295cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a2960: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3A2960u;
    SET_GPR_U32(ctx, 31, 0x3A2968u);
    ctx->pc = 0x3A2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2960u;
    // 0x3a2964: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3A2960u, 0x3A2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2968u;
label_3a2968:
    // 0x3a2968: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A2968u;
    {
        const bool branch_taken_0x3a2968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2968u;
        // 0x3a296c: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2968) {
            ctx->pc = 0x3A29C0u;
            goto label_3a29c0;
        }
    }
    ctx->pc = 0x3A2970u;
    // 0x3a2970: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3a2970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3a2974: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3a2974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3a2978: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3A2978u;
    SET_GPR_U32(ctx, 31, 0x3A2980u);
    ctx->pc = 0x3A297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2978u;
    // 0x3a297c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3A2978u, 0x3A2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2980u;
label_3a2980:
    // 0x3a2980: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3a2980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3a2984: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a2984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a2988: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3a2988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3a298c: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3a298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3a2990: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a2994: 0x3445ae02  ori         $a1, $v0, 0xAE02
    ctx->pc = 0x3a2994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44546);
    // 0x3a2998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a299c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3a299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3a29a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a29a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a29a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a29a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a29acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29b0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A29B0u;
    SET_GPR_U32(ctx, 31, 0x3A29B8u);
    ctx->pc = 0x3A29B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A29B0u;
    // 0x3a29b4: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A29B0u, 0x3A29B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A29B8u;
label_3a29b8:
    // 0x3a29b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a29bc: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x3a29bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_3a29c0:
    // 0x3a29c0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3a29c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3a29c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3a29c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a29c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3a29c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a29cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3a29ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a29d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3a29d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a29d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3a29d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3a29d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a29dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3a29dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3a29e0:
    // 0x3a29e0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3a29e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3a29e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a29e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29e8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3A29E8u;
    SET_GPR_U32(ctx, 31, 0x3A29F0u);
    ctx->pc = 0x3A29ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A29E8u;
    // 0x3a29ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3A29E8u, 0x3A29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A29F0u;
label_3a29f0:
    // 0x3a29f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A29F0u;
    {
        const bool branch_taken_0x3a29f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29F0u;
        // 0x3a29f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29f0) {
            ctx->pc = 0x3A2A00u;
            goto label_3a2a00;
        }
    }
    ctx->pc = 0x3A29F8u;
    // 0x3a29f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3A29F8u;
    SET_GPR_U32(ctx, 31, 0x3A2A00u);
    ctx->pc = 0x3A29FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A29F8u;
    // 0x3a29fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3A29F8u, 0x3A2A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A00u;
label_3a2a00:
    // 0x3a2a00: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3a2a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a2a04: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A2A04u;
    {
        const bool branch_taken_0x3a2a04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3A2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A04u;
        // 0x3a2a08: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a04) {
            ctx->pc = 0x3A2A70u;
            goto label_3a2a70;
        }
    }
    ctx->pc = 0x3A2A0Cu;
    // 0x3a2a0c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A2A0Cu;
    {
        const bool branch_taken_0x3a2a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2a0c) {
            ctx->pc = 0x3A2A70u;
            goto label_3a2a70;
        }
    }
    ctx->pc = 0x3A2A14u;
    // 0x3a2a14: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2a18: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3a2a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a2a1c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3a2a1cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3a2a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3a2a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a2a28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a2a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a2c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2a30: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3a2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3a2a34: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3a2a34u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3a2a38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2a3c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3a2a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3a2a40: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3a2a40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3a2a44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3a2a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3a2a48: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3a2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3a2a4c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3a2a4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3a2a50: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3a2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3a2a54: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3a2a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3a2a58: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3a2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3a2a5c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3a2a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3a2a60: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3a2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3a2a64: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3A2A64u;
    SET_GPR_U32(ctx, 31, 0x3A2A6Cu);
    ctx->pc = 0x3A2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A64u;
    // 0x3a2a68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3A2A64u, 0x3A2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A6Cu;
label_3a2a6c:
    // 0x3a2a6c: 0x0  nop
    ctx->pc = 0x3a2a6cu;
    // NOP
label_3a2a70:
    // 0x3a2a70: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3a2a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3a2a74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2A74u;
    {
        const bool branch_taken_0x3a2a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A74u;
        // 0x3a2a78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a74) {
            ctx->pc = 0x3A2A88u;
            goto label_3a2a88;
        }
    }
    ctx->pc = 0x3A2A7Cu;
    // 0x3a2a7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A2A7Cu;
    {
        const bool branch_taken_0x3a2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2a7c) {
            ctx->pc = 0x3A2B08u;
            goto label_3a2b08;
        }
    }
    ctx->pc = 0x3A2A84u;
    // 0x3a2a84: 0x0  nop
    ctx->pc = 0x3a2a84u;
    // NOP
label_3a2a88:
    // 0x3a2a88: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3a2a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a2a8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3a2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3a2a90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a2a94: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a2a94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a2a98: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3a2a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3a2a9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A2A9Cu;
    {
        const bool branch_taken_0x3a2a9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2a9c) {
            ctx->pc = 0x3A2AD8u;
            goto label_3a2ad8;
        }
    }
    ctx->pc = 0x3A2AA4u;
    // 0x3a2aa4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3a2aa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a2aa8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3a2aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3a2aac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A2AACu;
    {
        const bool branch_taken_0x3a2aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2AACu;
        // 0x3a2ab0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2aac) {
            ctx->pc = 0x3A2B00u;
            goto label_3a2b00;
        }
    }
    ctx->pc = 0x3A2AB4u;
    // 0x3a2ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2ab8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3a2ab8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3a2abc: 0x0  nop
    ctx->pc = 0x3a2abcu;
    // NOP
    // 0x3a2ac0: 0x0  nop
    ctx->pc = 0x3a2ac0u;
    // NOP
    // 0x3a2ac4: 0x2010  mfhi        $a0
    ctx->pc = 0x3a2ac4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3a2ac8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a2ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a2acc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A2ACCu;
    {
        const bool branch_taken_0x3a2acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2ACCu;
        // 0x3a2ad0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2acc) {
            ctx->pc = 0x3A2B00u;
            goto label_3a2b00;
        }
    }
    ctx->pc = 0x3A2AD4u;
    // 0x3a2ad4: 0x0  nop
    ctx->pc = 0x3a2ad4u;
    // NOP
label_3a2ad8:
    // 0x3a2ad8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3a2ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3a2adc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3a2adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a2ae0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2AE0u;
    {
        const bool branch_taken_0x3a2ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2ae0) {
            ctx->pc = 0x3A2B00u;
            goto label_3a2b00;
        }
    }
    ctx->pc = 0x3A2AE8u;
    // 0x3a2ae8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3a2ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a2aec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2af0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3a2af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a2af4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2AF4u;
    {
        const bool branch_taken_0x3a2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2AF4u;
        // 0x3a2af8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2af4) {
            ctx->pc = 0x3A2B08u;
            goto label_3a2b08;
        }
    }
    ctx->pc = 0x3A2AFCu;
    // 0x3a2afc: 0x0  nop
    ctx->pc = 0x3a2afcu;
    // NOP
label_3a2b00:
    // 0x3a2b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2b04: 0x0  nop
    ctx->pc = 0x3a2b04u;
    // NOP
label_3a2b08:
    // 0x3a2b08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2B08u;
    {
        const bool branch_taken_0x3a2b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B08u;
        // 0x3a2b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b08) {
            ctx->pc = 0x3A2B18u;
            goto label_3a2b18;
        }
    }
    ctx->pc = 0x3A2B10u;
    // 0x3a2b10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3A2B10u;
    SET_GPR_U32(ctx, 31, 0x3A2B18u);
    ctx->pc = 0x3A2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B10u;
    // 0x3a2b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3A2B10u, 0x3A2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B18u;
label_3a2b18:
    // 0x3a2b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a2b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2b1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a2b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a2b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2b24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B24u;
        // 0x3a2b28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2B2Cu;
}
