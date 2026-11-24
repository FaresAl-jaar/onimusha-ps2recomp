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

// Function: sub_00181390
// Address: 0x181390 - 0x18171c
void sub_00181390_0x181390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181390_0x181390");
#endif

    switch (ctx->pc) {
        case 0x181400u: goto label_181400;
        case 0x181448u: goto label_181448;
        case 0x181524u: goto label_181524;
        case 0x181538u: goto label_181538;
        case 0x181548u: goto label_181548;
        case 0x181598u: goto label_181598;
        case 0x1815a4u: goto label_1815a4;
        case 0x181648u: goto label_181648;
        default: break;
    }

    ctx->pc = 0x181390u;

    // 0x181390: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x181394: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x181394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x181398: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18139c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1813a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1813a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1813a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1813a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1813a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1813ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1813acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1813b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1813b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1813b4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1813b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1813b8: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1813bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1813bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1813c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1813C0u;
    {
        const bool branch_taken_0x1813c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C0u;
        // 0x1813c4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813c0) {
            ctx->pc = 0x1813D0u;
            goto label_1813d0;
        }
    }
    ctx->pc = 0x1813C8u;
    // 0x1813c8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1813C8u;
    {
        const bool branch_taken_0x1813c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C8u;
        // 0x1813cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813c8) {
            ctx->pc = 0x1816F8u;
            goto label_1816f8;
        }
    }
    ctx->pc = 0x1813D0u;
label_1813d0:
    // 0x1813d0: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1813d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1813d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1813D4u;
    {
        const bool branch_taken_0x1813d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813D4u;
        // 0x1813d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813d4) {
            ctx->pc = 0x1813E8u;
            goto label_1813e8;
        }
    }
    ctx->pc = 0x1813DCu;
    // 0x1813dc: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1813DCu;
    {
        const bool branch_taken_0x1813dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1813dc) {
            ctx->pc = 0x1816F8u;
            goto label_1816f8;
        }
    }
    ctx->pc = 0x1813E4u;
    // 0x1813e4: 0x0  nop
    ctx->pc = 0x1813e4u;
    // NOP
label_1813e8:
    // 0x1813e8: 0x928201d8  lbu         $v0, 0x1D8($s4)
    ctx->pc = 0x1813e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 472)));
    // 0x1813ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1813ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1813f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1813F0u;
    {
        const bool branch_taken_0x1813f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813F0u;
        // 0x1813f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813f0) {
            ctx->pc = 0x181438u;
            goto label_181438;
        }
    }
    ctx->pc = 0x1813F8u;
    // 0x1813f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1813F8u;
    {
        const bool branch_taken_0x1813f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1813f8) {
            ctx->pc = 0x181428u;
            goto label_181428;
        }
    }
    ctx->pc = 0x181400u;
label_181400:
    // 0x181400: 0x8e8300a0  lw          $v1, 0xA0($s4)
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x181404: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x181404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181408: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x181408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x18140c: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x181410: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x181410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x181414: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x181414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x181418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x181418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18141c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x181420: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x181420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x181424: 0x0  nop
    ctx->pc = 0x181424u;
    // NOP
label_181428:
    // 0x181428: 0x928200cc  lbu         $v0, 0xCC($s4)
    ctx->pc = 0x181428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x18142c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x18142cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181430: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x181430u;
    {
        const bool branch_taken_0x181430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181430) {
            ctx->pc = 0x181400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181400;
        }
    }
    ctx->pc = 0x181438u;
label_181438:
    // 0x181438: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18143c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x18143Cu;
    {
        const bool branch_taken_0x18143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18143Cu;
        // 0x181440: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18143c) {
            ctx->pc = 0x181660u;
            goto label_181660;
        }
    }
    ctx->pc = 0x181444u;
    // 0x181444: 0x0  nop
    ctx->pc = 0x181444u;
    // NOP
label_181448:
    // 0x181448: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x18144c: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x181450: 0x9644006a  lhu         $a0, 0x6A($s2)
    ctx->pc = 0x181450u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 106)));
    // 0x181454: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x181458: 0x80b00000  lb          $s0, 0x0($a1)
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18145c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x181460: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x181464: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x181464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x181468: 0x1420007b  bnez        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x181468u;
    {
        const bool branch_taken_0x181468 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181468u;
        // 0x18146c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181468) {
            ctx->pc = 0x181658u;
            goto label_181658;
        }
    }
    ctx->pc = 0x181470u;
    // 0x181470: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x181470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x181474: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x181474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x181478: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x181478u;
    {
        const bool branch_taken_0x181478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181478) {
            ctx->pc = 0x1814B8u;
            goto label_1814b8;
        }
    }
    ctx->pc = 0x181480u;
    // 0x181480: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x181480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x181484: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x181484u;
    {
        const bool branch_taken_0x181484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181484) {
            ctx->pc = 0x181658u;
            goto label_181658;
        }
    }
    ctx->pc = 0x18148Cu;
    // 0x18148c: 0x8c850080  lw          $a1, 0x80($a0)
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x181490: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x181494: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x181498: 0x928400cd  lbu         $a0, 0xCD($s4)
    ctx->pc = 0x181498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 205)));
    // 0x18149c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x18149cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1814a0: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x1814a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1814a4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1814a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1814a8: 0x4863c  dsll32      $s0, $a0, 24
    ctx->pc = 0x1814a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1814ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1814ACu;
    {
        const bool branch_taken_0x1814ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814ACu;
        // 0x1814b0: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814ac) {
            ctx->pc = 0x1814D0u;
            goto label_1814d0;
        }
    }
    ctx->pc = 0x1814B4u;
    // 0x1814b4: 0x0  nop
    ctx->pc = 0x1814b4u;
    // NOP
