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

// Function: sub_0034F550
// Address: 0x34f550 - 0x34f928
void sub_0034F550_0x34f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F550_0x34f550");
#endif

    switch (ctx->pc) {
        case 0x34f568u: goto label_34f568;
        case 0x34f5d8u: goto label_34f5d8;
        case 0x34f604u: goto label_34f604;
        case 0x34f6f0u: goto label_34f6f0;
        case 0x34f758u: goto label_34f758;
        case 0x34f784u: goto label_34f784;
        case 0x34f800u: goto label_34f800;
        case 0x34f810u: goto label_34f810;
        case 0x34f828u: goto label_34f828;
        case 0x34f834u: goto label_34f834;
        case 0x34f860u: goto label_34f860;
        case 0x34f884u: goto label_34f884;
        case 0x34f8a0u: goto label_34f8a0;
        case 0x34f8b0u: goto label_34f8b0;
        case 0x34f8bcu: goto label_34f8bc;
        case 0x34f8e8u: goto label_34f8e8;
        case 0x34f900u: goto label_34f900;
        case 0x34f910u: goto label_34f910;
        default: break;
    }

    ctx->pc = 0x34f550u;

    // 0x34f550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f554: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x34f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x34f558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34f55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f560: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34F560u;
    SET_GPR_U32(ctx, 31, 0x34F568u);
    ctx->pc = 0x34F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F560u;
    // 0x34f564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34F560u, 0x34F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F568u;
label_34f568:
    // 0x34f568: 0x92040029  lbu         $a0, 0x29($s0)
    ctx->pc = 0x34f568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x34f56c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x34f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x34f570: 0x108200df  beq         $a0, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x34F570u;
    {
        const bool branch_taken_0x34f570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F570u;
        // 0x34f574: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f570) {
            ctx->pc = 0x34F8F0u;
            goto label_34f8f0;
        }
    }
    ctx->pc = 0x34F578u;
    // 0x34f578: 0x108300c7  beq         $a0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x34F578u;
    {
        const bool branch_taken_0x34f578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F578u;
        // 0x34f57c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f578) {
            ctx->pc = 0x34F898u;
            goto label_34f898;
        }
    }
    ctx->pc = 0x34F580u;
    // 0x34f580: 0x108200bd  beq         $a0, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x34F580u;
    {
        const bool branch_taken_0x34f580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f580) {
            ctx->pc = 0x34F878u;
            goto label_34f878;
        }
    }
    ctx->pc = 0x34F588u;
    // 0x34f588: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x34f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x34f58c: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x34F58Cu;
    {
        const bool branch_taken_0x34f58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F58Cu;
        // 0x34f590: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f58c) {
            ctx->pc = 0x34F848u;
            goto label_34f848;
        }
    }
    ctx->pc = 0x34F594u;
    // 0x34f594: 0x108200aa  beq         $a0, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x34F594u;
    {
        const bool branch_taken_0x34f594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F594u;
        // 0x34f598: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f594) {
            ctx->pc = 0x34F840u;
            goto label_34f840;
        }
    }
    ctx->pc = 0x34F59Cu;
    // 0x34f59c: 0x10850096  beq         $a0, $a1, . + 4 + (0x96 << 2)
    ctx->pc = 0x34F59Cu;
    {
        const bool branch_taken_0x34f59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x34F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F59Cu;
        // 0x34f5a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f59c) {
            ctx->pc = 0x34F7F8u;
            goto label_34f7f8;
        }
    }
    ctx->pc = 0x34F5A4u;
    // 0x34f5a4: 0x10820068  beq         $a0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x34F5A4u;
    {
        const bool branch_taken_0x34f5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f5a4) {
            ctx->pc = 0x34F748u;
            goto label_34f748;
        }
    }
    ctx->pc = 0x34F5ACu;
    // 0x34f5ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f5b0: 0x1082004d  beq         $a0, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x34F5B0u;
    {
        const bool branch_taken_0x34f5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f5b0) {
            ctx->pc = 0x34F6E8u;
            goto label_34f6e8;
        }
    }
    ctx->pc = 0x34F5B8u;
    // 0x34f5b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F5B8u;
    {
        const bool branch_taken_0x34f5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f5b8) {
            ctx->pc = 0x34F5C8u;
            goto label_34f5c8;
        }
    }
    ctx->pc = 0x34F5C0u;
    // 0x34f5c0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x34F5C0u;
    {
        const bool branch_taken_0x34f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f5c0) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F5C8u;
