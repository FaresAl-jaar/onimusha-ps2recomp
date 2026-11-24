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

// Function: sub_002790D0
// Address: 0x2790d0 - 0x279908
void sub_002790D0_0x2790d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002790D0_0x2790d0");
#endif

    switch (ctx->pc) {
        case 0x27910cu: goto label_27910c;
        case 0x279158u: goto label_279158;
        case 0x279178u: goto label_279178;
        case 0x2791a0u: goto label_2791a0;
        case 0x2791acu: goto label_2791ac;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791e0u: goto label_2791e0;
        case 0x27920cu: goto label_27920c;
        case 0x279230u: goto label_279230;
        case 0x27925cu: goto label_27925c;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792fcu: goto label_2792fc;
        case 0x27931cu: goto label_27931c;
        case 0x279350u: goto label_279350;
        case 0x27935cu: goto label_27935c;
        case 0x279370u: goto label_279370;
        case 0x27938cu: goto label_27938c;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793e8u: goto label_2793e8;
        case 0x279410u: goto label_279410;
        case 0x279480u: goto label_279480;
        case 0x279488u: goto label_279488;
        case 0x279498u: goto label_279498;
        case 0x2794b4u: goto label_2794b4;
        case 0x2794d0u: goto label_2794d0;
        case 0x2794f4u: goto label_2794f4;
        case 0x2794fcu: goto label_2794fc;
        case 0x279508u: goto label_279508;
        case 0x279524u: goto label_279524;
        case 0x279538u: goto label_279538;
        case 0x279568u: goto label_279568;
        case 0x27957cu: goto label_27957c;
        case 0x2795a4u: goto label_2795a4;
        case 0x2795d8u: goto label_2795d8;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795f8u: goto label_2795f8;
        case 0x279624u: goto label_279624;
        case 0x279634u: goto label_279634;
        case 0x279654u: goto label_279654;
        case 0x279674u: goto label_279674;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796f0u: goto label_2796f0;
        case 0x279718u: goto label_279718;
        case 0x279748u: goto label_279748;
        case 0x279774u: goto label_279774;
        case 0x2797a8u: goto label_2797a8;
        case 0x279858u: goto label_279858;
        case 0x279888u: goto label_279888;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798d4u: goto label_2798d4;
        default: break;
    }

    ctx->pc = 0x2790d0u;

    // 0x2790d0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2790d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2790d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2790d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2790d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2790d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2790dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2790dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2790e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2790e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2790e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2790e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2790e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2790e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2790ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2790ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2790f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2790f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2790f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2790f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2790f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2790f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2790fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2790fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x279100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279104: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x279104u;
    SET_GPR_U32(ctx, 31, 0x27910Cu);
    ctx->pc = 0x279108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279104u;
    // 0x279108: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x279104u, 0x27910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27910Cu;
label_27910c:
    // 0x27910c: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x27910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x279110: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x279110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x279114: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x279114u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x279118: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x279118u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x27911c: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x27911cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x279120: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x279120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x279124: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x279124u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279128: 0x86a400ae  lh          $a0, 0xAE($s5)
    ctx->pc = 0x279128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 174)));
    // 0x27912c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x27912cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x279130: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x279130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x279134: 0x8ea300d0  lw          $v1, 0xD0($s5)
    ctx->pc = 0x279134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x279138: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x279138u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x27913c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x27913cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x279140: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x279140u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x279144: 0x4843c  dsll32      $s0, $a0, 16
    ctx->pc = 0x279144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 16));
    // 0x279148: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x279148u;
    {
        const bool branch_taken_0x279148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279148u;
        // 0x27914c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279148) {
            ctx->pc = 0x2792E8u;
            goto label_2792e8;
        }
    }
    ctx->pc = 0x279150u;
    // 0x279150: 0xc09e644  jal         func_279910
    ctx->pc = 0x279150u;
    SET_GPR_U32(ctx, 31, 0x279158u);
    ctx->pc = 0x279154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279150u;
    // 0x279154: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x279150u, 0x279158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279158u;
label_279158:
    // 0x279158: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x279158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x27915c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x27915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x279160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x279160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279164: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x279164u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279168: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x279168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x27916c: 0x90480009  lbu         $t0, 0x9($v0)
    ctx->pc = 0x27916cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x279170: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x279170u;
    SET_GPR_U32(ctx, 31, 0x279178u);
    ctx->pc = 0x279174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279170u;
    // 0x279174: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x279170u, 0x279178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279178u;
