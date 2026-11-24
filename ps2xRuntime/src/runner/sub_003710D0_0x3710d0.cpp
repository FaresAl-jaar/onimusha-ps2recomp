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

// Function: sub_003710D0
// Address: 0x3710d0 - 0x37137c
void sub_003710D0_0x3710d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003710D0_0x3710d0");
#endif

    switch (ctx->pc) {
        case 0x371140u: goto label_371140;
        case 0x371178u: goto label_371178;
        case 0x3711b0u: goto label_3711b0;
        case 0x3711c0u: goto label_3711c0;
        case 0x3711f0u: goto label_3711f0;
        case 0x371214u: goto label_371214;
        case 0x37121cu: goto label_37121c;
        case 0x37123cu: goto label_37123c;
        case 0x371260u: goto label_371260;
        case 0x371268u: goto label_371268;
        case 0x37128cu: goto label_37128c;
        case 0x3712d0u: goto label_3712d0;
        case 0x3712f4u: goto label_3712f4;
        case 0x37131cu: goto label_37131c;
        case 0x37134cu: goto label_37134c;
        default: break;
    }

    ctx->pc = 0x3710d0u;

    // 0x3710d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3710d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3710d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3710d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3710d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3710d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3710dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3710dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3710e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3710e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3710e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3710e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3710e8: 0x30f6ffff  andi        $s6, $a3, 0xFFFF
    ctx->pc = 0x3710e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3710ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3710ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3710f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3710f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3710f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3710f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3710f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3710fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371100: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x371100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371108: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x371108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37110c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371110: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x371110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371114: 0x12c3008e  beq         $s6, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x371114u;
    {
        const bool branch_taken_0x371114 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x371118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371114u;
        // 0x371118: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371114) {
            ctx->pc = 0x371350u;
            goto label_371350;
        }
    }
    ctx->pc = 0x37111Cu;
    // 0x37111c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x37111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x371120: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x371120u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x371124: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x371124u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x371128: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x371128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x37112c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37112cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x371130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371134: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x371138: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x371138u;
    SET_GPR_U32(ctx, 31, 0x371140u);
    ctx->pc = 0x37113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371138u;
    // 0x37113c: 0x26f76a30  addiu       $s7, $s7, 0x6A30 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 27184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x371138u, 0x371140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371140u;
label_371140:
    // 0x371140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371144: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371144u;
    {
        const bool branch_taken_0x371144 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x371144) {
            ctx->pc = 0x371158u;
            goto label_371158;
        }
    }
    ctx->pc = 0x37114Cu;
    // 0x37114c: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x37114cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x371150: 0x26f76a18  addiu       $s7, $s7, 0x6A18
    ctx->pc = 0x371150u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 27160));
    // 0x371154: 0x0  nop
    ctx->pc = 0x371154u;
    // NOP
label_371158:
    // 0x371158: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x371158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x37115c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x37115cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x371160: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x371160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x371164: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x371164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x371168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x371168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37116c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371170: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x371170u;
    SET_GPR_U32(ctx, 31, 0x371178u);
    ctx->pc = 0x371174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371170u;
    // 0x371174: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x371170u, 0x371178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371178u;
label_371178:
    // 0x371178: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37117c: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37117Cu;
    {
        const bool branch_taken_0x37117c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x37117c) {
            ctx->pc = 0x371190u;
            goto label_371190;
        }
    }
    ctx->pc = 0x371184u;
    // 0x371184: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x371184u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x371188: 0x26f76a24  addiu       $s7, $s7, 0x6A24
    ctx->pc = 0x371188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 27172));
    // 0x37118c: 0x0  nop
    ctx->pc = 0x37118cu;
    // NOP
label_371190:
    // 0x371190: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371194: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x371194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371198: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x371198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x37119c: 0x2667ffff  addiu       $a3, $s3, -0x1
    ctx->pc = 0x37119cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3711a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3711a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711a4: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x3711a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3711a8: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3711A8u;
    SET_GPR_U32(ctx, 31, 0x3711B0u);
    ctx->pc = 0x3711ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711A8u;
    // 0x3711ac: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3711A8u, 0x3711B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711B0u;
