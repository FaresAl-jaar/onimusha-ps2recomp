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

// Function: sub_003AD3B0
// Address: 0x3ad3b0 - 0x3ad5dc
void sub_003AD3B0_0x3ad3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD3B0_0x3ad3b0");
#endif

    switch (ctx->pc) {
        case 0x3ad434u: goto label_3ad434;
        case 0x3ad448u: goto label_3ad448;
        case 0x3ad45cu: goto label_3ad45c;
        case 0x3ad4c0u: goto label_3ad4c0;
        case 0x3ad4e4u: goto label_3ad4e4;
        case 0x3ad4f8u: goto label_3ad4f8;
        case 0x3ad520u: goto label_3ad520;
        case 0x3ad52cu: goto label_3ad52c;
        case 0x3ad558u: goto label_3ad558;
        default: break;
    }

    ctx->pc = 0x3ad3b0u;

    // 0x3ad3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ad3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ad3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ad3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ad3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ad3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ad3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad3c0: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x3ad3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x3ad3c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD3C4u;
    {
        const bool branch_taken_0x3ad3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3C4u;
        // 0x3ad3c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3c4) {
            ctx->pc = 0x3AD3D8u;
            goto label_3ad3d8;
        }
    }
    ctx->pc = 0x3AD3CCu;
    // 0x3ad3cc: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x3ad3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad3d0: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x3ad3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad3d4: 0x0  nop
    ctx->pc = 0x3ad3d4u;
    // NOP
label_3ad3d8:
    // 0x3ad3d8: 0x9204004c  lbu         $a0, 0x4C($s0)
    ctx->pc = 0x3ad3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ad3dc: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x3ad3dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3ad3e0: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x3AD3E0u;
    {
        const bool branch_taken_0x3ad3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3E0u;
        // 0x3ad3e4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3e0) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD3E8u;
    // 0x3ad3e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3ad3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ad3ec: 0x246329d0  addiu       $v1, $v1, 0x29D0
    ctx->pc = 0x3ad3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10704));
    // 0x3ad3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ad3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ad3f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ad3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ad3f8: 0x400008  jr          $v0
    ctx->pc = 0x3AD3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AD400u: goto label_3ad400;
            case 0x3AD440u: goto label_3ad440;
            case 0x3AD4F0u: goto label_3ad4f0;
            case 0x3AD510u: goto label_3ad510;
            case 0x3AD538u: goto label_3ad538;
            case 0x3AD5B0u: goto label_3ad5b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD3F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AD400u;
label_3ad400:
    // 0x3ad400: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x3ad400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x3ad404: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x3AD404u;
    {
        const bool branch_taken_0x3ad404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD404u;
        // 0x3ad408: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad404) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD40Cu;
    // 0x3ad40c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ad40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ad410: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x3ad410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ad414: 0xa200004f  sb          $zero, 0x4F($s0)
    ctx->pc = 0x3ad414u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad418: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x3ad418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad41c: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x3ad41cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad420: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x3ad420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3ad424: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD424u;
    {
        const bool branch_taken_0x3ad424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD424u;
        // 0x3ad428: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad424) {
            ctx->pc = 0x3AD438u;
            goto label_3ad438;
        }
    }
    ctx->pc = 0x3AD42Cu;
    // 0x3ad42c: 0xc04ccb0  jal         func_1332C0
    ctx->pc = 0x3AD42Cu;
    SET_GPR_U32(ctx, 31, 0x3AD434u);
    ctx->pc = 0x3AD430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD42Cu;
    // 0x3ad430: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332C0u, 0x3AD42Cu, 0x3AD434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD434u;
label_3ad434:
    // 0x3ad434: 0x0  nop
    ctx->pc = 0x3ad434u;
    // NOP