label_279178:
    // 0x279178: 0x8ea300d0  lw          $v1, 0xD0($s5)
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x27917c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x27917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x279180: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x279180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x279184: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x279188: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x279188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27918c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x27918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x279190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279194: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x279194u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279198: 0xc074648  jal         func_1D1920
    ctx->pc = 0x279198u;
    SET_GPR_U32(ctx, 31, 0x2791A0u);
    ctx->pc = 0x27919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279198u;
    // 0x27919c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x279198u, 0x2791A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791A0u;
label_2791a0:
    // 0x2791a0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2791a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2791a4: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2791A4u;
    SET_GPR_U32(ctx, 31, 0x2791ACu);
    ctx->pc = 0x2791A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791A4u;
    // 0x2791a8: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2791A4u, 0x2791ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791ACu;
label_2791ac:
    // 0x2791ac: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2791acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2791b0: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2791b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2791b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2791b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2791b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791bc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2791BCu;
    SET_GPR_U32(ctx, 31, 0x2791C4u);
    ctx->pc = 0x2791C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791BCu;
    // 0x2791c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2791BCu, 0x2791C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791C4u;
label_2791c4:
    // 0x2791c4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2791c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2791c8: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x2791c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x2791cc: 0x9046000a  lbu         $a2, 0xA($v0)
    ctx->pc = 0x2791ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2791d0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2791D0u;
    {
        const bool branch_taken_0x2791d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2791D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791D0u;
        // 0x2791d4: 0x26a400e0  addiu       $a0, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791d0) {
            ctx->pc = 0x279200u;
            goto label_279200;
        }
    }
    ctx->pc = 0x2791D8u;
    // 0x2791d8: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2791D8u;
    SET_GPR_U32(ctx, 31, 0x2791E0u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2791D8u, 0x2791E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791E0u;
label_2791e0:
    // 0x2791e0: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x2791e0u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2791e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2791e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2791e8: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2791e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2791ec: 0x94540006  lhu         $s4, 0x6($v0)
    ctx->pc = 0x2791ecu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2791f0: 0x243b021  addu        $s6, $s2, $v1
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2791f4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2791f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2791f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2791F8u;
    {
        const bool branch_taken_0x2791f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791F8u;
        // 0x2791fc: 0x282b821  addu        $s7, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791f8) {
            ctx->pc = 0x279220u;
            goto label_279220;
        }
    }
    ctx->pc = 0x279200u;
label_279200:
    // 0x279200: 0x26a400e0  addiu       $a0, $s5, 0xE0
    ctx->pc = 0x279200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x279204: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x279204u;
    SET_GPR_U32(ctx, 31, 0x27920Cu);
    ctx->pc = 0x279208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279204u;
    // 0x279208: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x279204u, 0x27920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27920Cu;
label_27920c:
    // 0x27920c: 0x8fb201d0  lw          $s2, 0x1D0($sp)
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x279210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279214: 0x8fb401d4  lw          $s4, 0x1D4($sp)
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x279218: 0x8fb60200  lw          $s6, 0x200($sp)
    ctx->pc = 0x279218u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x27921c: 0x8fb70204  lw          $s7, 0x204($sp)
    ctx->pc = 0x27921cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_279220:
    // 0x279220: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x279224: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x279224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x279228: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x279228u;
    SET_GPR_U32(ctx, 31, 0x279230u);
    ctx->pc = 0x27922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279228u;
    // 0x27922c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x279228u, 0x279230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279230u;
label_279230:
    // 0x279230: 0x27a7021c  addiu       $a3, $sp, 0x21C
    ctx->pc = 0x279230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x279234: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x279238: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27923c: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x27923cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x279240: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x279240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x279244: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x279244u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x279248: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x279248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27924c: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x27924cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x279250: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x279254: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x279254u;
    SET_GPR_U32(ctx, 31, 0x27925Cu);
    ctx->pc = 0x279258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279254u;
    // 0x279258: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x279254u, 0x27925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27925Cu;
