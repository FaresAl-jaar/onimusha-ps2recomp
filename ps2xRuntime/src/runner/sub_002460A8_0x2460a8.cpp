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

// Function: sub_002460A8
// Address: 0x2460a8 - 0x246290
void sub_002460A8_0x2460a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002460A8_0x2460a8");
#endif

    switch (ctx->pc) {
        case 0x246100u: goto label_246100;
        case 0x246108u: goto label_246108;
        case 0x246114u: goto label_246114;
        case 0x246130u: goto label_246130;
        case 0x246138u: goto label_246138;
        case 0x246140u: goto label_246140;
        case 0x246148u: goto label_246148;
        case 0x246198u: goto label_246198;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461d4u: goto label_2461d4;
        case 0x24622cu: goto label_24622c;
        case 0x246234u: goto label_246234;
        case 0x246240u: goto label_246240;
        case 0x246248u: goto label_246248;
        default: break;
    }

    ctx->pc = 0x2460a8u;

    // 0x2460a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2460a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2460ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2460acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2460b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2460b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2460b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2460b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2460b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2460bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2460bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2460c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2460c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2460c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2460c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2460c8: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2460C8u;
    {
        const bool branch_taken_0x2460c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2460CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460C8u;
        // 0x2460cc: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460c8) {
            ctx->pc = 0x24617Cu;
            goto label_24617c;
        }
    }
    ctx->pc = 0x2460D0u;
    // 0x2460d0: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x2460d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2460d4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2460d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2460d8: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2460D8u;
    {
        const bool branch_taken_0x2460d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460d8) {
            ctx->pc = 0x2460DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2460D8u;
            // 0x2460dc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24617Cu;
            goto label_24617c;
        }
    }
    ctx->pc = 0x2460E0u;
    // 0x2460e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2460e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2460e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2460e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2460e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2460ec: 0x8c63c980  lw          $v1, -0x3680($v1)
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953344)));
    // 0x2460f0: 0x600008  jr          $v1
    ctx->pc = 0x2460F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2460F8u: goto label_2460f8;
            case 0x246170u: goto label_246170;
            case 0x246178u: goto label_246178;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2460F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2460F8u;
label_2460f8:
    // 0x2460f8: 0xc091a44  jal         func_246910
    ctx->pc = 0x2460F8u;
    SET_GPR_U32(ctx, 31, 0x246100u);
    ctx->pc = 0x2460FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2460F8u;
    // 0x2460fc: 0x24041600  addiu       $a0, $zero, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2460F8u, 0x246100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246100u;
label_246100:
    // 0x246100: 0xc04822a  jal         func_1208A8
    ctx->pc = 0x246100u;
    SET_GPR_U32(ctx, 31, 0x246108u);
    ctx->pc = 0x1208A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1208A8u, 0x246100u, 0x246108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246108u;
label_246108:
    // 0x246108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24610c: 0xc091a44  jal         func_246910
    ctx->pc = 0x24610Cu;
    SET_GPR_U32(ctx, 31, 0x246114u);
    ctx->pc = 0x246110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24610Cu;
    // 0x246110: 0x24041601  addiu       $a0, $zero, 0x1601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x24610Cu, 0x246114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246114u;
label_246114:
    // 0x246114: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246114u;
    {
        const bool branch_taken_0x246114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x246118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246114u;
        // 0x246118: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246114) {
            ctx->pc = 0x246130u;
            goto label_246130;
        }
    }
    ctx->pc = 0x24611Cu;
    // 0x24611c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246120: 0x2442e9d4  addiu       $v0, $v0, -0x162C
    ctx->pc = 0x246120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961620));
    // 0x246124: 0x2484c958  addiu       $a0, $a0, -0x36A8
    ctx->pc = 0x246124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953304));
    // 0x246128: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246128u;
    SET_GPR_U32(ctx, 31, 0x246130u);
    ctx->pc = 0x24612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246128u;
    // 0x24612c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246128u, 0x246130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246130u;
label_246130:
    // 0x246130: 0xc091a44  jal         func_246910
    ctx->pc = 0x246130u;
    SET_GPR_U32(ctx, 31, 0x246138u);
    ctx->pc = 0x246134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246130u;
    // 0x246134: 0x24041700  addiu       $a0, $zero, 0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246130u, 0x246138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246138u;
label_246138:
    // 0x246138: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x246138u;
    SET_GPR_U32(ctx, 31, 0x246140u);
    ctx->pc = 0x24613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246138u;
    // 0x24613c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x246138u, 0x246140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246140u;
label_246140:
    // 0x246140: 0xc091a44  jal         func_246910
    ctx->pc = 0x246140u;
    SET_GPR_U32(ctx, 31, 0x246148u);
    ctx->pc = 0x246144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246140u;
    // 0x246144: 0x24041701  addiu       $a0, $zero, 0x1701 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246140u, 0x246148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x246148u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24614c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246154: 0x2463e9dc  addiu       $v1, $v1, -0x1624
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961628));
    // 0x246158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x246158u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9DCu));
    // 0x24615c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246160: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x246160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9DCu, _value); } while (0);
    // 0x246164: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246164u;
    {
        const bool branch_taken_0x246164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246164u;
        // 0x246168: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246164) {
            ctx->pc = 0x24617Cu;
            goto label_24617c;
        }
    }
    ctx->pc = 0x24616Cu;
    // 0x24616c: 0x0  nop
    ctx->pc = 0x24616cu;
    // NOP