label_3ad438:
    // 0x3ad438: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3AD438u;
    {
        const bool branch_taken_0x3ad438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD438u;
        // 0x3ad43c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad438) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD440u;
label_3ad440:
    // 0x3ad440: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3AD440u;
    SET_GPR_U32(ctx, 31, 0x3AD448u);
    ctx->pc = 0x3AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD440u;
    // 0x3ad444: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3AD440u, 0x3AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD448u;
label_3ad448:
    // 0x3ad448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad44c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD44Cu;
    {
        const bool branch_taken_0x3ad44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD44Cu;
        // 0x3ad450: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad44c) {
            ctx->pc = 0x3AD468u;
            goto label_3ad468;
        }
    }
    ctx->pc = 0x3AD454u;
    // 0x3ad454: 0xc0554e4  jal         func_155390
    ctx->pc = 0x3AD454u;
    SET_GPR_U32(ctx, 31, 0x3AD45Cu);
    ctx->pc = 0x155390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155390u, 0x3AD454u, 0x3AD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD45Cu;
label_3ad45c:
    // 0x3ad45c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3AD45Cu;
    {
        const bool branch_taken_0x3ad45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad45c) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD464u;
    // 0x3ad464: 0x0  nop
    ctx->pc = 0x3ad464u;
    // NOP
label_3ad468:
    // 0x3ad468: 0x82070007  lb          $a3, 0x7($s0)
    ctx->pc = 0x3ad468u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ad46c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ad46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ad470: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ad470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ad474: 0x82060008  lb          $a2, 0x8($s0)
    ctx->pc = 0x3ad474u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ad478: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x3ad478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
    // 0x3ad47c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ad47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ad480: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x3ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3ad484: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x3ad484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3ad488: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3ad488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3ad48c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3ad48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ad490: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x3ad490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3ad494: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ad494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ad498: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3ad498u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3ad49c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ad49cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ad4a0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x3ad4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3ad4a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3ad4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ad4a8: 0x84660192  lh          $a2, 0x192($v1)
    ctx->pc = 0x3ad4a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 402)));
    // 0x3ad4ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3ad4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ad4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ad4b4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3ad4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ad4b8: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x3AD4B8u;
    SET_GPR_U32(ctx, 31, 0x3AD4C0u);
    ctx->pc = 0x3AD4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4B8u;
    // 0x3ad4bc: 0x24a529b0  addiu       $a1, $a1, 0x29B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x3AD4B8u, 0x3AD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4C0u;
label_3ad4c0:
    // 0x3ad4c0: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x3ad4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ad4c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ad4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad4c8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3ad4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3ad4cc: 0x3c0601c0  lui         $a2, 0x1C0
    ctx->pc = 0x3ad4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)448 << 16));
    // 0x3ad4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad4d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ad4d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ad4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ad4dc: 0xc0554c0  jal         func_155300
    ctx->pc = 0x3AD4DCu;
    SET_GPR_U32(ctx, 31, 0x3AD4E4u);
    ctx->pc = 0x3AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4DCu;
    // 0x3ad4e0: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155300u, 0x3AD4DCu, 0x3AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4E4u;
label_3ad4e4:
    // 0x3ad4e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3AD4E4u;
    {
        const bool branch_taken_0x3ad4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad4e4) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD4ECu;
    // 0x3ad4ec: 0x0  nop
    ctx->pc = 0x3ad4ecu;
    // NOP
label_3ad4f0:
    // 0x3ad4f0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3AD4F0u;
    SET_GPR_U32(ctx, 31, 0x3AD4F8u);
    ctx->pc = 0x3AD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD4F0u;
    // 0x3ad4f4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3AD4F0u, 0x3AD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD4F8u;
