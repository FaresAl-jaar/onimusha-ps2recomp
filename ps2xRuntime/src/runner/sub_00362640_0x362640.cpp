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

// Function: sub_00362640
// Address: 0x362640 - 0x3629bc
void sub_00362640_0x362640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362640_0x362640");
#endif

    switch (ctx->pc) {
        case 0x362698u: goto label_362698;
        case 0x3626c4u: goto label_3626c4;
        case 0x3626e0u: goto label_3626e0;
        case 0x3626f0u: goto label_3626f0;
        case 0x362708u: goto label_362708;
        case 0x36271cu: goto label_36271c;
        case 0x36272cu: goto label_36272c;
        case 0x362748u: goto label_362748;
        case 0x362758u: goto label_362758;
        case 0x3627acu: goto label_3627ac;
        case 0x362800u: goto label_362800;
        case 0x362810u: goto label_362810;
        case 0x36283cu: goto label_36283c;
        case 0x362858u: goto label_362858;
        case 0x362868u: goto label_362868;
        case 0x362880u: goto label_362880;
        case 0x362898u: goto label_362898;
        case 0x3628a8u: goto label_3628a8;
        case 0x3628c4u: goto label_3628c4;
        case 0x3628ecu: goto label_3628ec;
        case 0x3628fcu: goto label_3628fc;
        case 0x3629a8u: goto label_3629a8;
        default: break;
    }

    ctx->pc = 0x362640u;

    // 0x362640: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x362640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x362644: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x362648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36264c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x362650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x362650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x362654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x362654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362658: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x362658u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x36265c: 0x10a3004a  beq         $a1, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x36265Cu;
    {
        const bool branch_taken_0x36265c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x362660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36265Cu;
        // 0x362660: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36265c) {
            ctx->pc = 0x362788u;
            goto label_362788;
        }
    }
    ctx->pc = 0x362664u;
    // 0x362664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362668: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x362668u;
    {
        const bool branch_taken_0x362668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x362668) {
            ctx->pc = 0x362768u;
            goto label_362768;
        }
    }
    ctx->pc = 0x362670u;
    // 0x362670: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x362670u;
    {
        const bool branch_taken_0x362670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x362670) {
            ctx->pc = 0x362680u;
            goto label_362680;
        }
    }
    ctx->pc = 0x362678u;
    // 0x362678: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x362678u;
    {
        const bool branch_taken_0x362678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362678) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x362680u;
label_362680:
    // 0x362680: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x362680u;
    {
        const bool branch_taken_0x362680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x362680) {
            ctx->pc = 0x362750u;
            goto label_362750;
        }
    }
    ctx->pc = 0x362688u;
    // 0x362688: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x362688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x36268c: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x36268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x362690: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x362690u;
    SET_GPR_U32(ctx, 31, 0x362698u);
    ctx->pc = 0x362694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362690u;
    // 0x362694: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x362690u, 0x362698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362698u;
label_362698:
    // 0x362698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362698u;
    {
        const bool branch_taken_0x362698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362698) {
            ctx->pc = 0x3626A8u;
            goto label_3626a8;
        }
    }
    ctx->pc = 0x3626A0u;
    // 0x3626a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3626A0u;
    {
        const bool branch_taken_0x3626a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626A0u;
        // 0x3626a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3626a0) {
            ctx->pc = 0x3626F8u;
            goto label_3626f8;
        }
    }
    ctx->pc = 0x3626A8u;
label_3626a8:
    // 0x3626a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3626a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3626ac: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x3626acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3626b0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3626b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3626b4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3626b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3626b8: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3626b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3626bc: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3626BCu;
    SET_GPR_U32(ctx, 31, 0x3626C4u);
    ctx->pc = 0x3626C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3626BCu;
    // 0x3626c0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3626BCu, 0x3626C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626C4u;
label_3626c4:
    // 0x3626c4: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x3626c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3626c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3626c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3626cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3626ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3626d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3626d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3626d4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3626d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3626d8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3626D8u;
    SET_GPR_U32(ctx, 31, 0x3626E0u);
    ctx->pc = 0x3626DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3626D8u;
    // 0x3626dc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3626D8u, 0x3626E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626E0u;
label_3626e0:
    // 0x3626e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3626e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3626e4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3626e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3626e8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3626E8u;
    SET_GPR_U32(ctx, 31, 0x3626F0u);
    ctx->pc = 0x3626ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3626E8u;
    // 0x3626ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3626E8u, 0x3626F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626F0u;
