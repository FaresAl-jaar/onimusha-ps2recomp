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

// Function: sub_001E85A0
// Address: 0x1e85a0 - 0x1e8aa8
void sub_001E85A0_0x1e85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E85A0_0x1e85a0");
#endif

    switch (ctx->pc) {
        case 0x1e8608u: goto label_1e8608;
        case 0x1e864cu: goto label_1e864c;
        case 0x1e8654u: goto label_1e8654;
        case 0x1e8660u: goto label_1e8660;
        case 0x1e8678u: goto label_1e8678;
        case 0x1e868cu: goto label_1e868c;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e86acu: goto label_1e86ac;
        case 0x1e8700u: goto label_1e8700;
        case 0x1e8714u: goto label_1e8714;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8738u: goto label_1e8738;
        case 0x1e87c0u: goto label_1e87c0;
        case 0x1e87dcu: goto label_1e87dc;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e8904u: goto label_1e8904;
        case 0x1e8920u: goto label_1e8920;
        case 0x1e8948u: goto label_1e8948;
        case 0x1e8958u: goto label_1e8958;
        case 0x1e899cu: goto label_1e899c;
        case 0x1e89bcu: goto label_1e89bc;
        case 0x1e89d8u: goto label_1e89d8;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a20u: goto label_1e8a20;
        case 0x1e8a4cu: goto label_1e8a4c;
        case 0x1e8a58u: goto label_1e8a58;
        case 0x1e8a70u: goto label_1e8a70;
        default: break;
    }

    ctx->pc = 0x1e85a0u;

    // 0x1e85a0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1e85a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e85a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e85a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e85ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e85acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e85b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e85b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e85b4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1e85b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e85bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e85c0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e85c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e85c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e85cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e85ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e85d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e85d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e85d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e85d8: 0xa7a800ae  sh          $t0, 0xAE($sp)
    ctx->pc = 0x1e85d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e85dc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e85dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e85e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E85E0u;
    {
        const bool branch_taken_0x1e85e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E0u;
        // 0x1e85e4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85e0) {
            ctx->pc = 0x1E85F0u;
            goto label_1e85f0;
        }
    }
    ctx->pc = 0x1E85E8u;
    // 0x1e85e8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1E85E8u;
    {
        const bool branch_taken_0x1e85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85E8u;
        // 0x1e85ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85e8) {
            ctx->pc = 0x1E8A78u;
            goto label_1e8a78;
        }
    }
    ctx->pc = 0x1E85F0u;
label_1e85f0:
    // 0x1e85f0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E85F0u;
    {
        const bool branch_taken_0x1e85f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85F0u;
        // 0x1e85f4: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85f0) {
            ctx->pc = 0x1E8600u;
            goto label_1e8600;
        }
    }
    ctx->pc = 0x1E85F8u;
    // 0x1e85f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E85F8u;
    {
        const bool branch_taken_0x1e85f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E85F8u;
        // 0x1e85fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e85f8) {
            ctx->pc = 0x1E8610u;
            goto label_1e8610;
        }
    }
    ctx->pc = 0x1E8600u;
label_1e8600:
    // 0x1e8600: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E8600u;
    SET_GPR_U32(ctx, 31, 0x1E8608u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E8600u, 0x1E8608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8608u;
label_1e8608:
    // 0x1e8608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e860c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8610:
    // 0x1e8610: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e8610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e8614: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e8614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e8618: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e861c: 0x92a5003a  lbu         $a1, 0x3A($s5)
    ctx->pc = 0x1e861cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 58)));
    // 0x1e8620: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x1e8620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x1e8624: 0x92a6003b  lbu         $a2, 0x3B($s5)
    ctx->pc = 0x1e8624u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
    // 0x1e8628: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e8628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e862c: 0x92a8003e  lbu         $t0, 0x3E($s5)
    ctx->pc = 0x1e862cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 62)));
    // 0x1e8630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8634: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8638: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1e8638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e863c: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x1e863cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e8640: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e8640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e8644: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E8644u;
    SET_GPR_U32(ctx, 31, 0x1E864Cu);
    ctx->pc = 0x1E8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8644u;
    // 0x1e8648: 0x41a021  addu        $s4, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E8644u, 0x1E864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E864Cu;