label_246170:
    // 0x246170: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x246170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x246174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246178:
    // 0x246178: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x246178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_24617c:
    // 0x24617c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x24617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x246180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246184: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x246184u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x246188: 0x56430023  bnel        $s2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x246188u;
    {
        const bool branch_taken_0x246188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x246188) {
            ctx->pc = 0x24618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246188u;
            // 0x24618c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246218u;
            goto label_246218;
        }
    }
    ctx->pc = 0x246190u;
    // 0x246190: 0xc091a44  jal         func_246910
    ctx->pc = 0x246190u;
    SET_GPR_U32(ctx, 31, 0x246198u);
    ctx->pc = 0x246194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246190u;
    // 0x246194: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246190u, 0x246198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246198u;
label_246198:
    // 0x246198: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24619c: 0x8c43ea08  lw          $v1, -0x15F8($v0)
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CEA08u));
    // 0x2461a0: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2461A0u;
    {
        const bool branch_taken_0x2461a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2461a0) {
            ctx->pc = 0x2461A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2461A0u;
            // 0x2461a4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2461B8u;
            goto label_2461b8;
        }
    }
    ctx->pc = 0x2461A8u;
    // 0x2461a8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2461a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2461ac: 0x9043ea0c  lbu         $v1, -0x15F4($v0)
    ctx->pc = 0x2461acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x4CEA0Cu));
    // 0x2461b0: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x2461b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2461b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2461b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2461b8:
    // 0x2461b8: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x2461b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2461bc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2461bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2461c0: 0xc0480fa  jal         func_1203E8
    ctx->pc = 0x2461C0u;
    SET_GPR_U32(ctx, 31, 0x2461C8u);
    ctx->pc = 0x2461C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461C0u;
    // 0x2461c4: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1203E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203E8u, 0x2461C0u, 0x2461C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461C8u;
label_2461c8:
    // 0x2461c8: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x2461c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x2461cc: 0xc091a44  jal         func_246910
    ctx->pc = 0x2461CCu;
    SET_GPR_U32(ctx, 31, 0x2461D4u);
    ctx->pc = 0x2461D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2461CCu;
    // 0x2461d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2461CCu, 0x2461D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2461D4u;
label_2461d4:
    // 0x2461d4: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2461D4u;
    {
        const bool branch_taken_0x2461d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2461D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461D4u;
        // 0x2461d8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461d4) {
            ctx->pc = 0x246200u;
            goto label_246200;
        }
    }
    ctx->pc = 0x2461DCu;
    // 0x2461dc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2461e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2461e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2461e4: 0x2442e9d8  addiu       $v0, $v0, -0x1628
    ctx->pc = 0x2461e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961624));
    // 0x2461e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2461e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2461ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CE9D8u));
    // 0x2461f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2461f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2461f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2461f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4CE9D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9D8u, _value); } while (0);
    // 0x2461f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2461F8u;
    {
        const bool branch_taken_0x2461f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461F8u;
        // 0x2461fc: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461f8) {
            ctx->pc = 0x246210u;
            goto label_246210;
        }
    }
    ctx->pc = 0x246200u;
label_246200:
    // 0x246200: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x246200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246204: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x246204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x246208: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x246208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24620c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x24620cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_246210:
    // 0x246210: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x246210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x246214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246218:
    // 0x246218: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x246218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24621c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24621Cu;
    {
        const bool branch_taken_0x24621c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x246220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24621Cu;
        // 0x246220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24621c) {
            ctx->pc = 0x24627Cu;
            goto label_24627c;
        }
    }
    ctx->pc = 0x246224u;
    // 0x246224: 0xc091a44  jal         func_246910
    ctx->pc = 0x246224u;
    SET_GPR_U32(ctx, 31, 0x24622Cu);
    ctx->pc = 0x246228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246224u;
    // 0x246228: 0x24041900  addiu       $a0, $zero, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246224u, 0x24622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24622Cu;
label_24622c:
    // 0x24622c: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x24622Cu;
    SET_GPR_U32(ctx, 31, 0x246234u);
    ctx->pc = 0x246230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24622Cu;
    // 0x246230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x24622Cu, 0x246234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246234u;
label_246234:
    // 0x246234: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x246234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x246238: 0xc091a44  jal         func_246910
    ctx->pc = 0x246238u;
    SET_GPR_U32(ctx, 31, 0x246240u);
    ctx->pc = 0x24623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246238u;
    // 0x24623c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x246238u, 0x246240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246240u;
label_246240:
    // 0x246240: 0xc0917d2  jal         func_245F48
    ctx->pc = 0x246240u;
    SET_GPR_U32(ctx, 31, 0x246248u);
    ctx->pc = 0x246244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246240u;
    // 0x246244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F48u, 0x246240u, 0x246248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246248u;
label_246248:
    // 0x246248: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x246248u;
    {
        const bool branch_taken_0x246248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246248u;
        // 0x24624c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246248) {
            ctx->pc = 0x246278u;
            goto label_246278;
        }
    }
    ctx->pc = 0x246250u;
    // 0x246250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246254: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x246254u;
    {
        const bool branch_taken_0x246254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x246254) {
            ctx->pc = 0x246258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246254u;
            // 0x246258: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246260u;
            goto label_246260;
        }
    }
    ctx->pc = 0x24625Cu;
    // 0x24625c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x24625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_246260:
    // 0x246260: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x246260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x246264: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x246268: 0x2463e9dc  addiu       $v1, $v1, -0x1624
    ctx->pc = 0x246268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961628));
    // 0x24626c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24626cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CE9DCu));
    // 0x246270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246274: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x246274u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4CE9DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4CE9DCu, _value); } while (0);
label_246278:
    // 0x246278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24627c:
    // 0x24627c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24627cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246288: 0x3e00008  jr          $ra
    ctx->pc = 0x246288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246288u;
        // 0x24628c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246290u;
}
