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

// Function: sub_003F6080
// Address: 0x3f6080 - 0x3f6294
void sub_003F6080_0x3f6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6080_0x3f6080");
#endif

    switch (ctx->pc) {
        case 0x3f60acu: goto label_3f60ac;
        case 0x3f60c0u: goto label_3f60c0;
        case 0x3f60ccu: goto label_3f60cc;
        case 0x3f60e0u: goto label_3f60e0;
        case 0x3f60f4u: goto label_3f60f4;
        case 0x3f6108u: goto label_3f6108;
        case 0x3f6118u: goto label_3f6118;
        case 0x3f6130u: goto label_3f6130;
        case 0x3f61e8u: goto label_3f61e8;
        case 0x3f6254u: goto label_3f6254;
        case 0x3f627cu: goto label_3f627c;
        default: break;
    }

    ctx->pc = 0x3f6080u;

    // 0x3f6080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3f6084: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3f6084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3f6088: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3f608c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x3f608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3f6090: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f6090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3f6094: 0x344600c0  ori         $a2, $v0, 0xC0
    ctx->pc = 0x3f6094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x3f6098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f6098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f609c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f60a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f60a4: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F60A4u;
    SET_GPR_U32(ctx, 31, 0x3F60ACu);
    ctx->pc = 0x3F60A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60A4u;
    // 0x3f60a8: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F60A4u, 0x3F60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60ACu;
label_3f60ac:
    // 0x3f60ac: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3f60acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3f60b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f60b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f60b4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x3f60b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3f60b8: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F60B8u;
    SET_GPR_U32(ctx, 31, 0x3F60C0u);
    ctx->pc = 0x3F60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60B8u;
    // 0x3f60bc: 0x3446020b  ori         $a2, $v0, 0x20B (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F60B8u, 0x3F60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60C0u;
label_3f60c0:
    // 0x3f60c0: 0x3404fffc  ori         $a0, $zero, 0xFFFC
    ctx->pc = 0x3f60c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3f60c4: 0xc0fd4e0  jal         func_3F5380
    ctx->pc = 0x3F60C4u;
    SET_GPR_U32(ctx, 31, 0x3F60CCu);
    ctx->pc = 0x3F60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60C4u;
    // 0x3f60c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5380u, 0x3F60C4u, 0x3F60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60CCu;
label_3f60cc:
    // 0x3f60cc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3f60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3f60d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f60d4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x3f60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3f60d8: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F60D8u;
    SET_GPR_U32(ctx, 31, 0x3F60E0u);
    ctx->pc = 0x3F60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60D8u;
    // 0x3f60dc: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F60D8u, 0x3F60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60E0u;
label_3f60e0:
    // 0x3f60e0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3f60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3f60e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f60e8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x3f60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3f60ec: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F60ECu;
    SET_GPR_U32(ctx, 31, 0x3F60F4u);
    ctx->pc = 0x3F60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60ECu;
    // 0x3f60f0: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F60ECu, 0x3F60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60F4u;
label_3f60f4:
    // 0x3f60f4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3f60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3f60f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f60fc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x3f60fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3f6100: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F6100u;
    SET_GPR_U32(ctx, 31, 0x3F6108u);
    ctx->pc = 0x3F6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6100u;
    // 0x3f6104: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F6100u, 0x3F6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6108u;
label_3f6108:
    // 0x3f6108: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f6108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f610c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3f610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f6110: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F6110u;
    SET_GPR_U32(ctx, 31, 0x3F6118u);
    ctx->pc = 0x3F6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6110u;
    // 0x3f6114: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F6110u, 0x3F6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6118u;
label_3f6118:
    // 0x3f6118: 0x9242023b  lbu         $v0, 0x23B($s2)
    ctx->pc = 0x3f6118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 571)));
    // 0x3f611c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x3f611cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f6120: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x3F6120u;
    {
        const bool branch_taken_0x3f6120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6120u;
        // 0x3f6124: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6120) {
            ctx->pc = 0x3F6268u;
            goto label_3f6268;
        }
    }
    ctx->pc = 0x3F6128u;
    // 0x3f6128: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3f6128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f612c: 0x0  nop
    ctx->pc = 0x3f612cu;
    // NOP