label_1e864c:
    // 0x1e864c: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1E864Cu;
    SET_GPR_U32(ctx, 31, 0x1E8654u);
    ctx->pc = 0x1E8650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E864Cu;
    // 0x1e8650: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1E864Cu, 0x1E8654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8654u;
label_1e8654:
    // 0x1e8654: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e8654u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8658: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1E8658u;
    SET_GPR_U32(ctx, 31, 0x1E8660u);
    ctx->pc = 0x1E865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8658u;
    // 0x1e865c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1E8658u, 0x1E8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8660u;
label_1e8660:
    // 0x1e8660: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1e8660u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1e8664: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e8664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8668: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1e866c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e866cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8670: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1E8670u;
    SET_GPR_U32(ctx, 31, 0x1E8678u);
    ctx->pc = 0x1E8674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8670u;
    // 0x1e8674: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1E8670u, 0x1E8678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8678u;
label_1e8678:
    // 0x1e8678: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e8678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e867c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e867cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8680: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e8684: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E8684u;
    SET_GPR_U32(ctx, 31, 0x1E868Cu);
    ctx->pc = 0x1E8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8684u;
    // 0x1e8688: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E8684u, 0x1E868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E868Cu;
label_1e868c:
    // 0x1e868c: 0x86a50040  lh          $a1, 0x40($s5)
    ctx->pc = 0x1e868cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1e8690: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1E8690u;
    SET_GPR_U32(ctx, 31, 0x1E8698u);
    ctx->pc = 0x1E8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8690u;
    // 0x1e8694: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1E8690u, 0x1E8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8698u;
label_1e8698:
    // 0x1e8698: 0xc6ac004c  lwc1        $f12, 0x4C($s5)
    ctx->pc = 0x1e8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e869c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e86a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e86a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e86a4: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x1E86A4u;
    SET_GPR_U32(ctx, 31, 0x1E86ACu);
    ctx->pc = 0x1E86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E86A4u;
    // 0x1e86a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x1E86A4u, 0x1E86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E86ACu;
label_1e86ac:
    // 0x1e86ac: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e86acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e86b0: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e86b4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e86b4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e86b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e86bc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e86c0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e86c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e86c4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e86c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e86c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e86c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e86cc: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x1e86ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x1e86d0: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e86d0u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e86d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e86d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e86d8: 0x7fa80170  sq          $t0, 0x170($sp)
    ctx->pc = 0x1e86d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 8));
    // 0x1e86dc: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e86dcu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e86e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e86e4: 0x7fa70180  sq          $a3, 0x180($sp)
    ctx->pc = 0x1e86e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 7));
    // 0x1e86e8: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e86e8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e86ec: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e86ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e86f0: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x1e86f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e86f4: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e86f4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e86f8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E86F8u;
    SET_GPR_U32(ctx, 31, 0x1E8700u);
    ctx->pc = 0x1E86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E86F8u;
    // 0x1e86fc: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E86F8u, 0x1E8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8700u;
label_1e8700:
    // 0x1e8700: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8704: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e8704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e8708: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1e8708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1e870c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E870Cu;
    SET_GPR_U32(ctx, 31, 0x1E8714u);
    ctx->pc = 0x1E8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E870Cu;
    // 0x1e8710: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E870Cu, 0x1E8714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8714u;
label_1e8714:
    // 0x1e8714: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8718: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e8718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e871c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E871Cu;
    SET_GPR_U32(ctx, 31, 0x1E8724u);
    ctx->pc = 0x1E8720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E871Cu;
    // 0x1e8720: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E871Cu, 0x1E8724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8724u;
label_1e8724:
    // 0x1e8724: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e8724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8728: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e872c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e8730: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E8730u;
    SET_GPR_U32(ctx, 31, 0x1E8738u);
    ctx->pc = 0x1E8734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8730u;
    // 0x1e8734: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E8730u, 0x1E8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8738u;