label_27925c:
    // 0x27925c: 0x862c0008  lh          $t4, 0x8($s1)
    ctx->pc = 0x27925cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x279260: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x279264: 0x862b000a  lh          $t3, 0xA($s1)
    ctx->pc = 0x279264u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x279268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x279268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27926c: 0x8ead00d0  lw          $t5, 0xD0($s5)
    ctx->pc = 0x27926cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x279270: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x279270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x279274: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x279274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x279278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27927c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x27927cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x279280: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x279280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279284: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x279284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279288: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x279288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27928c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x27928cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279290: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x279294: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x279294u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279298: 0x27a90210  addiu       $t1, $sp, 0x210
    ctx->pc = 0x279298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x27929c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27929cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2792a0: 0x27aa0230  addiu       $t2, $sp, 0x230
    ctx->pc = 0x2792a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2792a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2792a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2792a8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2792a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2792ac: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x2792acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2792b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2792b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2792b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2792b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2792b8: 0xc5b1000c  lwc1        $f17, 0xC($t5)
    ctx->pc = 0x2792b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2792bc: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x2792bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2792c0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2792c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2792c4: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2792C4u;
    SET_GPR_U32(ctx, 31, 0x2792CCu);
    ctx->pc = 0x2792C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792C4u;
    // 0x2792c8: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2792C4u, 0x2792CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792CCu;
label_2792cc:
    // 0x2792cc: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x2792CCu;
    SET_GPR_U32(ctx, 31, 0x2792D4u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x2792CCu, 0x2792D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792D4u;
label_2792d4:
    // 0x2792d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2792d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2792d8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2792d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2792dc: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x2792DCu;
    SET_GPR_U32(ctx, 31, 0x2792E4u);
    ctx->pc = 0x2792E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792DCu;
    // 0x2792e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x2792DCu, 0x2792E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792E4u;
label_2792e4:
    // 0x2792e4: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x2792e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_2792e8:
    // 0x2792e8: 0x8ea300d4  lw          $v1, 0xD4($s5)
    ctx->pc = 0x2792e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x2792ec: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2792ECu;
    {
        const bool branch_taken_0x2792ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792ECu;
        // 0x2792f0: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792ec) {
            ctx->pc = 0x2794A0u;
            goto label_2794a0;
        }
    }
    ctx->pc = 0x2792F4u;
    // 0x2792f4: 0xc09e644  jal         func_279910
    ctx->pc = 0x2792F4u;
    SET_GPR_U32(ctx, 31, 0x2792FCu);
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x2792F4u, 0x2792FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792FCu;
label_2792fc:
    // 0x2792fc: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x2792fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x279300: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x279304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x279304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279308: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x279308u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27930c: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x27930cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x279310: 0x90480009  lbu         $t0, 0x9($v0)
    ctx->pc = 0x279310u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x279314: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x279314u;
    SET_GPR_U32(ctx, 31, 0x27931Cu);
    ctx->pc = 0x279318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279314u;
    // 0x279318: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x279314u, 0x27931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27931Cu;
label_27931c:
    // 0x27931c: 0x8ea300d4  lw          $v1, 0xD4($s5)
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x279320: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x279320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x279324: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x279324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x279328: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x27932c: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x27932cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279330: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x279330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x279334: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x279334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x279338: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x279338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x27933c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x27933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x279340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279344: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x279344u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279348: 0xc074648  jal         func_1D1920
    ctx->pc = 0x279348u;
    SET_GPR_U32(ctx, 31, 0x279350u);
    ctx->pc = 0x27934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279348u;
    // 0x27934c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x279348u, 0x279350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279350u;
label_279350:
    // 0x279350: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x279350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279354: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x279354u;
    SET_GPR_U32(ctx, 31, 0x27935Cu);
    ctx->pc = 0x279358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279354u;
    // 0x279358: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x279354u, 0x27935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27935Cu;