label_34f5c8:
    // 0x34f5c8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34f5cc: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34f5d0: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34F5D0u;
    SET_GPR_U32(ctx, 31, 0x34F5D8u);
    ctx->pc = 0x34F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F5D0u;
    // 0x34f5d4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34F5D0u, 0x34F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5D8u;
label_34f5d8:
    // 0x34f5d8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34f5d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f5e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34f5e4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34f5e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f5ec: 0x24427d58  addiu       $v0, $v0, 0x7D58
    ctx->pc = 0x34f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32088));
    // 0x34f5f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f5f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f5f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f5fc: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34F5FCu;
    SET_GPR_U32(ctx, 31, 0x34F604u);
    ctx->pc = 0x34F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F5FCu;
    // 0x34f600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34F5FCu, 0x34F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F604u;
label_34f604:
    // 0x34f604: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x34F604u;
    {
        const bool branch_taken_0x34f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f604) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F60Cu;
    // 0x34f60c: 0x8203002b  lb          $v1, 0x2B($s0)
    ctx->pc = 0x34f60cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x34f610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34f614: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x34F614u;
    {
        const bool branch_taken_0x34f614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F614u;
        // 0x34f618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f614) {
            ctx->pc = 0x34F6D8u;
            goto label_34f6d8;
        }
    }
    ctx->pc = 0x34F61Cu;
    // 0x34f61c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x34F61Cu;
    {
        const bool branch_taken_0x34f61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f61c) {
            ctx->pc = 0x34F6D8u;
            goto label_34f6d8;
        }
    }
    ctx->pc = 0x34F624u;
    // 0x34f624: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F624u;
    {
        const bool branch_taken_0x34f624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f624) {
            ctx->pc = 0x34F638u;
            goto label_34f638;
        }
    }
    ctx->pc = 0x34F62Cu;
    // 0x34f62c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x34F62Cu;
    {
        const bool branch_taken_0x34f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f62c) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F634u;
    // 0x34f634: 0x0  nop
    ctx->pc = 0x34f634u;
    // NOP
label_34f638:
    // 0x34f638: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x34f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34f63c: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x34f63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x34f640: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x34f640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f644: 0x92020027  lbu         $v0, 0x27($s0)
    ctx->pc = 0x34f644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x34f648: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x34f648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34f64c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34f64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F650u;
    {
        const bool branch_taken_0x34f650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f650) {
            ctx->pc = 0x34F668u;
            goto label_34f668;
        }
    }
    ctx->pc = 0x34F658u;
    // 0x34f658: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34f65c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x34f65cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34f660: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x34f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x34f664: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34f664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_34f668:
    // 0x34f668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f66c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F66Cu;
    {
        const bool branch_taken_0x34f66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f66c) {
            ctx->pc = 0x34F688u;
            goto label_34f688;
        }
    }
    ctx->pc = 0x34F674u;
    // 0x34f674: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x34f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x34f678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34f678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34f67c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x34F67Cu;
    {
        const bool branch_taken_0x34f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F67Cu;
        // 0x34f680: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f67c) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F684u;
    // 0x34f684: 0x0  nop
    ctx->pc = 0x34f684u;
    // NOP
label_34f688:
    // 0x34f688: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x34f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34f68c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34f690: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x34f690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x34f694: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34F694u;
    {
        const bool branch_taken_0x34f694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F694u;
        // 0x34f698: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f694) {
            ctx->pc = 0x34F6A0u;
            goto label_34f6a0;
        }
    }
    ctx->pc = 0x34F69Cu;
    // 0x34f69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f6a0:
    // 0x34f6a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F6A0u;
    {
        const bool branch_taken_0x34f6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f6a0) {
            ctx->pc = 0x34F6C0u;
            goto label_34f6c0;
        }
    }
    ctx->pc = 0x34F6A8u;
    // 0x34f6a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34f6ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34F6ACu;
    {
        const bool branch_taken_0x34f6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f6ac) {
            ctx->pc = 0x34F6B8u;
            goto label_34f6b8;
        }
    }
    ctx->pc = 0x34F6B4u;
    // 0x34f6b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34f6b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f6b8:
    // 0x34f6b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34F6B8u;
    {
        const bool branch_taken_0x34f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6B8u;
        // 0x34f6bc: 0xa203002e  sb          $v1, 0x2E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6b8) {
            ctx->pc = 0x34F6C8u;
            goto label_34f6c8;
        }
    }
    ctx->pc = 0x34F6C0u;