label_3626f0:
    // 0x3626f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3626f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3626f4: 0x0  nop
    ctx->pc = 0x3626f4u;
    // NOP
label_3626f8:
    // 0x3626f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3626F8u;
    {
        const bool branch_taken_0x3626f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3626FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626F8u;
        // 0x3626fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3626f8) {
            ctx->pc = 0x362710u;
            goto label_362710;
        }
    }
    ctx->pc = 0x362700u;
    // 0x362700: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362700u;
    SET_GPR_U32(ctx, 31, 0x362708u);
    ctx->pc = 0x362704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362700u;
    // 0x362704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362700u, 0x362708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362708u;
label_362708:
    // 0x362708: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x362708u;
    {
        const bool branch_taken_0x362708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362708) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x362710u;
label_362710:
    // 0x362710: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x362710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x362714: 0xc096cf8  jal         func_25B3E0
    ctx->pc = 0x362714u;
    SET_GPR_U32(ctx, 31, 0x36271Cu);
    ctx->pc = 0x362718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362714u;
    // 0x362718: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B3E0u, 0x362714u, 0x36271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36271Cu;
label_36271c:
    // 0x36271c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36271Cu;
    {
        const bool branch_taken_0x36271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36271Cu;
        // 0x362720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36271c) {
            ctx->pc = 0x362738u;
            goto label_362738;
        }
    }
    ctx->pc = 0x362724u;
    // 0x362724: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362724u;
    SET_GPR_U32(ctx, 31, 0x36272Cu);
    ctx->pc = 0x362728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362724u;
    // 0x362728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362724u, 0x36272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36272Cu;
label_36272c:
    // 0x36272c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x36272Cu;
    {
        const bool branch_taken_0x36272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36272c) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x362734u;
    // 0x362734: 0x0  nop
    ctx->pc = 0x362734u;
    // NOP
label_362738:
    // 0x362738: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x362738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x36273c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x36273cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x362740: 0xc0a9dc4  jal         func_2A7710
    ctx->pc = 0x362740u;
    SET_GPR_U32(ctx, 31, 0x362748u);
    ctx->pc = 0x362744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362740u;
    // 0x362744: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7710u, 0x362740u, 0x362748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362748u;
label_362748:
    // 0x362748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362748u;
    {
        const bool branch_taken_0x362748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362748u;
        // 0x36274c: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362748) {
            ctx->pc = 0x362758u;
            goto label_362758;
        }
    }
    ctx->pc = 0x362750u;
label_362750:
    // 0x362750: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362750u;
    SET_GPR_U32(ctx, 31, 0x362758u);
    ctx->pc = 0x362754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362750u;
    // 0x362754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362750u, 0x362758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362758u;
label_362758:
    // 0x362758: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x362758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x36275c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x362760: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x362760u;
    {
        const bool branch_taken_0x362760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362760u;
        // 0x362764: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362760) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x362768u;
label_362768:
    // 0x362768: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x362768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x36276c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x36276cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x362770: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x362770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x362774: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x362774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x362778: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x362778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x36277c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x36277cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x362780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x362780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x362784: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x362784u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_362788:
    // 0x362788: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x362788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x36278c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x36278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x362790: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x362790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x362794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362798: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x362798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x36279c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36279cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3627a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3627a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3627a4: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3627A4u;
    SET_GPR_U32(ctx, 31, 0x3627ACu);
    ctx->pc = 0x3627A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627A4u;
    // 0x3627a8: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3627A4u, 0x3627ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627ACu;
label_3627ac:
    // 0x3627ac: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3627acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3627b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3627b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3627b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3627b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3627b8: 0x0  nop
    ctx->pc = 0x3627b8u;
    // NOP
    // 0x3627bc: 0x0  nop
    ctx->pc = 0x3627bcu;
    // NOP
    // 0x3627c0: 0x1010  mfhi        $v0
    ctx->pc = 0x3627c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3627c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3627C4u;
    {
        const bool branch_taken_0x3627c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3627c4) {
            ctx->pc = 0x362800u;
            goto label_362800;
        }
    }
    ctx->pc = 0x3627CCu;
    // 0x3627cc: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3627ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3627d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3627d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3627d4: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3627d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3627d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3627d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3627dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3627dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627e0: 0x34459002  ori         $a1, $v0, 0x9002
    ctx->pc = 0x3627e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
    // 0x3627e4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3627e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3627e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3627e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3627ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3627f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3627f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3627F8u;
    SET_GPR_U32(ctx, 31, 0x362800u);
    ctx->pc = 0x3627FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627F8u;
    // 0x3627fc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3627F8u, 0x362800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362800u;