label_27935c:
    // 0x27935c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x279360: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x279360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x279364: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x279364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279368: 0xc074648  jal         func_1D1920
    ctx->pc = 0x279368u;
    SET_GPR_U32(ctx, 31, 0x279370u);
    ctx->pc = 0x27936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279368u;
    // 0x27936c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x279368u, 0x279370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279374: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x279374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x279378: 0x9046000a  lbu         $a2, 0xA($v0)
    ctx->pc = 0x279378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x27937c: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x27937Cu;
    {
        const bool branch_taken_0x27937c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x279380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27937Cu;
        // 0x279380: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27937c) {
            ctx->pc = 0x2793B0u;
            goto label_2793b0;
        }
    }
    ctx->pc = 0x279384u;
    // 0x279384: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x279384u;
    SET_GPR_U32(ctx, 31, 0x27938Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x279384u, 0x27938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27938Cu;
label_27938c:
    // 0x27938c: 0x94540004  lhu         $s4, 0x4($v0)
    ctx->pc = 0x27938cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279394: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x279394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x279398: 0x94560006  lhu         $s6, 0x6($v0)
    ctx->pc = 0x279398u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x27939c: 0x283b821  addu        $s7, $s4, $v1
    ctx->pc = 0x27939cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2793a0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2793a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2793a4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2793a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2793A8u;
    {
        const bool branch_taken_0x2793a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793A8u;
        // 0x2793ac: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793a8) {
            ctx->pc = 0x2793D8u;
            goto label_2793d8;
        }
    }
    ctx->pc = 0x2793B0u;
label_2793b0:
    // 0x2793b0: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x2793b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x2793b4: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x2793B4u;
    SET_GPR_U32(ctx, 31, 0x2793BCu);
    ctx->pc = 0x2793B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793B4u;
    // 0x2793b8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x2793B4u, 0x2793BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793BCu;
label_2793bc:
    // 0x2793bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2793bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793c0: 0x8fb40170  lw          $s4, 0x170($sp)
    ctx->pc = 0x2793c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2793c4: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2793c8: 0x8fb60174  lw          $s6, 0x174($sp)
    ctx->pc = 0x2793c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2793cc: 0x8fb701a0  lw          $s7, 0x1A0($sp)
    ctx->pc = 0x2793ccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2793d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2793d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2793d4: 0x0  nop
    ctx->pc = 0x2793d4u;
    // NOP
label_2793d8:
    // 0x2793d8: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x2793d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x2793dc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2793dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2793e0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2793E0u;
    SET_GPR_U32(ctx, 31, 0x2793E8u);
    ctx->pc = 0x2793E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793E0u;
    // 0x2793e4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2793E0u, 0x2793E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793E8u;
label_2793e8:
    // 0x2793e8: 0x27a601bc  addiu       $a2, $sp, 0x1BC
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x2793ec: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x2793ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2793f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2793f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2793f4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2793f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2793f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2793fc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279400: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x279400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x279404: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x279404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x279408: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x279408u;
    SET_GPR_U32(ctx, 31, 0x279410u);
    ctx->pc = 0x27940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279408u;
    // 0x27940c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x279408u, 0x279410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279410u;
label_279410:
    // 0x279410: 0x864c0008  lh          $t4, 0x8($s2)
    ctx->pc = 0x279410u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x279414: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x279414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x279418: 0x864b000a  lh          $t3, 0xA($s2)
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x27941c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279420: 0x8ead00d4  lw          $t5, 0xD4($s5)
    ctx->pc = 0x279420u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
    // 0x279424: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x279424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x279428: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x279428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27942c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279430: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x279434: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x279434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279438: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x279438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27943c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x27943cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279440: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x279440u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279444: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x279444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x279448: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x279448u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27944c: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x27944cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x279450: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x279450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x279454: 0x27aa0230  addiu       $t2, $sp, 0x230
    ctx->pc = 0x279454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x279458: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x279458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27945c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x27945cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x279460: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x279460u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x279464: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x279464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27946c: 0xc5b1000c  lwc1        $f17, 0xC($t5)
    ctx->pc = 0x27946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x279470: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x279470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x279474: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x279474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x279478: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x279478u;
    SET_GPR_U32(ctx, 31, 0x279480u);
    ctx->pc = 0x27947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279478u;
    // 0x27947c: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x279478u, 0x279480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279480u;