label_34f6c0:
    // 0x34f6c0: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x34f6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f6c4: 0x0  nop
    ctx->pc = 0x34f6c4u;
    // NOP
label_34f6c8:
    // 0x34f6c8: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x34f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x34f6cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x34f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x34f6d0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x34F6D0u;
    {
        const bool branch_taken_0x34f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6D0u;
        // 0x34f6d4: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6d0) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F6D8u;
label_34f6d8:
    // 0x34f6d8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x34f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x34f6dc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x34F6DCu;
    {
        const bool branch_taken_0x34f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6DCu;
        // 0x34f6e0: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6dc) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F6E4u;
    // 0x34f6e4: 0x0  nop
    ctx->pc = 0x34f6e4u;
    // NOP
label_34f6e8:
    // 0x34f6e8: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34F6E8u;
    SET_GPR_U32(ctx, 31, 0x34F6F0u);
    ctx->pc = 0x34F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F6E8u;
    // 0x34f6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34F6E8u, 0x34F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F6F0u;
label_34f6f0:
    // 0x34f6f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f6f4: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34F6F4u;
    {
        const bool branch_taken_0x34f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F6F4u;
        // 0x34f6f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6f4) {
            ctx->pc = 0x34F740u;
            goto label_34f740;
        }
    }
    ctx->pc = 0x34F6FCu;
    // 0x34f6fc: 0x10430082  beq         $v0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x34F6FCu;
    {
        const bool branch_taken_0x34f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6fc) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F704u;
    // 0x34f704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F704u;
    {
        const bool branch_taken_0x34f704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f704) {
            ctx->pc = 0x34F718u;
            goto label_34f718;
        }
    }
    ctx->pc = 0x34F70Cu;
    // 0x34f70c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x34F70Cu;
    {
        const bool branch_taken_0x34f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f70c) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F714u;
    // 0x34f714: 0x0  nop
    ctx->pc = 0x34f714u;
    // NOP
label_34f718:
    // 0x34f718: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x34f718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x34f71c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34f71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F720u;
    {
        const bool branch_taken_0x34f720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F720u;
        // 0x34f724: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f720) {
            ctx->pc = 0x34F730u;
            goto label_34f730;
        }
    }
    ctx->pc = 0x34F728u;
    // 0x34f728: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x34F728u;
    {
        const bool branch_taken_0x34f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F728u;
        // 0x34f72c: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f728) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F730u;
label_34f730:
    // 0x34f730: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34f734: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x34F734u;
    {
        const bool branch_taken_0x34f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F734u;
        // 0x34f738: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f734) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F73Cu;
    // 0x34f73c: 0x0  nop
    ctx->pc = 0x34f73cu;
    // NOP
label_34f740:
    // 0x34f740: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34F740u;
    {
        const bool branch_taken_0x34f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F740u;
        // 0x34f744: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f740) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F748u;
label_34f748:
    // 0x34f748: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34f748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34f74c: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34f750: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34F750u;
    SET_GPR_U32(ctx, 31, 0x34F758u);
    ctx->pc = 0x34F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F750u;
    // 0x34f754: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34F750u, 0x34F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F758u;
label_34f758:
    // 0x34f758: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34f758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f760: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34f764: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34f764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34f768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34f768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f76c: 0x24427d60  addiu       $v0, $v0, 0x7D60
    ctx->pc = 0x34f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
    // 0x34f770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f778: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34f778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f77c: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34F77Cu;
    SET_GPR_U32(ctx, 31, 0x34F784u);
    ctx->pc = 0x34F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F77Cu;
    // 0x34f780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34F77Cu, 0x34F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F784u;
label_34f784:
    // 0x34f784: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x34F784u;
    {
        const bool branch_taken_0x34f784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f784) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F78Cu;
    // 0x34f78c: 0x8203002b  lb          $v1, 0x2B($s0)
    ctx->pc = 0x34f78cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x34f790: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34f794: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34F794u;
    {
        const bool branch_taken_0x34f794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F794u;
        // 0x34f798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f794) {
            ctx->pc = 0x34F7F0u;
            goto label_34f7f0;
        }
    }
    ctx->pc = 0x34F79Cu;
    // 0x34f79c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34F79Cu;
    {
        const bool branch_taken_0x34f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f79c) {
            ctx->pc = 0x34F7E0u;
            goto label_34f7e0;
        }
    }
    ctx->pc = 0x34F7A4u;
    // 0x34f7a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F7A4u;
    {
        const bool branch_taken_0x34f7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f7a4) {
            ctx->pc = 0x34F7B8u;
            goto label_34f7b8;
        }
    }
    ctx->pc = 0x34F7ACu;
    // 0x34f7ac: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x34F7ACu;
    {
        const bool branch_taken_0x34f7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f7ac) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F7B4u;
    // 0x34f7b4: 0x0  nop
    ctx->pc = 0x34f7b4u;
    // NOP