label_1814b8:
    // 0x1814b8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1814bc: 0x902823  subu        $a1, $a0, $s0
    ctx->pc = 0x1814bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1814c0: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1814c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1814c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1814c8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1814cc: 0x0  nop
    ctx->pc = 0x1814ccu;
    // NOP
label_1814d0:
    // 0x1814d0: 0x962400c6  lhu         $a0, 0xC6($s1)
    ctx->pc = 0x1814d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x1814d4: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1814d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1814d8: 0x1480005f  bnez        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1814D8u;
    {
        const bool branch_taken_0x1814d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1814DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814D8u;
        // 0x1814dc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814d8) {
            ctx->pc = 0x181658u;
            goto label_181658;
        }
    }
    ctx->pc = 0x1814E0u;
    // 0x1814e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1814e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1814e4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1814E4u;
    {
        const bool branch_taken_0x1814e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814e4) {
            ctx->pc = 0x181550u;
            goto label_181550;
        }
    }
    ctx->pc = 0x1814ECu;
    // 0x1814ec: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x1814f0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1814f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1814f4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1814F4u;
    {
        const bool branch_taken_0x1814f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814f4) {
            ctx->pc = 0x181650u;
            goto label_181650;
        }
    }
    ctx->pc = 0x1814FCu;
    // 0x1814fc: 0x928201d8  lbu         $v0, 0x1D8($s4)
    ctx->pc = 0x1814fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 472)));
    // 0x181500: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181504: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x181504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x181508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18150c: 0xc68c01d4  lwc1        $f12, 0x1D4($s4)
    ctx->pc = 0x18150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181510: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x181514: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x181518: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x181518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18151c: 0xc0605c8  jal         func_181720
    ctx->pc = 0x18151Cu;
    SET_GPR_U32(ctx, 31, 0x181524u);
    ctx->pc = 0x181520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18151Cu;
    // 0x181520: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181720u, 0x18151Cu, 0x181524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181524u;
label_181524:
    // 0x181524: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x181524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x181528: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18152c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181530: 0xc041442  jal         func_105108
    ctx->pc = 0x181530u;
    SET_GPR_U32(ctx, 31, 0x181538u);
    ctx->pc = 0x181534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181530u;
    // 0x181534: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x181530u, 0x181538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181538u;
label_181538:
    // 0x181538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18153c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18153cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181540: 0xc0414ca  jal         func_105328
    ctx->pc = 0x181540u;
    SET_GPR_U32(ctx, 31, 0x181548u);
    ctx->pc = 0x181544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181540u;
    // 0x181544: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x181540u, 0x181548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181548u;
label_181548:
    // 0x181548: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x181548u;
    {
        const bool branch_taken_0x181548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181548) {
            ctx->pc = 0x181650u;
            goto label_181650;
        }
    }
    ctx->pc = 0x181550u;
label_181550:
    // 0x181550: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x181550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x181554: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x181554u;
    {
        const bool branch_taken_0x181554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181554) {
            ctx->pc = 0x1815F0u;
            goto label_1815f0;
        }
    }
    ctx->pc = 0x18155Cu;
    // 0x18155c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181560: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x181560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x181564: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x181564u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18156c: 0x262500c8  addiu       $a1, $s1, 0xC8
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x181570: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x181570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181574: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x181574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x181578: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18157c: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x181580: 0x928201d8  lbu         $v0, 0x1D8($s4)
    ctx->pc = 0x181580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 472)));
    // 0x181584: 0xc68c01d0  lwc1        $f12, 0x1D0($s4)
    ctx->pc = 0x181584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x181588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18158c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x181590: 0xc0605c8  jal         func_181720
    ctx->pc = 0x181590u;
    SET_GPR_U32(ctx, 31, 0x181598u);
    ctx->pc = 0x181594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181590u;
    // 0x181594: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181720u, 0x181590u, 0x181598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181598u;
label_181598:
    // 0x181598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18159c: 0xc04d660  jal         func_135980
    ctx->pc = 0x18159Cu;
    SET_GPR_U32(ctx, 31, 0x1815A4u);
    ctx->pc = 0x1815A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18159Cu;
    // 0x1815a0: 0x262500c8  addiu       $a1, $s1, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135980u, 0x18159Cu, 0x1815A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1815A4u;