label_279480:
    // 0x279480: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x279480u;
    SET_GPR_U32(ctx, 31, 0x279488u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x279480u, 0x279488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x27948c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x27948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x279490: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x279490u;
    SET_GPR_U32(ctx, 31, 0x279498u);
    ctx->pc = 0x279494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279490u;
    // 0x279494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x279490u, 0x279498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279498u;
label_279498:
    // 0x279498: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x279498u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x27949c: 0x0  nop
    ctx->pc = 0x27949cu;
    // NOP
label_2794a0:
    // 0x2794a0: 0x8ea300d8  lw          $v1, 0xD8($s5)
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x2794a4: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2794A4u;
    {
        const bool branch_taken_0x2794a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794A4u;
        // 0x2794a8: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794a4) {
            ctx->pc = 0x279640u;
            goto label_279640;
        }
    }
    ctx->pc = 0x2794ACu;
    // 0x2794ac: 0xc09e644  jal         func_279910
    ctx->pc = 0x2794ACu;
    SET_GPR_U32(ctx, 31, 0x2794B4u);
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x2794ACu, 0x2794B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794B4u;
label_2794b4:
    // 0x2794b4: 0x86a20112  lh          $v0, 0x112($s5)
    ctx->pc = 0x2794b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 274)));
    // 0x2794b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2794b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2794bc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2794BCu;
    {
        const bool branch_taken_0x2794bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2794C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794BCu;
        // 0x2794c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794bc) {
            ctx->pc = 0x2794D8u;
            goto label_2794d8;
        }
    }
    ctx->pc = 0x2794C4u;
    // 0x2794c4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2794c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2794c8: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x2794C8u;
    SET_GPR_U32(ctx, 31, 0x2794D0u);
    ctx->pc = 0x2794CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794C8u;
    // 0x2794cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x2794C8u, 0x2794D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794D0u;
label_2794d0:
    // 0x2794d0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2794D0u;
    {
        const bool branch_taken_0x2794d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2794d0) {
            ctx->pc = 0x279638u;
            goto label_279638;
        }
    }
    ctx->pc = 0x2794D8u;
label_2794d8:
    // 0x2794d8: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x2794d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x2794dc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2794dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2794e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2794e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794e4: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x2794e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2794e8: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x2794e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2794ec: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2794ECu;
    SET_GPR_U32(ctx, 31, 0x2794F4u);
    ctx->pc = 0x2794F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794ECu;
    // 0x2794f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2794ECu, 0x2794F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794F4u;
label_2794f4:
    // 0x2794f4: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x2794F4u;
    SET_GPR_U32(ctx, 31, 0x2794FCu);
    ctx->pc = 0x2794F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794F4u;
    // 0x2794f8: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x2794F4u, 0x2794FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794FCu;
label_2794fc:
    // 0x2794fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2794fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279500: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x279500u;
    SET_GPR_U32(ctx, 31, 0x279508u);
    ctx->pc = 0x279504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279500u;
    // 0x279504: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x279500u, 0x279508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279508u;
label_279508:
    // 0x279508: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x279508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27950c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27950cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279510: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x279510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x279514: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x279514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x279518: 0x9048000b  lbu         $t0, 0xB($v0)
    ctx->pc = 0x279518u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x27951c: 0xc074458  jal         func_1D1160
    ctx->pc = 0x27951Cu;
    SET_GPR_U32(ctx, 31, 0x279524u);
    ctx->pc = 0x279520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27951Cu;
    // 0x279520: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x27951Cu, 0x279524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279524u;
label_279524:
    // 0x279524: 0x8ea300d8  lw          $v1, 0xD8($s5)
    ctx->pc = 0x279524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x279528: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x27952c: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x27952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x279530: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x279530u;
    SET_GPR_U32(ctx, 31, 0x279538u);
    ctx->pc = 0x279534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279530u;
    // 0x279534: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x279530u, 0x279538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279538u;
label_279538:
    // 0x279538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x279538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x27953c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x27953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x279540: 0x8c23004c  lw          $v1, 0x4C($at)
    ctx->pc = 0x279540u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x279544: 0x108c3c  dsll32      $s1, $s0, 16
    ctx->pc = 0x279544u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 16));
    // 0x279548: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x279548u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x27954c: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x27954cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x279550: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x279550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x279554: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x279554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x279558: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x279558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x27955c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x27955cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x279560: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x279560u;
    SET_GPR_U32(ctx, 31, 0x279568u);
    ctx->pc = 0x279564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279560u;
    // 0x279564: 0xac22004c  sw          $v0, 0x4C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x279560u, 0x279568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279568u;
label_279568:
    // 0x279568: 0x8ea300d8  lw          $v1, 0xD8($s5)
    ctx->pc = 0x279568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x27956c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x27956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x279570: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x279570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x279574: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x279574u;
    SET_GPR_U32(ctx, 31, 0x27957Cu);
    ctx->pc = 0x279578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279574u;
    // 0x279578: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x279574u, 0x27957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27957Cu;
