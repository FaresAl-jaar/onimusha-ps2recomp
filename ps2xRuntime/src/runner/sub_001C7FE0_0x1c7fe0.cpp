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

// Function: sub_001C7FE0
// Address: 0x1c7fe0 - 0x1c812c
void sub_001C7FE0_0x1c7fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7FE0_0x1c7fe0");
#endif

    switch (ctx->pc) {
        case 0x1c8014u: goto label_1c8014;
        case 0x1c801cu: goto label_1c801c;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c8034u: goto label_1c8034;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80e4u: goto label_1c80e4;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c8104u: goto label_1c8104;
        default: break;
    }

    ctx->pc = 0x1c7fe0u;

    // 0x1c7fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c7fe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c7fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c7fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7fec: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1c7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c7ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7ff4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c7ff8: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1c7ffc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c8000: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8004: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c8008: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x1c8008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c800c: 0xc041290  jal         func_104A40
    ctx->pc = 0x1C800Cu;
    SET_GPR_U32(ctx, 31, 0x1C8014u);
    ctx->pc = 0x1C8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C800Cu;
    // 0x1c8010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A40u, 0x1C800Cu, 0x1C8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8014u;
label_1c8014:
    // 0x1c8014: 0xc041294  jal         func_104A50
    ctx->pc = 0x1C8014u;
    SET_GPR_U32(ctx, 31, 0x1C801Cu);
    ctx->pc = 0x1C8018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8014u;
    // 0x1c8018: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A50u, 0x1C8014u, 0x1C801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C801Cu;
label_1c801c:
    // 0x1c801c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8020: 0xc041322  jal         func_104C88
    ctx->pc = 0x1C8020u;
    SET_GPR_U32(ctx, 31, 0x1C8028u);
    ctx->pc = 0x1C8024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8020u;
    // 0x1c8024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C88u, 0x1C8020u, 0x1C8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8028u;
label_1c8028:
    // 0x1c8028: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c802c: 0xc041386  jal         func_104E18
    ctx->pc = 0x1C802Cu;
    SET_GPR_U32(ctx, 31, 0x1C8034u);
    ctx->pc = 0x1C8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C802Cu;
    // 0x1c8030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E18u, 0x1C802Cu, 0x1C8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8034u;
label_1c8034:
    // 0x1c8034: 0x97a90020  lhu         $t1, 0x20($sp)
    ctx->pc = 0x1c8034u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8038: 0x24078000  addiu       $a3, $zero, -0x8000
    ctx->pc = 0x1c8038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1c803c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1c803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1c8040: 0x300c7fff  andi        $t4, $zero, 0x7FFF
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x1c8044: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x1c8044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c8048: 0x93a60025  lbu         $a2, 0x25($sp)
    ctx->pc = 0x1c8048u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 37)));
    // 0x1c804c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1c804cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1c8050: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1c8054: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1c8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1c8058: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x1c8058u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1c805c: 0x27a20027  addiu       $v0, $sp, 0x27
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
    // 0x1c8060: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1c8060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1c8064: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1c8064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1c8068: 0xec6025  or          $t4, $a3, $t4
    ctx->pc = 0x1c8068u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x1c806c: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x1c806cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8070: 0xa7ac0020  sh          $t4, 0x20($sp)
    ctx->pc = 0x1c8070u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 12));
    // 0x1c8074: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x1c8074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c8078: 0x93ac0021  lbu         $t4, 0x21($sp)
    ctx->pc = 0x1c8078u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x1c807c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c8080: 0xa3a30025  sb          $v1, 0x25($sp)
    ctx->pc = 0x1c8080u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8084: 0x2406ff0f  addiu       $a2, $zero, -0xF1
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1c8088: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x1c8088u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1c808c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c8090: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x1c8090u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1c8094: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x1c8094u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x1c8098: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c8098u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c809c: 0xa3aa0021  sb          $t2, 0x21($sp)
    ctx->pc = 0x1c809cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 10));
    // 0x1c80a0: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x1c80a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c80a4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1c80a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1c80a8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c80a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1c80ac: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x1c80acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c80b0: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1c80b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c80b4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1c80b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1c80b8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c80b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1c80bc: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x1c80bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c80c0: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x1c80c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c80c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c80c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c80c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1c80c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c80cc: 0xa3a20028  sb          $v0, 0x28($sp)
    ctx->pc = 0x1c80ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c80d0: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1c80d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c80d4: 0xc0413a8  jal         func_104EA0
    ctx->pc = 0x1C80D4u;
    SET_GPR_U32(ctx, 31, 0x1C80DCu);
    ctx->pc = 0x1C80D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80D4u;
    // 0x1c80d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EA0u, 0x1C80D4u, 0x1C80DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80DCu;
label_1c80dc:
    // 0x1c80dc: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x1C80DCu;
    SET_GPR_U32(ctx, 31, 0x1C80E4u);
    ctx->pc = 0x1C80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80DCu;
    // 0x1c80e0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x1C80DCu, 0x1C80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80E4u;
label_1c80e4:
    // 0x1c80e4: 0xc04139c  jal         func_104E70
    ctx->pc = 0x1C80E4u;
    SET_GPR_U32(ctx, 31, 0x1C80ECu);
    ctx->pc = 0x1C80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80E4u;
    // 0x1c80e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104E70u, 0x1C80E4u, 0x1C80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80ECu;
label_1c80ec:
    // 0x1c80ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c80f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c80f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c80f4: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x1C80F4u;
    SET_GPR_U32(ctx, 31, 0x1C80FCu);
    ctx->pc = 0x1C80F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80F4u;
    // 0x1c80f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x1C80F4u, 0x1C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80FCu;
label_1c80fc:
    // 0x1c80fc: 0xc041298  jal         func_104A60
    ctx->pc = 0x1C80FCu;
    SET_GPR_U32(ctx, 31, 0x1C8104u);
    ctx->pc = 0x1C8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80FCu;
    // 0x1c8100: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x1C80FCu, 0x1C8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8104u;
label_1c8104:
    // 0x1c8104: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c8108: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1c810c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c8110: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8114: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x1c8114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x1c8118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c811c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8124: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8124u;
        // 0x1c8128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C812Cu;
}