label_362800:
    // 0x362800: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x362800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x362804: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x362804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x362808: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x362808u;
    SET_GPR_U32(ctx, 31, 0x362810u);
    ctx->pc = 0x36280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362808u;
    // 0x36280c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x362808u, 0x362810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362810u;
label_362810:
    // 0x362810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362810u;
    {
        const bool branch_taken_0x362810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362810) {
            ctx->pc = 0x362820u;
            goto label_362820;
        }
    }
    ctx->pc = 0x362818u;
    // 0x362818: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x362818u;
    {
        const bool branch_taken_0x362818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362818u;
        // 0x36281c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362818) {
            ctx->pc = 0x362870u;
            goto label_362870;
        }
    }
    ctx->pc = 0x362820u;
label_362820:
    // 0x362820: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x362820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x362824: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x362824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362828: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x362828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36282c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x36282cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x362830: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x362830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x362834: 0xc097384  jal         func_25CE10
    ctx->pc = 0x362834u;
    SET_GPR_U32(ctx, 31, 0x36283Cu);
    ctx->pc = 0x362838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362834u;
    // 0x362838: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x362834u, 0x36283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36283Cu;
label_36283c:
    // 0x36283c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x36283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362840: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x362840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x362844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x362844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x362848: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x362848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36284c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x362850: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x362850u;
    SET_GPR_U32(ctx, 31, 0x362858u);
    ctx->pc = 0x362854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362850u;
    // 0x362854: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x362850u, 0x362858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362858u;
label_362858:
    // 0x362858: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x362858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36285c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36285cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362860: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x362860u;
    SET_GPR_U32(ctx, 31, 0x362868u);
    ctx->pc = 0x362864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362860u;
    // 0x362864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x362860u, 0x362868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362868u;
label_362868:
    // 0x362868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36286c: 0x0  nop
    ctx->pc = 0x36286cu;
    // NOP
label_362870:
    // 0x362870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x362870u;
    {
        const bool branch_taken_0x362870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362870u;
        // 0x362874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362870) {
            ctx->pc = 0x362888u;
            goto label_362888;
        }
    }
    ctx->pc = 0x362878u;
    // 0x362878: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x362878u;
    SET_GPR_U32(ctx, 31, 0x362880u);
    ctx->pc = 0x36287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362878u;
    // 0x36287c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x362878u, 0x362880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362880u;
label_362880:
    // 0x362880: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x362880u;
    {
        const bool branch_taken_0x362880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362880) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x362888u;
label_362888:
    // 0x362888: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x362888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x36288c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362890: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x362890u;
    SET_GPR_U32(ctx, 31, 0x362898u);
    ctx->pc = 0x362894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362890u;
    // 0x362894: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x362890u, 0x362898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362898u;
label_362898:
    // 0x362898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362898u;
    {
        const bool branch_taken_0x362898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362898u;
        // 0x36289c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362898) {
            ctx->pc = 0x3628A8u;
            goto label_3628a8;
        }
    }
    ctx->pc = 0x3628A0u;
    // 0x3628a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3628A0u;
    SET_GPR_U32(ctx, 31, 0x3628A8u);
    ctx->pc = 0x3628A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628A0u;
    // 0x3628a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3628A0u, 0x3628A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A8u;
label_3628a8:
    // 0x3628a8: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3628a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3628ac: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3628acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3628b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3628b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3628b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3628b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3628b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628bc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3628BCu;
    SET_GPR_U32(ctx, 31, 0x3628C4u);
    ctx->pc = 0x3628C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628BCu;
    // 0x3628c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3628BCu, 0x3628C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628C4u;
label_3628c4:
    // 0x3628c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3628c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3628c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3628c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3628cc: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x3628ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x3628d0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3628d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3628d4: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3628d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3628d8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3628d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3628dc: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3628dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3628e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3628e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3628e4: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3628E4u;
    SET_GPR_U32(ctx, 31, 0x3628ECu);
    ctx->pc = 0x3628E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628E4u;
    // 0x3628e8: 0x27aa00ec  addiu       $t2, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3628E4u, 0x3628ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628ECu;