label_27957c:
    // 0x27957c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x27957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x279580: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x279580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x279584: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x279584u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x279588: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x279588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x27958c: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x27958cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x279590: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x279590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x279594: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x279598: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x27959c: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x27959Cu;
    SET_GPR_U32(ctx, 31, 0x2795A4u);
    ctx->pc = 0x2795A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27959Cu;
    // 0x2795a0: 0xac22006c  sw          $v0, 0x6C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x27959Cu, 0x2795A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795A4u;
label_2795a4:
    // 0x2795a4: 0x8ea300d8  lw          $v1, 0xD8($s5)
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x2795a8: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x2795ac: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2795acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2795b0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2795b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2795b4: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x2795b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x2795b8: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2795b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2795bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2795bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2795c0: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2795c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2795c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2795c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2795c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2795c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2795cc: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2795ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2795d0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2795D0u;
    SET_GPR_U32(ctx, 31, 0x2795D8u);
    ctx->pc = 0x2795D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795D0u;
    // 0x2795d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2795D0u, 0x2795D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795D8u;
label_2795d8:
    // 0x2795d8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2795d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2795dc: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2795DCu;
    SET_GPR_U32(ctx, 31, 0x2795E4u);
    ctx->pc = 0x2795E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795DCu;
    // 0x2795e0: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2795DCu, 0x2795E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795E4u;
label_2795e4:
    // 0x2795e4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x2795e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2795e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2795e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2795ec: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2795ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2795f0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2795F0u;
    SET_GPR_U32(ctx, 31, 0x2795F8u);
    ctx->pc = 0x2795F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2795F0u;
    // 0x2795f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2795F0u, 0x2795F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795F8u;
label_2795f8:
    // 0x2795f8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2795f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2795fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2795fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x279600: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x279604: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x279604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x279608: 0x8ea50118  lw          $a1, 0x118($s5)
    ctx->pc = 0x279608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
    // 0x27960c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x27960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279610: 0x34c70040  ori         $a3, $a2, 0x40
    ctx->pc = 0x279610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x279614: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x279614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279618: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x279618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27961c: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x27961Cu;
    SET_GPR_U32(ctx, 31, 0x279624u);
    ctx->pc = 0x279620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27961Cu;
    // 0x279620: 0x26a90110  addiu       $t1, $s5, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x27961Cu, 0x279624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279624u;
label_279624:
    // 0x279624: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x279628: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x279628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x27962c: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x27962Cu;
    SET_GPR_U32(ctx, 31, 0x279634u);
    ctx->pc = 0x279630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27962Cu;
    // 0x279630: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x27962Cu, 0x279634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279634u;
label_279634:
    // 0x279634: 0x0  nop
    ctx->pc = 0x279634u;
    // NOP
label_279638:
    // 0x279638: 0x3d2f021  addu        $fp, $fp, $s2
    ctx->pc = 0x279638u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x27963c: 0x0  nop
    ctx->pc = 0x27963cu;
    // NOP
label_279640:
    // 0x279640: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x279640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x279644: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x279644u;
    {
        const bool branch_taken_0x279644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279644u;
        // 0x279648: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279644) {
            ctx->pc = 0x2798A8u;
            goto label_2798a8;
        }
    }
    ctx->pc = 0x27964Cu;
    // 0x27964c: 0xc09e644  jal         func_279910
    ctx->pc = 0x27964Cu;
    SET_GPR_U32(ctx, 31, 0x279654u);
    ctx->pc = 0x279910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279910u, 0x27964Cu, 0x279654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279654u;
label_279654:
    // 0x279654: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x279654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x279658: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x279658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x27965c: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x27965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x279660: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x279660u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x279664: 0x90460005  lbu         $a2, 0x5($v0)
    ctx->pc = 0x279664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x279668: 0x90480011  lbu         $t0, 0x11($v0)
    ctx->pc = 0x279668u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x27966c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x27966Cu;
    SET_GPR_U32(ctx, 31, 0x279674u);
    ctx->pc = 0x279670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27966Cu;
    // 0x279670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x27966Cu, 0x279674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279674u;
