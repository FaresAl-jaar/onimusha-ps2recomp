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

// Function: sub_00392460
// Address: 0x392460 - 0x392638
void sub_00392460_0x392460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392460_0x392460");
#endif

    switch (ctx->pc) {
        case 0x3924a4u: goto label_3924a4;
        case 0x3924d0u: goto label_3924d0;
        case 0x3924f0u: goto label_3924f0;
        case 0x392504u: goto label_392504;
        case 0x392514u: goto label_392514;
        case 0x392528u: goto label_392528;
        case 0x39258cu: goto label_39258c;
        default: break;
    }

    ctx->pc = 0x392460u;

    // 0x392460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x392460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x392464: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x392464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x392468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x392468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39246c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x39246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x392470: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x392470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x392474: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x392474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x392478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x392478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39247c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39247cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x392480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x392484: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x392484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392488: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x392488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39248c: 0x26c40014  addiu       $a0, $s6, 0x14
    ctx->pc = 0x39248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x392490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x392490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x392494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x392494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x392498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39249c: 0xc049590  jal         func_125640
    ctx->pc = 0x39249Cu;
    SET_GPR_U32(ctx, 31, 0x3924A4u);
    ctx->pc = 0x3924A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39249Cu;
    // 0x3924a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x39249Cu, 0x3924A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3924A4u;
label_3924a4:
    // 0x3924a4: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x3924a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
    // 0x3924a8: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x3924a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
    // 0x3924ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3924acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3924b0: 0x26948f90  addiu       $s4, $s4, -0x7070
    ctx->pc = 0x3924b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938512));
    // 0x3924b4: 0xaec00010  sw          $zero, 0x10($s6)
    ctx->pc = 0x3924b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 0));
    // 0x3924b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3924b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3924bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3924bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3924c0: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x3924c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3924c4: 0x12a00050  beqz        $s5, . + 4 + (0x50 << 2)
    ctx->pc = 0x3924C4u;
    {
        const bool branch_taken_0x3924c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3924C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924C4u;
        // 0x3924c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924c4) {
            ctx->pc = 0x392608u;
            goto label_392608;
        }
    }
    ctx->pc = 0x3924CCu;
    // 0x3924cc: 0x0  nop
    ctx->pc = 0x3924ccu;
    // NOP
label_3924d0:
    // 0x3924d0: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x3924d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x3924d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3924d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3924d8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3924D8u;
    {
        const bool branch_taken_0x3924d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3924d8) {
            ctx->pc = 0x3925E8u;
            goto label_3925e8;
        }
    }
    ctx->pc = 0x3924E0u;
    // 0x3924e0: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x3924e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x3924e4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3924e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3924e8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x3924E8u;
    {
        const bool branch_taken_0x3924e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3924ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924E8u;
        // 0x3924ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924e8) {
            ctx->pc = 0x3925E8u;
            goto label_3925e8;
        }
    }
    ctx->pc = 0x3924F0u;
label_3924f0:
    // 0x3924f0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3924f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3924f4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3924f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3924f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3924f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3924fc: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x3924FCu;
    SET_GPR_U32(ctx, 31, 0x392504u);
    ctx->pc = 0x392500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3924FCu;
    // 0x392500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x3924FCu, 0x392504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392504u;
label_392504:
    // 0x392504: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x392504u;
    {
        const bool branch_taken_0x392504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392504u;
        // 0x392508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392504) {
            ctx->pc = 0x3925D0u;
            goto label_3925d0;
        }
    }
    ctx->pc = 0x39250Cu;
    // 0x39250c: 0xc0e47b0  jal         func_391EC0
    ctx->pc = 0x39250Cu;
    SET_GPR_U32(ctx, 31, 0x392514u);
    ctx->pc = 0x391EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391EC0u, 0x39250Cu, 0x392514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392514u;
label_392514:
    // 0x392514: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x392514u;
    {
        const bool branch_taken_0x392514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392514u;
        // 0x392518: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392514) {
            ctx->pc = 0x3925D0u;
            goto label_3925d0;
        }
    }
    ctx->pc = 0x39251Cu;
    // 0x39251c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392520: 0xc0bccf8  jal         func_2F33E0
    ctx->pc = 0x392520u;
    SET_GPR_U32(ctx, 31, 0x392528u);
    ctx->pc = 0x392524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392520u;
    // 0x392524: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33E0u, 0x392520u, 0x392528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392528u;