label_1815a4:
    // 0x1815a4: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x1815a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1815a8: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x1815a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x1815ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1815acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1815b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1815b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1815b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1815b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1815bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1815bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1815c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1815c4: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1815c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1815cc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1815ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815d0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1815d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1815d4: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x1815d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1815d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1815dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1815dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815e0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1815e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1815e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1815E4u;
    {
        const bool branch_taken_0x1815e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1815E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815E4u;
        // 0x1815e8: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815e4) {
            ctx->pc = 0x181650u;
            goto label_181650;
        }
    }
    ctx->pc = 0x1815ECu;
    // 0x1815ec: 0x0  nop
    ctx->pc = 0x1815ecu;
    // NOP
label_1815f0:
    // 0x1815f0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1815f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1815f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1815F4u;
    {
        const bool branch_taken_0x1815f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1815f4) {
            ctx->pc = 0x181650u;
            goto label_181650;
        }
    }
    ctx->pc = 0x1815FCu;
    // 0x1815fc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1815fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x181600: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x181600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x181604: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x181604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x181608: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x181608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18160c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18160Cu;
    {
        const bool branch_taken_0x18160c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18160Cu;
        // 0x181610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18160c) {
            ctx->pc = 0x181628u;
            goto label_181628;
        }
    }
    ctx->pc = 0x181614u;
    // 0x181614: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x181614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x181618: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18161c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18161cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181620: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x181620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x181624: 0x0  nop
    ctx->pc = 0x181624u;
    // NOP
label_181628:
    // 0x181628: 0x928701d8  lbu         $a3, 0x1D8($s4)
    ctx->pc = 0x181628u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 472)));
    // 0x18162c: 0xc68c01d4  lwc1        $f12, 0x1D4($s4)
    ctx->pc = 0x18162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181630: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x181630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x181634: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x181634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x181638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18163c: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x181640: 0xc0605c8  jal         func_181720
    ctx->pc = 0x181640u;
    SET_GPR_U32(ctx, 31, 0x181648u);
    ctx->pc = 0x181644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181640u;
    // 0x181644: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181720u, 0x181640u, 0x181648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181648u;
label_181648:
    // 0x181648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18164c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x18164cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_181650:
    // 0x181650: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x181650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x181654: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x181654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_181658:
    // 0x181658: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x18165c: 0x0  nop
    ctx->pc = 0x18165cu;
    // NOP
label_181660:
    // 0x181660: 0x928200cc  lbu         $v0, 0xCC($s4)
    ctx->pc = 0x181660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x181664: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x181668: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x181668u;
    {
        const bool branch_taken_0x181668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181668) {
            ctx->pc = 0x181448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181448;
        }
    }
    ctx->pc = 0x181670u;
    // 0x181670: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x181674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181678: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x181678u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x18167c: 0xa28001d8  sb          $zero, 0x1D8($s4)
    ctx->pc = 0x18167cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x181680: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x181680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
    // 0x181684: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x181688: 0x968200c8  lhu         $v0, 0xC8($s4)
    ctx->pc = 0x181688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x18168c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18168Cu;
    {
        const bool branch_taken_0x18168c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x181690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18168Cu;
        // 0x181690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18168c) {
            ctx->pc = 0x181698u;
            goto label_181698;
        }
    }
    ctx->pc = 0x181694u;
    // 0x181694: 0xae8200c0  sw          $v0, 0xC0($s4)
    ctx->pc = 0x181694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
label_181698:
    // 0x181698: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x181698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x18169c: 0x968200c8  lhu         $v0, 0xC8($s4)
    ctx->pc = 0x18169cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1816a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1816a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1816a4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1816A4u;
    {
        const bool branch_taken_0x1816a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1816a4) {
            ctx->pc = 0x1816C0u;
            goto label_1816c0;
        }
    }
    ctx->pc = 0x1816ACu;
    // 0x1816ac: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x1816acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x1816b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1816b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1816b4: 0xa28201d8  sb          $v0, 0x1D8($s4)
    ctx->pc = 0x1816b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 472), (uint8_t)GPR_U32(ctx, 2));
    // 0x1816b8: 0xae8200c0  sw          $v0, 0xC0($s4)
    ctx->pc = 0x1816b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
    // 0x1816bc: 0x0  nop
    ctx->pc = 0x1816bcu;
    // NOP
label_1816c0:
    // 0x1816c0: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x1816c4: 0xae8200b8  sw          $v0, 0xB8($s4)
    ctx->pc = 0x1816c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 2));
    // 0x1816c8: 0x8e8300c4  lw          $v1, 0xC4($s4)
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x1816cc: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x1816ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x1816d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1816d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1816d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1816dc: 0xae8200b4  sw          $v0, 0xB4($s4)
    ctx->pc = 0x1816dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
    // 0x1816e0: 0x8e8300b8  lw          $v1, 0xB8($s4)
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x1816e4: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x1816e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x1816e8: 0x601827  not         $v1, $v1
    ctx->pc = 0x1816e8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1816ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1816ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1816f0: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1816f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x1816f4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_1816f8:
    // 0x1816f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1816f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1816fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1816fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181700: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x181700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181704: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18170c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18170cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181714: 0x3e00008  jr          $ra
    ctx->pc = 0x181714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181714u;
        // 0x181718: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18171Cu;
}