label_3f6130:
    // 0x3f6130: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x3f6130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3f6134: 0x86080004  lh          $t0, 0x4($s0)
    ctx->pc = 0x3f6134u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f6138: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3f6138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3f613c: 0x860b0006  lh          $t3, 0x6($s0)
    ctx->pc = 0x3f613cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3f6140: 0x344c0008  ori         $t4, $v0, 0x8
    ctx->pc = 0x3f6140u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3f6144: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3f6144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3f6148: 0x9609000a  lhu         $t1, 0xA($s0)
    ctx->pc = 0x3f6148u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3f614c: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3f614cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f6150: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x3f6150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3f6154: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x3f6154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x3f6158: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3f6158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f615c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3f615cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3f6160: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x3f6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3f6164: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x3f6164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3f6168: 0xb1d00  sll         $v1, $t3, 20
    ctx->pc = 0x3f6168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
    // 0x3f616c: 0x8c420200  lw          $v0, 0x200($v0)
    ctx->pc = 0x3f616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    // 0x3f6170: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3f6170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f6174: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x3f6174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3f6178: 0x8c5825  or          $t3, $a0, $t4
    ctx->pc = 0x3f6178u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x3f617c: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x3f617cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x3f6180: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x3f6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3f6184: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x3f6184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x3f6188: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f6188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3f618c: 0x5443c  dsll32      $t0, $a1, 16
    ctx->pc = 0x3f618cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3f6190: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3f6190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3f6194: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3f6194u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3f6198: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x3f6198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x3f619c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3f619cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x3f61a0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3f61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3f61a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3f61a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3f61a8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x3f61a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x3f61ac: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3f61acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3f61b0: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x3f61b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3f61b4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3f61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3f61b8: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x3f61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x3f61bc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3f61bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3f61c0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3f61c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f61c4: 0x86420244  lh          $v0, 0x244($s2)
    ctx->pc = 0x3f61c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x3f61c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3f61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3f61cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3f61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3f61d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3f61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f61d4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3f61d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3f61d8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3f61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3f61dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3f61dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3f61e0: 0xc0fd7a0  jal         func_3F5E80
    ctx->pc = 0x3F61E0u;
    SET_GPR_U32(ctx, 31, 0x3F61E8u);
    ctx->pc = 0x3F61E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F61E0u;
    // 0x3f61e4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F5E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5E80u, 0x3F61E0u, 0x3F61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F61E8u;
label_3f61e8:
    // 0x3f61e8: 0x86090004  lh          $t1, 0x4($s0)
    ctx->pc = 0x3f61e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3f61ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f61f0: 0x96070008  lhu         $a3, 0x8($s0)
    ctx->pc = 0x3f61f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f61f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3f61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f61f8: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x3f61f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3f61fc: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x3f61fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3f6200: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x3f6200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3f6204: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x3f6204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3f6208: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3f6208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3f620c: 0x33138  dsll        $a2, $v1, 4
    ctx->pc = 0x3f620cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 4);
    // 0x3f6210: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3f6210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3f6214: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3f6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3f6218: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3f6218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3f621c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3f621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3f6220: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3f6220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3f6224: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f6224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3f6228: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3f6228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3f622c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f6230: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x3f6230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x3f6234: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x3f6234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x3f6238: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3f6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3f623c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3f623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3f6240: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3f6240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3f6244: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3f6244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3f6248: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3f6248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x3f624c: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F624Cu;
    SET_GPR_U32(ctx, 31, 0x3F6254u);
    ctx->pc = 0x3F6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F624Cu;
    // 0x3f6250: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F624Cu, 0x3F6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6254u;
label_3f6254:
    // 0x3f6254: 0x9242023b  lbu         $v0, 0x23B($s2)
    ctx->pc = 0x3f6254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 571)));
    // 0x3f6258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f6258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f625c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3f625cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f6260: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3F6260u;
    {
        const bool branch_taken_0x3f6260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6260u;
        // 0x3f6264: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6260) {
            ctx->pc = 0x3F6130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6130;
        }
    }
    ctx->pc = 0x3F6268u;
label_3f6268:
    // 0x3f6268: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x3f6268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3f626c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3f626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f6270: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x3f6270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3f6274: 0xc0fd800  jal         func_3F6000
    ctx->pc = 0x3F6274u;
    SET_GPR_U32(ctx, 31, 0x3F627Cu);
    ctx->pc = 0x3F6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6274u;
    // 0x3f6278: 0x344600c0  ori         $a2, $v0, 0xC0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6000u, 0x3F6274u, 0x3F627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F627Cu;
label_3f627c:
    // 0x3f627c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f6280: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f6280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f6284: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f6284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6288: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f6288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f628c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F628Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F628Cu;
        // 0x3f6290: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F628Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6294u;
}