label_1e8738:
    // 0x1e8738: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x1e8738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x1e873c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8744: 0x7aa20050  lq          $v0, 0x50($s5)
    ctx->pc = 0x1e8744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1e8748: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1e8748u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 2));
    // 0x1e874c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8750: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1e8750u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1e8754: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e8754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e8758: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e875c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e875cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e8760: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1e8760u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1e8764: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8768: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x1e8768u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x1e876c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8770: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1e8770u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1e8774: 0x7aa20060  lq          $v0, 0x60($s5)
    ctx->pc = 0x1e8774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1e8778: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e877c: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1e877cu;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1e8780: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8784: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1e8784u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1e8788: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1e8788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e878c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e878cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8790: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e8790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e8794: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1e8794u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1e8798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e879c: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x1e879cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x1e87a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e87a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e87a4: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1e87a4u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1e87a8: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e87a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e87ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e87acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e87b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E87B0u;
    {
        const bool branch_taken_0x1e87b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87B0u;
        // 0x1e87b4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87b0) {
            ctx->pc = 0x1E87C8u;
            goto label_1e87c8;
        }
    }
    ctx->pc = 0x1E87B8u;
    // 0x1e87b8: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1E87B8u;
    SET_GPR_U32(ctx, 31, 0x1E87C0u);
    ctx->pc = 0x1E87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87B8u;
    // 0x1e87bc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1E87B8u, 0x1E87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87C0u;
label_1e87c0:
    // 0x1e87c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e87c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e87c4: 0x0  nop
    ctx->pc = 0x1e87c4u;
    // NOP
label_1e87c8:
    // 0x1e87c8: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1e87c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1e87cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e87d0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e87d4: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E87D4u;
    SET_GPR_U32(ctx, 31, 0x1E87DCu);
    ctx->pc = 0x1E87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87D4u;
    // 0x1e87d8: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E87D4u, 0x1E87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E87DCu;
label_1e87dc:
    // 0x1e87dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e87e0: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e87e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e87e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e87e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e87e8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E87E8u;
    {
        const bool branch_taken_0x1e87e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87e8) {
            ctx->pc = 0x1E8960u;
            goto label_1e8960;
        }
    }
    ctx->pc = 0x1E87F0u;
    // 0x1e87f0: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x1e87f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e87f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e87f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e87f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e87fc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8800: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e8804: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e8804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8808: 0x86e20008  lh          $v0, 0x8($s7)
    ctx->pc = 0x1e8808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e880c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e8810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8814: 0x0  nop
    ctx->pc = 0x1e8814u;
    // NOP
    // 0x1e8818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e881c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e881cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e8820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e8820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e8824: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e8824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e8828: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x1e8828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e882c: 0x86e2000a  lh          $v0, 0xA($s7)
    ctx->pc = 0x1e882cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x1e8830: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e8830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e8834: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1e8834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1e8838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e883c: 0x0  nop
    ctx->pc = 0x1e883cu;
    // NOP
    // 0x1e8840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e8840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e8844: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e8844u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e8848: 0x0  nop
    ctx->pc = 0x1e8848u;
    // NOP
    // 0x1e884c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e884cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e8850: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E8850u;
    SET_GPR_U32(ctx, 31, 0x1E8858u);
    ctx->pc = 0x1E8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8850u;
    // 0x1e8854: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E8850u, 0x1E8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8858u;
label_1e8858:
    // 0x1e8858: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e885c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e8860: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1e8860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e8864: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E8864u;
    SET_GPR_U32(ctx, 31, 0x1E886Cu);
    ctx->pc = 0x1E8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8864u;
    // 0x1e8868: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E8864u, 0x1E886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E886Cu;
label_1e886c:
    // 0x1e886c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e886cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8870: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e8870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e8874: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1e8874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1e8878: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E8878u;
    SET_GPR_U32(ctx, 31, 0x1E8880u);
    ctx->pc = 0x1E887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8878u;
    // 0x1e887c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E8878u, 0x1E8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8880u;
label_1e8880:
    // 0x1e8880: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8884: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e8884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e8888: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1e8888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1e888c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E888Cu;
    SET_GPR_U32(ctx, 31, 0x1E8894u);
    ctx->pc = 0x1E8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E888Cu;
    // 0x1e8890: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E888Cu, 0x1E8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8894u;