label_3ad4f8:
    // 0x3ad4f8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3AD4F8u;
    {
        const bool branch_taken_0x3ad4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad4f8) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD500u;
    // 0x3ad500: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x3ad500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ad504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ad504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ad508: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3AD508u;
    {
        const bool branch_taken_0x3ad508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD508u;
        // 0x3ad50c: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad508) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD510u;
label_3ad510:
    // 0x3ad510: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ad514: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x3ad514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad518: 0xc043898  jal         func_10E260
    ctx->pc = 0x3AD518u;
    SET_GPR_U32(ctx, 31, 0x3AD520u);
    ctx->pc = 0x3AD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD518u;
    // 0x3ad51c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x3AD518u, 0x3AD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD520u;
label_3ad520:
    // 0x3ad520: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x3ad520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x3ad524: 0xc06390c  jal         func_18E430
    ctx->pc = 0x3AD524u;
    SET_GPR_U32(ctx, 31, 0x3AD52Cu);
    ctx->pc = 0x3AD528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD524u;
    // 0x3ad528: 0x34858000  ori         $a1, $a0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E430u, 0x3AD524u, 0x3AD52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD52Cu;
label_3ad52c:
    // 0x3ad52c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3AD52Cu;
    {
        const bool branch_taken_0x3ad52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad52c) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD534u;
    // 0x3ad534: 0x0  nop
    ctx->pc = 0x3ad534u;
    // NOP
label_3ad538:
    // 0x3ad538: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3ad538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3ad53c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x3ad53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x3ad540: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3ad540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3ad544: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3ad544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ad548: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x3ad548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3ad54c: 0x24070a0e  addiu       $a3, $zero, 0xA0E
    ctx->pc = 0x3ad54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2574));
    // 0x3ad550: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x3AD550u;
    SET_GPR_U32(ctx, 31, 0x3AD558u);
    ctx->pc = 0x3AD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD550u;
    // 0x3ad554: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x3AD550u, 0x3AD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD558u;
label_3ad558:
    // 0x3ad558: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3ad558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x3ad55c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3ad55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3ad560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD560u;
    {
        const bool branch_taken_0x3ad560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad560) {
            ctx->pc = 0x3AD578u;
            goto label_3ad578;
        }
    }
    ctx->pc = 0x3AD568u;
    // 0x3ad568: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x3ad568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ad56c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ad56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ad570: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AD570u;
    {
        const bool branch_taken_0x3ad570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD570u;
        // 0x3ad574: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad570) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD578u;
label_3ad578:
    // 0x3ad578: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3ad578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x3ad57c: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x3ad57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x3ad580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ad584: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x3ad584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ad588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ad58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD58Cu;
    {
        const bool branch_taken_0x3ad58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD58Cu;
        // 0x3ad590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad58c) {
            ctx->pc = 0x3AD5A0u;
            goto label_3ad5a0;
        }
    }
    ctx->pc = 0x3AD594u;
    // 0x3ad594: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AD594u;
    {
        const bool branch_taken_0x3ad594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD594u;
        // 0x3ad598: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad594) {
            ctx->pc = 0x3AD5C0u;
            goto label_3ad5c0;
        }
    }
    ctx->pc = 0x3AD59Cu;
    // 0x3ad59c: 0x0  nop
    ctx->pc = 0x3ad59cu;
    // NOP
label_3ad5a0:
    // 0x3ad5a0: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x3ad5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad5a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AD5A4u;
    {
        const bool branch_taken_0x3ad5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5A4u;
        // 0x3ad5a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5a4) {
            ctx->pc = 0x3AD5C8u;
            goto label_3ad5c8;
        }
    }
    ctx->pc = 0x3AD5ACu;
    // 0x3ad5ac: 0x0  nop
    ctx->pc = 0x3ad5acu;
    // NOP
label_3ad5b0:
    // 0x3ad5b0: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x3ad5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ad5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad5b8: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x3ad5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ad5bc: 0x0  nop
    ctx->pc = 0x3ad5bcu;
    // NOP
label_3ad5c0:
    // 0x3ad5c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad5c4: 0x0  nop
    ctx->pc = 0x3ad5c4u;
    // NOP
label_3ad5c8:
    // 0x3ad5c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ad5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad5cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5D4u;
        // 0x3ad5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD5DCu;
}