label_392528:
    // 0x392528: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x392528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39252c: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x39252cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x392530: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x392530u;
    {
        const bool branch_taken_0x392530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392530) {
            ctx->pc = 0x392548u;
            goto label_392548;
        }
    }
    ctx->pc = 0x392538u;
    // 0x392538: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x392538u;
    {
        const bool branch_taken_0x392538 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392538u;
        // 0x39253c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392538) {
            ctx->pc = 0x392548u;
            goto label_392548;
        }
    }
    ctx->pc = 0x392540u;
    // 0x392540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x392540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392544: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x392544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_392548:
    // 0x392548: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x392548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x39254c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x39254Cu;
    {
        const bool branch_taken_0x39254c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39254c) {
            ctx->pc = 0x3925B8u;
            goto label_3925b8;
        }
    }
    ctx->pc = 0x392554u;
    // 0x392554: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x392554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x392558: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x392558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x39255c: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x39255cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x392560: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x392560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x392564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x392564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x392568: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x392568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x39256c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x39256cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x392570: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x392570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x392574: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x392574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x392578: 0xa4730014  sh          $s3, 0x14($v1)
    ctx->pc = 0x392578u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 19));
    // 0x39257c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392580: 0x247e0014  addiu       $fp, $v1, 0x14
    ctx->pc = 0x392580u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x392584: 0xc0bd294  jal         func_2F4A50
    ctx->pc = 0x392584u;
    SET_GPR_U32(ctx, 31, 0x39258Cu);
    ctx->pc = 0x392588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392584u;
    // 0x392588: 0xa0620016  sb          $v0, 0x16($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A50u, 0x392584u, 0x39258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39258Cu;
label_39258c:
    // 0x39258c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39258Cu;
    {
        const bool branch_taken_0x39258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39258Cu;
        // 0x392590: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39258c) {
            ctx->pc = 0x3925A8u;
            goto label_3925a8;
        }
    }
    ctx->pc = 0x392594u;
    // 0x392594: 0xa3c30002  sb          $v1, 0x2($fp)
    ctx->pc = 0x392594u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x392598: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x392598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x39259c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3925a0: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x3925a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x3925a4: 0x0  nop
    ctx->pc = 0x3925a4u;
    // NOP
label_3925a8:
    // 0x3925a8: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x3925a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3925ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3925acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3925b0: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x3925b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
    // 0x3925b4: 0x0  nop
    ctx->pc = 0x3925b4u;
    // NOP
label_3925b8:
    // 0x3925b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3925b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3925bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3925bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3925c0: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3925C0u;
    {
        const bool branch_taken_0x3925c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3925c0) {
            ctx->pc = 0x3925D0u;
            goto label_3925d0;
        }
    }
    ctx->pc = 0x3925C8u;
    // 0x3925c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3925c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3925cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3925ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3925d0:
    // 0x3925d0: 0x96830006  lhu         $v1, 0x6($s4)
    ctx->pc = 0x3925d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x3925d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3925d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3925d8: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x3925d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3925dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3925dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3925e0: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x3925E0u;
    {
        const bool branch_taken_0x3925e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3925E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925E0u;
        // 0x3925e4: 0x3093ffff  andi        $s3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925e0) {
            ctx->pc = 0x3924F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3924f0;
        }
    }
    ctx->pc = 0x3925E8u;
label_3925e8:
    // 0x3925e8: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x3925e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3925ec: 0x152042  srl         $a0, $s5, 1
    ctx->pc = 0x3925ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x3925f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3925f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3925f4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x3925f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x3925f8: 0x3095ffff  andi        $s5, $a0, 0xFFFF
    ctx->pc = 0x3925f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3925fc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x3925fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x392600: 0x16a0ffb3  bnez        $s5, . + 4 + (-0x4D << 2)
    ctx->pc = 0x392600u;
    {
        const bool branch_taken_0x392600 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x392604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392600u;
        // 0x392604: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392600) {
            ctx->pc = 0x3924D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3924d0;
        }
    }
    ctx->pc = 0x392608u;
label_392608:
    // 0x392608: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x392608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39260c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x39260cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x392610: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x392610u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x392614: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x392614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x392618: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x392618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39261c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39261cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x392620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x392620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x392624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x392624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x392628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39262c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39262cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392630: 0x3e00008  jr          $ra
    ctx->pc = 0x392630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392630u;
        // 0x392634: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392638u;
}