label_3711b0:
    // 0x3711b0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x3711b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3711b4: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x3711b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3711b8: 0xc0d8fb4  jal         func_363ED0
    ctx->pc = 0x3711B8u;
    SET_GPR_U32(ctx, 31, 0x3711C0u);
    ctx->pc = 0x3711BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711B8u;
    // 0x3711bc: 0x26770015  addiu       $s7, $s3, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363ED0u, 0x3711B8u, 0x3711C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711C0u;
label_3711c0:
    // 0x3711c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3711c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711c4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3711c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3711c8: 0x2682005a  addiu       $v0, $s4, 0x5A
    ctx->pc = 0x3711c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 90));
    // 0x3711cc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3711ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3711d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3711d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3711d4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3711d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3711d8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x3711d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3711dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3711dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711e0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3711e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3711e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3711e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711e8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3711E8u;
    SET_GPR_U32(ctx, 31, 0x3711F0u);
    ctx->pc = 0x3711ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711E8u;
    // 0x3711ec: 0x25291948  addiu       $t1, $t1, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3711E8u, 0x3711F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711F0u;
label_3711f0:
    // 0x3711f0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3711f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3711f4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3711f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3711f8: 0x26860040  addiu       $a2, $s4, 0x40
    ctx->pc = 0x3711f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x3711fc: 0x26670001  addiu       $a3, $s3, 0x1
    ctx->pc = 0x3711fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x371200: 0x24846d18  addiu       $a0, $a0, 0x6D18
    ctx->pc = 0x371200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27928));
    // 0x371204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371208: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x371208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x37120c: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x37120Cu;
    SET_GPR_U32(ctx, 31, 0x371214u);
    ctx->pc = 0x371210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37120Cu;
    // 0x371210: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x37120Cu, 0x371214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371214u;
label_371214:
    // 0x371214: 0xc0ed944  jal         func_3B6510
    ctx->pc = 0x371214u;
    SET_GPR_U32(ctx, 31, 0x37121Cu);
    ctx->pc = 0x371218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371214u;
    // 0x371218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6510u, 0x371214u, 0x37121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37121Cu;
label_37121c:
    // 0x37121c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371220: 0x26c60006  addiu       $a2, $s6, 0x6
    ctx->pc = 0x371220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
    // 0x371224: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371228: 0x26e70005  addiu       $a3, $s7, 0x5
    ctx->pc = 0x371228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 5));
    // 0x37122c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371230: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x371230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371234: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x371234u;
    SET_GPR_U32(ctx, 31, 0x37123Cu);
    ctx->pc = 0x371238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371234u;
    // 0x371238: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x371234u, 0x37123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37123Cu;
label_37123c:
    // 0x37123c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x37123cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371240: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371244: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x371244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371248: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x371248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37124c: 0x24846c88  addiu       $a0, $a0, 0x6C88
    ctx->pc = 0x37124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27784));
    // 0x371250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371254: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x371254u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371258: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x371258u;
    SET_GPR_U32(ctx, 31, 0x371260u);
    ctx->pc = 0x37125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371258u;
    // 0x37125c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x371258u, 0x371260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371260u;
label_371260:
    // 0x371260: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x371260u;
    SET_GPR_U32(ctx, 31, 0x371268u);
    ctx->pc = 0x371264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371260u;
    // 0x371264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x371260u, 0x371268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371268u;
label_371268:
    // 0x371268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x371268u;
    {
        const bool branch_taken_0x371268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371268) {
            ctx->pc = 0x371290u;
            goto label_371290;
        }
    }
    ctx->pc = 0x371270u;
    // 0x371270: 0x90480004  lbu         $t0, 0x4($v0)
    ctx->pc = 0x371270u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x371274: 0x26840148  addiu       $a0, $s4, 0x148
    ctx->pc = 0x371274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 328));
    // 0x371278: 0x2665000a  addiu       $a1, $s3, 0xA
    ctx->pc = 0x371278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x37127c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37127cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371280: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x371280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x371284: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x371284u;
    SET_GPR_U32(ctx, 31, 0x37128Cu);
    ctx->pc = 0x371288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371284u;
    // 0x371288: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x371284u, 0x37128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37128Cu;
label_37128c:
    // 0x37128c: 0x0  nop
    ctx->pc = 0x37128cu;
    // NOP