label_279674:
    // 0x279674: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x279674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x279678: 0x1e2100  sll         $a0, $fp, 4
    ctx->pc = 0x279678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x27967c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x27967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x279680: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x279680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x279684: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x279684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x279688: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x279688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27968c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x27968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x279690: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x279690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x279694: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x279694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x279698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x279698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27969c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x27969cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2796a0: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2796A0u;
    SET_GPR_U32(ctx, 31, 0x2796A8u);
    ctx->pc = 0x2796A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796A0u;
    // 0x2796a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2796A0u, 0x2796A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796A8u;
label_2796a8:
    // 0x2796a8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2796a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2796ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2796acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2796b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2796b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2796b4: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2796B4u;
    SET_GPR_U32(ctx, 31, 0x2796BCu);
    ctx->pc = 0x2796B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796B4u;
    // 0x2796b8: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2796B4u, 0x2796BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796BCu;
label_2796bc:
    // 0x2796bc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2796bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2796c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2796c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2796c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2796c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2796c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2796cc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2796CCu;
    SET_GPR_U32(ctx, 31, 0x2796D4u);
    ctx->pc = 0x2796D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796CCu;
    // 0x2796d0: 0x2232021  addu        $a0, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2796CCu, 0x2796D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796D4u;
label_2796d4:
    // 0x2796d4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2796d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2796d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2796d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2796dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2796dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2796e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2796e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2796e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2796e8: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2796E8u;
    SET_GPR_U32(ctx, 31, 0x2796F0u);
    ctx->pc = 0x2796ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2796E8u;
    // 0x2796ec: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2796E8u, 0x2796F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796F0u;
label_2796f0:
    // 0x2796f0: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x2796f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x2796f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2796f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2796f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2796f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2796fc: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x2796FCu;
    {
        const bool branch_taken_0x2796fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x279700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796FCu;
        // 0x279700: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796fc) {
            ctx->pc = 0x279880u;
            goto label_279880;
        }
    }
    ctx->pc = 0x279704u;
    // 0x279704: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x279708: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x279708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x27970c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27970cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x279710: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x279710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x279714: 0x0  nop
    ctx->pc = 0x279714u;
    // NOP
label_279718:
    // 0x279718: 0x8ea4011c  lw          $a0, 0x11C($s5)
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x27971c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x279720: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x279724: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x279724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279728: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x279728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27972c: 0x1043004a  beq         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x27972Cu;
    {
        const bool branch_taken_0x27972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27972c) {
            ctx->pc = 0x279858u;
            goto label_279858;
        }
    }
    ctx->pc = 0x279734u;
    // 0x279734: 0x9266000a  lbu         $a2, 0xA($s3)
    ctx->pc = 0x279734u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x279738: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x279738u;
    {
        const bool branch_taken_0x279738 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x27973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279738u;
        // 0x27973c: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279738) {
            ctx->pc = 0x279768u;
            goto label_279768;
        }
    }
    ctx->pc = 0x279740u;
    // 0x279740: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x279740u;
    SET_GPR_U32(ctx, 31, 0x279748u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x279740u, 0x279748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279748u;
label_279748:
    // 0x279748: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x279748u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27974c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27974cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279750: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x279750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x279754: 0x94510006  lhu         $s1, 0x6($v0)
    ctx->pc = 0x279754u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x279758: 0x243b021  addu        $s6, $s2, $v1
    ctx->pc = 0x279758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27975c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x27975cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x279760: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x279760u;
    {
        const bool branch_taken_0x279760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279760u;
        // 0x279764: 0x222b821  addu        $s7, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279760) {
            ctx->pc = 0x279798u;
            goto label_279798;
        }
    }
    ctx->pc = 0x279768u;
label_279768:
    // 0x279768: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x279768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x27976c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x27976Cu;
    SET_GPR_U32(ctx, 31, 0x279774u);
    ctx->pc = 0x279770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27976Cu;
    // 0x279770: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x27976Cu, 0x279774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279774u;
label_279774:
    // 0x279774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279778: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x279778u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27977c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x27977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x279780: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x279780u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279784: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x279784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x279788: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x279788u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27978c: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x279790: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279794: 0x0  nop
    ctx->pc = 0x279794u;
    // NOP
label_279798:
    // 0x279798: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x279798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x27979c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x27979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2797a0: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2797A0u;
    SET_GPR_U32(ctx, 31, 0x2797A8u);
    ctx->pc = 0x2797A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797A0u;
    // 0x2797a4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2797A0u, 0x2797A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797A8u;