label_1e8894:
    // 0x1e8894: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e8894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8898: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e8898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e889c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e88a0: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1E88A0u;
    SET_GPR_U32(ctx, 31, 0x1E88A8u);
    ctx->pc = 0x1E88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88A0u;
    // 0x1e88a4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1E88A0u, 0x1E88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88A8u;
label_1e88a8:
    // 0x1e88a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e88a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e88ac: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e88acu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e88b0: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e88b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e88b4: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e88b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e88b8: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e88b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e88bc: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e88c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e88c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e88c4: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e88c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e88c8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e88c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e88cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e88ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e88d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E88D0u;
    {
        const bool branch_taken_0x1e88d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E88D0u;
        // 0x1e88d4: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88d0) {
            ctx->pc = 0x1E88F0u;
            goto label_1e88f0;
        }
    }
    ctx->pc = 0x1E88D8u;
    // 0x1e88d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e88d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88dc: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e88dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e88e0: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E88E0u;
    SET_GPR_U32(ctx, 31, 0x1E88E8u);
    ctx->pc = 0x1E88E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88E0u;
    // 0x1e88e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E88E0u, 0x1E88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E88E8u;
label_1e88e8:
    // 0x1e88e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E88E8u;
    {
        const bool branch_taken_0x1e88e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e88e8) {
            ctx->pc = 0x1E8908u;
            goto label_1e8908;
        }
    }
    ctx->pc = 0x1E88F0u;
label_1e88f0:
    // 0x1e88f0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e88f4: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e88f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e88f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e88f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88fc: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E88FCu;
    SET_GPR_U32(ctx, 31, 0x1E8904u);
    ctx->pc = 0x1E8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88FCu;
    // 0x1e8900: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E88FCu, 0x1E8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8904u;
label_1e8904:
    // 0x1e8904: 0x0  nop
    ctx->pc = 0x1e8904u;
    // NOP
label_1e8908:
    // 0x1e8908: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e890c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8910: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8914: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e8914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e8918: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E8918u;
    SET_GPR_U32(ctx, 31, 0x1E8920u);
    ctx->pc = 0x1E891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8918u;
    // 0x1e891c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E8918u, 0x1E8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8920u;
label_1e8920:
    // 0x1e8920: 0x8ea60090  lw          $a2, 0x90($s5)
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x1e8924: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e8924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8928: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e892c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e892cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8930: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8934: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e8934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8938: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e8938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e893c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8940: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E8940u;
    SET_GPR_U32(ctx, 31, 0x1E8948u);
    ctx->pc = 0x1E8944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8940u;
    // 0x1e8944: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E8940u, 0x1E8948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8948u;
label_1e8948:
    // 0x1e8948: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e894c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8950: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1E8950u;
    SET_GPR_U32(ctx, 31, 0x1E8958u);
    ctx->pc = 0x1E8954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8950u;
    // 0x1e8954: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1E8950u, 0x1E8958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8958u;
label_1e8958:
    // 0x1e8958: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E8958u;
    {
        const bool branch_taken_0x1e8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8958u;
        // 0x1e895c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8958) {
            ctx->pc = 0x1E8A08u;
            goto label_1e8a08;
        }
    }
    ctx->pc = 0x1E8960u;
label_1e8960:
    // 0x1e8960: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e8960u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e8964: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e8964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e8968: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e8968u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e896c: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e896cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e8970: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e8970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e8974: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e8978: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e8978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e897c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e897cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e8980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8984u;
    {
        const bool branch_taken_0x1e8984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8984u;
        // 0x1e8988: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8984) {
            ctx->pc = 0x1E89A8u;
            goto label_1e89a8;
        }
    }
    ctx->pc = 0x1E898Cu;
    // 0x1e898c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e898cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8990: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e8990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e8994: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E8994u;
    SET_GPR_U32(ctx, 31, 0x1E899Cu);
    ctx->pc = 0x1E8998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8994u;
    // 0x1e8998: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E8994u, 0x1E899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E899Cu;
label_1e899c:
    // 0x1e899c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E899Cu;
    {
        const bool branch_taken_0x1e899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e899c) {
            ctx->pc = 0x1E89C0u;
            goto label_1e89c0;
        }
    }
    ctx->pc = 0x1E89A4u;
    // 0x1e89a4: 0x0  nop
    ctx->pc = 0x1e89a4u;
    // NOP