label_371290:
    // 0x371290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x371290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371294: 0x1222001a  beq         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x371294u;
    {
        const bool branch_taken_0x371294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x371294) {
            ctx->pc = 0x371300u;
            goto label_371300;
        }
    }
    ctx->pc = 0x37129Cu;
    // 0x37129c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x37129Cu;
    {
        const bool branch_taken_0x37129c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37129Cu;
        // 0x3712a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37129c) {
            ctx->pc = 0x3712D8u;
            goto label_3712d8;
        }
    }
    ctx->pc = 0x3712A4u;
    // 0x3712a4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3712A4u;
    {
        const bool branch_taken_0x3712a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3712a4) {
            ctx->pc = 0x3712B8u;
            goto label_3712b8;
        }
    }
    ctx->pc = 0x3712ACu;
    // 0x3712ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3712ACu;
    {
        const bool branch_taken_0x3712ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3712ac) {
            ctx->pc = 0x371320u;
            goto label_371320;
        }
    }
    ctx->pc = 0x3712B4u;
    // 0x3712b4: 0x0  nop
    ctx->pc = 0x3712b4u;
    // NOP
label_3712b8:
    // 0x3712b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3712b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3712bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712c0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3712c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712c4: 0x26850046  addiu       $a1, $s4, 0x46
    ctx->pc = 0x3712c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 70));
    // 0x3712c8: 0xc0dc50c  jal         func_371430
    ctx->pc = 0x3712C8u;
    SET_GPR_U32(ctx, 31, 0x3712D0u);
    ctx->pc = 0x3712CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712C8u;
    // 0x3712cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371430u, 0x3712C8u, 0x3712D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712D0u;
label_3712d0:
    // 0x3712d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3712D0u;
    {
        const bool branch_taken_0x3712d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3712d0) {
            ctx->pc = 0x371320u;
            goto label_371320;
        }
    }
    ctx->pc = 0x3712D8u;
label_3712d8:
    // 0x3712d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3712d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3712dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3712e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712e4: 0x26850046  addiu       $a1, $s4, 0x46
    ctx->pc = 0x3712e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 70));
    // 0x3712e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3712e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712ec: 0xc0dc5e0  jal         func_371780
    ctx->pc = 0x3712ECu;
    SET_GPR_U32(ctx, 31, 0x3712F4u);
    ctx->pc = 0x3712F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3712ECu;
    // 0x3712f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371780u, 0x3712ECu, 0x3712F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712F4u;
label_3712f4:
    // 0x3712f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3712F4u;
    {
        const bool branch_taken_0x3712f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3712f4) {
            ctx->pc = 0x371320u;
            goto label_371320;
        }
    }
    ctx->pc = 0x3712FCu;
    // 0x3712fc: 0x0  nop
    ctx->pc = 0x3712fcu;
    // NOP
label_371300:
    // 0x371300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x371300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371304: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x371304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371308: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x371308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37130c: 0x26850046  addiu       $a1, $s4, 0x46
    ctx->pc = 0x37130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 70));
    // 0x371310: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x371310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371314: 0xc0dc5e0  jal         func_371780
    ctx->pc = 0x371314u;
    SET_GPR_U32(ctx, 31, 0x37131Cu);
    ctx->pc = 0x371318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371314u;
    // 0x371318: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371780u, 0x371314u, 0x37131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37131Cu;
label_37131c:
    // 0x37131c: 0x0  nop
    ctx->pc = 0x37131cu;
    // NOP
label_371320:
    // 0x371320: 0x240201f8  addiu       $v0, $zero, 0x1F8
    ctx->pc = 0x371320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x371324: 0x544023  subu        $t0, $v0, $s4
    ctx->pc = 0x371324u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x371328: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x37132c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x37132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371330: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x371330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371334: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x371334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x371338: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x371338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37133c: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x37133cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371340: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x371340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x371344: 0xc09c720  jal         func_271C80
    ctx->pc = 0x371344u;
    SET_GPR_U32(ctx, 31, 0x37134Cu);
    ctx->pc = 0x371348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371344u;
    // 0x371348: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x371344u, 0x37134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37134Cu;
label_37134c:
    // 0x37134c: 0x0  nop
    ctx->pc = 0x37134cu;
    // NOP
label_371350:
    // 0x371350: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x371350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x371354: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x371354u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371358: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x371358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37135c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37135cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37136c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37136cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371374: 0x3e00008  jr          $ra
    ctx->pc = 0x371374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371374u;
        // 0x371378: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37137Cu;
}