label_3628ec:
    // 0x3628ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3628ECu;
    {
        const bool branch_taken_0x3628ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3628F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3628ECu;
        // 0x3628f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3628ec) {
            ctx->pc = 0x362900u;
            goto label_362900;
        }
    }
    ctx->pc = 0x3628F4u;
    // 0x3628f4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3628F4u;
    SET_GPR_U32(ctx, 31, 0x3628FCu);
    ctx->pc = 0x3628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3628F4u;
    // 0x3628f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3628F4u, 0x3628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628FCu;
label_3628fc:
    // 0x3628fc: 0x0  nop
    ctx->pc = 0x3628fcu;
    // NOP
label_362900:
    // 0x362900: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x362900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x362904: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x362904u;
    {
        const bool branch_taken_0x362904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x362908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362904u;
        // 0x362908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362904) {
            ctx->pc = 0x362918u;
            goto label_362918;
        }
    }
    ctx->pc = 0x36290Cu;
    // 0x36290c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x36290Cu;
    {
        const bool branch_taken_0x36290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36290c) {
            ctx->pc = 0x362998u;
            goto label_362998;
        }
    }
    ctx->pc = 0x362914u;
    // 0x362914: 0x0  nop
    ctx->pc = 0x362914u;
    // NOP
label_362918:
    // 0x362918: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x362918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x36291c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x36291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x362920: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x362920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x362924: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x362924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x362928: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x362928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x36292c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36292Cu;
    {
        const bool branch_taken_0x36292c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36292c) {
            ctx->pc = 0x362968u;
            goto label_362968;
        }
    }
    ctx->pc = 0x362934u;
    // 0x362934: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x362934u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x362938: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x362938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x36293c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36293Cu;
    {
        const bool branch_taken_0x36293c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36293Cu;
        // 0x362940: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36293c) {
            ctx->pc = 0x362990u;
            goto label_362990;
        }
    }
    ctx->pc = 0x362944u;
    // 0x362944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362948: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x362948u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x36294c: 0x0  nop
    ctx->pc = 0x36294cu;
    // NOP
    // 0x362950: 0x0  nop
    ctx->pc = 0x362950u;
    // NOP
    // 0x362954: 0x2010  mfhi        $a0
    ctx->pc = 0x362954u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x362958: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x362958u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x36295c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36295Cu;
    {
        const bool branch_taken_0x36295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36295Cu;
        // 0x362960: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36295c) {
            ctx->pc = 0x362990u;
            goto label_362990;
        }
    }
    ctx->pc = 0x362964u;
    // 0x362964: 0x0  nop
    ctx->pc = 0x362964u;
    // NOP
label_362968:
    // 0x362968: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x362968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x36296c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x36296cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x362970: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362970u;
    {
        const bool branch_taken_0x362970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362970) {
            ctx->pc = 0x362990u;
            goto label_362990;
        }
    }
    ctx->pc = 0x362978u;
    // 0x362978: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x362978u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x36297c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362980: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x362980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x362984: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x362984u;
    {
        const bool branch_taken_0x362984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362984u;
        // 0x362988: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362984) {
            ctx->pc = 0x362998u;
            goto label_362998;
        }
    }
    ctx->pc = 0x36298Cu;
    // 0x36298c: 0x0  nop
    ctx->pc = 0x36298cu;
    // NOP
label_362990:
    // 0x362990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362994: 0x0  nop
    ctx->pc = 0x362994u;
    // NOP
label_362998:
    // 0x362998: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x362998u;
    {
        const bool branch_taken_0x362998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362998u;
        // 0x36299c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362998) {
            ctx->pc = 0x3629A8u;
            goto label_3629a8;
        }
    }
    ctx->pc = 0x3629A0u;
    // 0x3629a0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3629A0u;
    SET_GPR_U32(ctx, 31, 0x3629A8u);
    ctx->pc = 0x3629A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629A0u;
    // 0x3629a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3629A0u, 0x3629A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629A8u;
label_3629a8:
    // 0x3629a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3629a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3629ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3629acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3629b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3629b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3629b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3629B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3629B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629B4u;
        // 0x3629b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3629B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3629BCu;
}