label_2797a8:
    // 0x2797a8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x2797ac: 0x866b0008  lh          $t3, 0x8($s3)
    ctx->pc = 0x2797acu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2797b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2797b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2797b4: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x2797b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x2797b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2797b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2797bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2797c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2797c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2797c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797c8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2797c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797cc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2797ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2797d0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2797d4: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2797d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2797d8: 0x1625818  mult        $t3, $t3, $v0
    ctx->pc = 0x2797d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2797dc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2797dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2797e0: 0xb1a03  sra         $v1, $t3, 8
    ctx->pc = 0x2797e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 8));
    // 0x2797e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2797e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2797e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2797e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2797ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2797ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2797f0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2797f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2797f4: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x2797f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2797f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2797f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2797fc: 0x860c000a  lh          $t4, 0xA($s0)
    ctx->pc = 0x2797fcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x279800: 0xc6710000  lwc1        $f17, 0x0($s3)
    ctx->pc = 0x279800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x279804: 0x860d0008  lh          $t5, 0x8($s0)
    ctx->pc = 0x279804u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279808: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x279808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x27980c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x27980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x279810: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x279810u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279814: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x279814u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279818: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x279818u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27981c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27981cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x279820: 0x84420024  lh          $v0, 0x24($v0)
    ctx->pc = 0x279820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x279824: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x279824u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x279828: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x279828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27982c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27982cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279830: 0x0  nop
    ctx->pc = 0x279830u;
    // NOP
    // 0x279834: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x279834u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x279838: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x279838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x27983c: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x27983cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279844: 0x0  nop
    ctx->pc = 0x279844u;
    // NOP
    // 0x279848: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x279848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x27984c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x27984cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x279850: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x279850u;
    SET_GPR_U32(ctx, 31, 0x279858u);
    ctx->pc = 0x279854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279850u;
    // 0x279854: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x279850u, 0x279858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279858u;
label_279858:
    // 0x279858: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x279858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27985c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x27985cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x279860: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x279860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x279864: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x279864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x279868: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x279868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x27986c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x27986cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x279870: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x279870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x279874: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x279874u;
    {
        const bool branch_taken_0x279874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279874) {
            ctx->pc = 0x279718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279718;
        }
    }
    ctx->pc = 0x27987Cu;
    // 0x27987c: 0x0  nop
    ctx->pc = 0x27987cu;
    // NOP
label_279880:
    // 0x279880: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x279880u;
    SET_GPR_U32(ctx, 31, 0x279888u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x279880u, 0x279888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279888u;
label_279888:
    // 0x279888: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x279888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27988c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27988cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x279890: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279894: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279898: 0xc074138  jal         func_1D04E0
    ctx->pc = 0x279898u;
    SET_GPR_U32(ctx, 31, 0x2798A0u);
    ctx->pc = 0x27989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279898u;
    // 0x27989c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04E0u, 0x279898u, 0x2798A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798A0u;
label_2798a0:
    // 0x2798a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2798a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2798a4: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x2798a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2798a8:
    // 0x2798a8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x2798a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2798ac: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x2798ACu;
    {
        const bool branch_taken_0x2798ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2798B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798ACu;
        // 0x2798b0: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2798ac) {
            ctx->pc = 0x2798D8u;
            goto label_2798d8;
        }
    }
    ctx->pc = 0x2798B4u;
    // 0x2798b4: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2798b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2798b8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2798B8u;
    SET_GPR_U32(ctx, 31, 0x2798C0u);
    ctx->pc = 0x2798BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798B8u;
    // 0x2798bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2798B8u, 0x2798C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798C0u;
label_2798c0:
    // 0x2798c0: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2798c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2798c4: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2798c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2798c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2798c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2798cc: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2798CCu;
    SET_GPR_U32(ctx, 31, 0x2798D4u);
    ctx->pc = 0x2798D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798CCu;
    // 0x2798d0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2798CCu, 0x2798D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798D4u;
label_2798d4:
    // 0x2798d4: 0x0  nop
    ctx->pc = 0x2798d4u;
    // NOP
label_2798d8:
    // 0x2798d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2798d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2798dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2798dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2798e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2798e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2798e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2798e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2798e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2798e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2798ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2798ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2798f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2798f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2798f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2798f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2798f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2798f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2798fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2798fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279900: 0x3e00008  jr          $ra
    ctx->pc = 0x279900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279900u;
        // 0x279904: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279908u;
}
