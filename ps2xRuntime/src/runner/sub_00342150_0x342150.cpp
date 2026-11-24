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

// Function: sub_00342150
// Address: 0x342150 - 0x3422b4
void sub_00342150_0x342150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342150_0x342150");
#endif

    switch (ctx->pc) {
        case 0x3421bcu: goto label_3421bc;
        case 0x3421e0u: goto label_3421e0;
        case 0x3421f8u: goto label_3421f8;
        case 0x342200u: goto label_342200;
        case 0x342208u: goto label_342208;
        case 0x34221cu: goto label_34221c;
        case 0x342268u: goto label_342268;
        default: break;
    }

    ctx->pc = 0x342150u;

    // 0x342150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x342150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x342154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x342158: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x342158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34215c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x342160: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x342160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x342164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342168: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x342168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34216c: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x34216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342170: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x342170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342174: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x342174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342178: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x342178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34217c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x34217cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x342180: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x342180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x342184: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x342184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x342188: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x342188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x34218c: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x34218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342190: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x342190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342194: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x342194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342198: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x342198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34219c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x34219cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3421a0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3421a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3421a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3421a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3421a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3421a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3421ac: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3421b0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3421b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3421b4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3421B4u;
    SET_GPR_U32(ctx, 31, 0x3421BCu);
    ctx->pc = 0x3421B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421B4u;
    // 0x3421b8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3421B4u, 0x3421BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421BCu;
label_3421bc:
    // 0x3421bc: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x3421bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3421c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3421c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3421c4: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x3421c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3421c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3421c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3421cc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3421ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3421d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3421d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3421d4: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x3421d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x3421d8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3421D8u;
    SET_GPR_U32(ctx, 31, 0x3421E0u);
    ctx->pc = 0x3421DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421D8u;
    // 0x3421dc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3421D8u, 0x3421E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421E0u;
label_3421e0:
    // 0x3421e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3421e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3421e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3421e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3421e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3421e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3421ec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3421ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3421f0: 0xc0d16b4  jal         func_345AD0
    ctx->pc = 0x3421F0u;
    SET_GPR_U32(ctx, 31, 0x3421F8u);
    ctx->pc = 0x3421F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421F0u;
    // 0x3421f4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345AD0u, 0x3421F0u, 0x3421F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421F8u;
label_3421f8:
    // 0x3421f8: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x3421F8u;
    SET_GPR_U32(ctx, 31, 0x342200u);
    ctx->pc = 0x3421FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421F8u;
    // 0x3421fc: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x3421F8u, 0x342200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342200u;
label_342200:
    // 0x342200: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x342200u;
    SET_GPR_U32(ctx, 31, 0x342208u);
    ctx->pc = 0x342204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342200u;
    // 0x342204: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x342200u, 0x342208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342208u;
label_342208:
    // 0x342208: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342208u;
    {
        const bool branch_taken_0x342208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342208) {
            ctx->pc = 0x342228u;
            goto label_342228;
        }
    }
    ctx->pc = 0x342210u;
    // 0x342210: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x342214: 0xc0d1730  jal         func_345CC0
    ctx->pc = 0x342214u;
    SET_GPR_U32(ctx, 31, 0x34221Cu);
    ctx->pc = 0x342218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342214u;
    // 0x342218: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345CC0u, 0x342214u, 0x34221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34221Cu;
label_34221c:
    // 0x34221c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x34221Cu;
    {
        const bool branch_taken_0x34221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34221Cu;
        // 0x342220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34221c) {
            ctx->pc = 0x3422A0u;
            goto label_3422a0;
        }
    }
    ctx->pc = 0x342224u;
    // 0x342224: 0x0  nop
    ctx->pc = 0x342224u;
    // NOP
label_342228:
    // 0x342228: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x342228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34222c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342230: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x342230u;
    {
        const bool branch_taken_0x342230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x342230) {
            ctx->pc = 0x342278u;
            goto label_342278;
        }
    }
    ctx->pc = 0x342238u;
    // 0x342238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342238u;
    {
        const bool branch_taken_0x342238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342238) {
            ctx->pc = 0x342248u;
            goto label_342248;
        }
    }
    ctx->pc = 0x342240u;
    // 0x342240: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x342240u;
    {
        const bool branch_taken_0x342240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342240) {
            ctx->pc = 0x342298u;
            goto label_342298;
        }
    }
    ctx->pc = 0x342248u;
label_342248:
    // 0x342248: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x342248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34224c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x34224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x342250: 0x844200cc  lh          $v0, 0xCC($v0)
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x342254: 0x28410c01  slti        $at, $v0, 0xC01
    ctx->pc = 0x342254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3073) ? 1 : 0);
    // 0x342258: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x342258u;
    {
        const bool branch_taken_0x342258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342258u;
        // 0x34225c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342258) {
            ctx->pc = 0x342298u;
            goto label_342298;
        }
    }
    ctx->pc = 0x342260u;
    // 0x342260: 0xc0d0590  jal         func_341640
    ctx->pc = 0x342260u;
    SET_GPR_U32(ctx, 31, 0x342268u);
    ctx->pc = 0x342264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342260u;
    // 0x342264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x342260u, 0x342268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342268u;
label_342268:
    // 0x342268: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x342268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34226c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x342270u;
    {
        const bool branch_taken_0x342270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342270u;
        // 0x342274: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342270) {
            ctx->pc = 0x342298u;
            goto label_342298;
        }
    }
    ctx->pc = 0x342278u;
label_342278:
    // 0x342278: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x342278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34227c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x34227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x342280: 0x844200cc  lh          $v0, 0xCC($v0)
    ctx->pc = 0x342280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x342284: 0x28410400  slti        $at, $v0, 0x400
    ctx->pc = 0x342284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x342288: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x342288u;
    {
        const bool branch_taken_0x342288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342288) {
            ctx->pc = 0x342298u;
            goto label_342298;
        }
    }
    ctx->pc = 0x342290u;
    // 0x342290: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x342290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x342294: 0x0  nop
    ctx->pc = 0x342294u;
    // NOP
label_342298:
    // 0x342298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34229c: 0x0  nop
    ctx->pc = 0x34229cu;
    // NOP
label_3422a0:
    // 0x3422a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3422a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3422a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3422a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3422a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3422a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3422ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3422ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3422B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422ACu;
        // 0x3422b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3422ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3422B4u;
}