label_34f7b8:
    // 0x34f7b8: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x34f7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x34f7bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34f7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34f7c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F7C0u;
    {
        const bool branch_taken_0x34f7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7C0u;
        // 0x34f7c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7c0) {
            ctx->pc = 0x34F7D0u;
            goto label_34f7d0;
        }
    }
    ctx->pc = 0x34F7C8u;
    // 0x34f7c8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x34F7C8u;
    {
        const bool branch_taken_0x34f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7C8u;
        // 0x34f7cc: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7c8) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F7D0u;
label_34f7d0:
    // 0x34f7d0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x34f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34f7d4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x34F7D4u;
    {
        const bool branch_taken_0x34f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7D4u;
        // 0x34f7d8: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7d4) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F7DCu;
    // 0x34f7dc: 0x0  nop
    ctx->pc = 0x34f7dcu;
    // NOP
label_34f7e0:
    // 0x34f7e0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x34f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x34f7e4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x34F7E4u;
    {
        const bool branch_taken_0x34f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7E4u;
        // 0x34f7e8: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7e4) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F7ECu;
    // 0x34f7ec: 0x0  nop
    ctx->pc = 0x34f7ecu;
    // NOP
label_34f7f0:
    // 0x34f7f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x34F7F0u;
    {
        const bool branch_taken_0x34f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F7F0u;
        // 0x34f7f4: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7f0) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F7F8u;
label_34f7f8:
    // 0x34f7f8: 0xc0d3af0  jal         func_34EBC0
    ctx->pc = 0x34F7F8u;
    SET_GPR_U32(ctx, 31, 0x34F800u);
    ctx->pc = 0x34F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F7F8u;
    // 0x34f7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EBC0u, 0x34F7F8u, 0x34F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F800u;
label_34f800:
    // 0x34f800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f808: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34F808u;
    SET_GPR_U32(ctx, 31, 0x34F810u);
    ctx->pc = 0x34F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F808u;
    // 0x34f80c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34F808u, 0x34F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F810u;
label_34f810:
    // 0x34f810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F810u;
    {
        const bool branch_taken_0x34f810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f810) {
            ctx->pc = 0x34F820u;
            goto label_34f820;
        }
    }
    ctx->pc = 0x34F818u;
    // 0x34f818: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x34f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34f81c: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x34f81cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
label_34f820:
    // 0x34f820: 0xc0d3b30  jal         func_34ECC0
    ctx->pc = 0x34F820u;
    SET_GPR_U32(ctx, 31, 0x34F828u);
    ctx->pc = 0x34F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F820u;
    // 0x34f824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ECC0u, 0x34F820u, 0x34F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F828u;
label_34f828:
    // 0x34f828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f82c: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34F82Cu;
    SET_GPR_U32(ctx, 31, 0x34F834u);
    ctx->pc = 0x34F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F82Cu;
    // 0x34f830: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34F82Cu, 0x34F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F834u;
label_34f834:
    // 0x34f834: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34F834u;
    {
        const bool branch_taken_0x34f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f834) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F83Cu;
    // 0x34f83c: 0x0  nop
    ctx->pc = 0x34f83cu;
    // NOP
label_34f840:
    // 0x34f840: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x34F840u;
    {
        const bool branch_taken_0x34f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F840u;
        // 0x34f844: 0xa2030029  sb          $v1, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f840) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F848u;
label_34f848:
    // 0x34f848: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x34f848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x34f84c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x34f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x34f850: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34f854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34f854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f858: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x34F858u;
    SET_GPR_U32(ctx, 31, 0x34F860u);
    ctx->pc = 0x34F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F858u;
    // 0x34f85c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x34F858u, 0x34F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F860u;
label_34f860:
    // 0x34f860: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x34F860u;
    {
        const bool branch_taken_0x34f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f860) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F868u;
    // 0x34f868: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x34f868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x34f86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34f870: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x34F870u;
    {
        const bool branch_taken_0x34f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F870u;
        // 0x34f874: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f870) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F878u;
label_34f878:
    // 0x34f878: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x34f878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x34f87c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x34F87Cu;
    SET_GPR_U32(ctx, 31, 0x34F884u);
    ctx->pc = 0x34F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F87Cu;
    // 0x34f880: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x34F87Cu, 0x34F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F884u;
label_34f884:
    // 0x34f884: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x34F884u;
    {
        const bool branch_taken_0x34f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f884) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F88Cu;
    // 0x34f88c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34f890: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34F890u;
    {
        const bool branch_taken_0x34f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F890u;
        // 0x34f894: 0xa2020029  sb          $v0, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f890) {
            ctx->pc = 0x34F908u;
            goto label_34f908;
        }
    }
    ctx->pc = 0x34F898u;
label_34f898:
    // 0x34f898: 0xc0d39f4  jal         func_34E7D0
    ctx->pc = 0x34F898u;
    SET_GPR_U32(ctx, 31, 0x34F8A0u);
    ctx->pc = 0x34F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F898u;
    // 0x34f89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E7D0u, 0x34F898u, 0x34F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8A0u;
label_34f8a0:
    // 0x34f8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8a8: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34F8A8u;
    SET_GPR_U32(ctx, 31, 0x34F8B0u);
    ctx->pc = 0x34F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8A8u;
    // 0x34f8ac: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34F8A8u, 0x34F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8B0u;
label_34f8b0:
    // 0x34f8b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x34f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x34f8b4: 0xc0d8d0c  jal         func_363430
    ctx->pc = 0x34F8B4u;
    SET_GPR_U32(ctx, 31, 0x34F8BCu);
    ctx->pc = 0x34F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8B4u;
    // 0x34f8b8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363430u, 0x34F8B4u, 0x34F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8BCu;
label_34f8bc:
    // 0x34f8bc: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x34f8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x34f8c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f8c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34f8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x34f8d0: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x34f8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f8d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x34f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x34f8d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34f8dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f8e0: 0xc0d3a18  jal         func_34E860
    ctx->pc = 0x34F8E0u;
    SET_GPR_U32(ctx, 31, 0x34F8E8u);
    ctx->pc = 0x34F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8E0u;
    // 0x34f8e4: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E860u, 0x34F8E0u, 0x34F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8E8u;
label_34f8e8:
    // 0x34f8e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F8E8u;
    {
        const bool branch_taken_0x34f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F8E8u;
        // 0x34f8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8e8) {
            ctx->pc = 0x34F918u;
            goto label_34f918;
        }
    }
    ctx->pc = 0x34F8F0u;
label_34f8f0:
    // 0x34f8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34f8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f8f8: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34F8F8u;
    SET_GPR_U32(ctx, 31, 0x34F900u);
    ctx->pc = 0x34F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F8F8u;
    // 0x34f8fc: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34F8F8u, 0x34F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F900u;
label_34f900:
    // 0x34f900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34F900u;
    {
        const bool branch_taken_0x34f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F900u;
        // 0x34f904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f900) {
            ctx->pc = 0x34F918u;
            goto label_34f918;
        }
    }
    ctx->pc = 0x34F908u;
label_34f908:
    // 0x34f908: 0xc0b2dd0  jal         func_2CB740
    ctx->pc = 0x34F908u;
    SET_GPR_U32(ctx, 31, 0x34F910u);
    ctx->pc = 0x34F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F908u;
    // 0x34f90c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB740u, 0x34F908u, 0x34F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F910u;
label_34f910:
    // 0x34f910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f914: 0x0  nop
    ctx->pc = 0x34f914u;
    // NOP
label_34f918:
    // 0x34f918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f920: 0x3e00008  jr          $ra
    ctx->pc = 0x34F920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F920u;
        // 0x34f924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F928u;
}