label_1e89a8:
    // 0x1e89a8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e89a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e89ac: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e89acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e89b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e89b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89b4: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E89B4u;
    SET_GPR_U32(ctx, 31, 0x1E89BCu);
    ctx->pc = 0x1E89B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89B4u;
    // 0x1e89b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E89B4u, 0x1E89BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89BCu;
label_1e89bc:
    // 0x1e89bc: 0x0  nop
    ctx->pc = 0x1e89bcu;
    // NOP
label_1e89c0:
    // 0x1e89c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e89c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e89c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89cc: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e89ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e89d0: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E89D0u;
    SET_GPR_U32(ctx, 31, 0x1E89D8u);
    ctx->pc = 0x1E89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89D0u;
    // 0x1e89d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E89D0u, 0x1E89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E89D8u;
label_1e89d8:
    // 0x1e89d8: 0x8ea60090  lw          $a2, 0x90($s5)
    ctx->pc = 0x1e89d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x1e89dc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e89e0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e89e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e89e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e89e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e89ec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e89ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89f0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e89f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89f4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e89f8: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E89F8u;
    SET_GPR_U32(ctx, 31, 0x1E8A00u);
    ctx->pc = 0x1E89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E89F8u;
    // 0x1e89fc: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E89F8u, 0x1E8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A00u;
label_1e8a00:
    // 0x1e8a00: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e8a04: 0x0  nop
    ctx->pc = 0x1e8a04u;
    // NOP
label_1e8a08:
    // 0x1e8a08: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e8a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e8a0c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e8a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e8a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8A10u;
    {
        const bool branch_taken_0x1e8a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A10u;
        // 0x1e8a14: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a10) {
            ctx->pc = 0x1E8A28u;
            goto label_1e8a28;
        }
    }
    ctx->pc = 0x1E8A18u;
    // 0x1e8a18: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1E8A18u;
    SET_GPR_U32(ctx, 31, 0x1E8A20u);
    ctx->pc = 0x1E8A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A18u;
    // 0x1e8a1c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1E8A18u, 0x1E8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A20u;
label_1e8a20:
    // 0x1e8a20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e8a24: 0x0  nop
    ctx->pc = 0x1e8a24u;
    // NOP
label_1e8a28:
    // 0x1e8a28: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8A28u;
    {
        const bool branch_taken_0x1e8a28 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A28u;
        // 0x1e8a2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a28) {
            ctx->pc = 0x1E8A38u;
            goto label_1e8a38;
        }
    }
    ctx->pc = 0x1E8A30u;
    // 0x1e8a30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8A30u;
    {
        const bool branch_taken_0x1e8a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a30) {
            ctx->pc = 0x1E8A78u;
            goto label_1e8a78;
        }
    }
    ctx->pc = 0x1E8A38u;
label_1e8a38:
    // 0x1e8a38: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e8a3c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e8a40: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e8a44: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E8A44u;
    SET_GPR_U32(ctx, 31, 0x1E8A4Cu);
    ctx->pc = 0x1E8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A44u;
    // 0x1e8a48: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E8A44u, 0x1E8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A4Cu;
label_1e8a4c:
    // 0x1e8a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a50: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E8A50u;
    SET_GPR_U32(ctx, 31, 0x1E8A58u);
    ctx->pc = 0x1E8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A50u;
    // 0x1e8a54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E8A50u, 0x1E8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A58u;
label_1e8a58:
    // 0x1e8a58: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e8a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a60: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e8a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a68: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E8A68u;
    SET_GPR_U32(ctx, 31, 0x1E8A70u);
    ctx->pc = 0x1E8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A68u;
    // 0x1e8a6c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E8A68u, 0x1E8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A70u;
label_1e8a70:
    // 0x1e8a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a74: 0x0  nop
    ctx->pc = 0x1e8a74u;
    // NOP
label_1e8a78:
    // 0x1e8a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e8a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e8a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e8a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e8a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e8a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e8a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8AA0u;
        // 0x1e8aa4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8AA8u;
}
