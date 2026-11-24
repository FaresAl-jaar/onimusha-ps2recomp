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

// Function: sub_00101080
// Address: 0x101080 - 0x101284
void sub_00101080_0x101080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101080_0x101080");
#endif

    switch (ctx->pc) {
        case 0x1010b0u: goto label_1010b0;
        case 0x1010c4u: goto label_1010c4;
        case 0x1010d0u: goto label_1010d0;
        case 0x1010dcu: goto label_1010dc;
        case 0x101100u: goto label_101100;
        case 0x10113cu: goto label_10113c;
        case 0x10118cu: goto label_10118c;
        case 0x1011a8u: goto label_1011a8;
        case 0x1011e8u: goto label_1011e8;
        case 0x101200u: goto label_101200;
        case 0x10124cu: goto label_10124c;
        case 0x101258u: goto label_101258;
        case 0x101260u: goto label_101260;
        default: break;
    }

    ctx->pc = 0x101080u;

    // 0x101080: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x101084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x101084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x101088: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x101088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x10108c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x101090: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x101094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10109c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1010a0: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x1010a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1010a4: 0x0  nop
    ctx->pc = 0x1010a4u;
    // NOP
    // 0x1010a8: 0xc040218  jal         func_100860
    ctx->pc = 0x1010A8u;
    SET_GPR_U32(ctx, 31, 0x1010B0u);
    ctx->pc = 0x1010ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A8u;
    // 0x1010ac: 0xafdd0074  sw          $sp, 0x74($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100860u, 0x1010A8u, 0x1010B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B0u;
label_1010b0:
    // 0x1010b0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1010B0u;
    {
        const bool branch_taken_0x1010b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1010b0) {
            ctx->pc = 0x101258u;
            goto label_101258;
        }
    }
    ctx->pc = 0x1010B8u;
    // 0x1010b8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1010b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1010bc: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1010BCu;
    SET_GPR_U32(ctx, 31, 0x1010C4u);
    ctx->pc = 0x1010C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010BCu;
    // 0x1010c0: 0x27c50080  addiu       $a1, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1010BCu, 0x1010C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C4u;
label_1010c4:
    // 0x1010c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1010c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010c8: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x1010C8u;
    SET_GPR_U32(ctx, 31, 0x1010D0u);
    ctx->pc = 0x1010CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010C8u;
    // 0x1010cc: 0x27c50084  addiu       $a1, $fp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x1010C8u, 0x1010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D0u;
label_1010d0:
    // 0x1010d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010d4: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x1010D4u;
    SET_GPR_U32(ctx, 31, 0x1010DCu);
    ctx->pc = 0x1010D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010D4u;
    // 0x1010d8: 0x27c50088  addiu       $a1, $fp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x1010D4u, 0x1010DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010DCu;
label_1010dc:
    // 0x1010dc: 0x27d0008c  addiu       $s0, $fp, 0x8C
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 140));
    // 0x1010e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1010e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1010e4: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x1010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x1010e8: 0x8fd30064  lw          $s3, 0x64($fp)
    ctx->pc = 0x1010e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x1010ec: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1010ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1010f0: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1010f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1010f4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1010F4u;
    {
        const bool branch_taken_0x1010f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1010F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010F4u;
        // 0x1010f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010f4) {
            ctx->pc = 0x101170u;
            goto label_101170;
        }
    }
    ctx->pc = 0x1010FCu;
    // 0x1010fc: 0x0  nop
    ctx->pc = 0x1010fcu;
    // NOP
label_101100:
    // 0x101100: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x101100u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x101104: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x101104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x101108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10110c: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x10110cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x101110: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x101110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101114: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x101118: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x10111c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x101120: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x101120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x101124: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x101124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x101128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10112c: 0xafc200a8  sw          $v0, 0xA8($fp)
    ctx->pc = 0x10112cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 2));
    // 0x101130: 0x8fc500a8  lw          $a1, 0xA8($fp)
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 168)));
    // 0x101134: 0xc040178  jal         func_1005E0
    ctx->pc = 0x101134u;
    SET_GPR_U32(ctx, 31, 0x10113Cu);
    ctx->pc = 0x101138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101134u;
    // 0x101138: 0x27c60098  addiu       $a2, $fp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E0u, 0x101134u, 0x10113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10113Cu;
label_10113c:
    // 0x10113c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10113cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101140: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x101144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101144u;
    {
        const bool branch_taken_0x101144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101144) {
            ctx->pc = 0x101158u;
            goto label_101158;
        }
    }
    ctx->pc = 0x10114Cu;
    // 0x10114c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10114Cu;
    {
        const bool branch_taken_0x10114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10114Cu;
        // 0x101150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10114c) {
            ctx->pc = 0x101178u;
            goto label_101178;
        }
    }
    ctx->pc = 0x101154u;
    // 0x101154: 0x0  nop
    ctx->pc = 0x101154u;
    // NOP
label_101158:
    // 0x101158: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x101158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x10115c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10115cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x101160: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x101160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101164: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x101164u;
    {
        const bool branch_taken_0x101164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101164u;
        // 0x101168: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101164) {
            ctx->pc = 0x101100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101100;
        }
    }
    ctx->pc = 0x10116Cu;
    // 0x10116c: 0x0  nop
    ctx->pc = 0x10116cu;
    // NOP
label_101170:
    // 0x101170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101174: 0x0  nop
    ctx->pc = 0x101174u;
    // NOP
label_101178:
    // 0x101178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101178u;
    {
        const bool branch_taken_0x101178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101178u;
        // 0x10117c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101178) {
            ctx->pc = 0x101190u;
            goto label_101190;
        }
    }
    ctx->pc = 0x101180u;
    // 0x101180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101184: 0xc040894  jal         func_102250
    ctx->pc = 0x101184u;
    SET_GPR_U32(ctx, 31, 0x10118Cu);
    ctx->pc = 0x101188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101184u;
    // 0x101188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102250u, 0x101184u, 0x10118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10118Cu;
label_10118c:
    // 0x10118c: 0x0  nop
    ctx->pc = 0x10118cu;
    // NOP
label_101190:
    // 0x101190: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x101190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x101194: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x101194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101198: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10119c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x10119Cu;
    {
        const bool branch_taken_0x10119c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10119Cu;
        // 0x1011a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10119c) {
            ctx->pc = 0x101218u;
            goto label_101218;
        }
    }
    ctx->pc = 0x1011A4u;
    // 0x1011a4: 0x0  nop
    ctx->pc = 0x1011a4u;
    // NOP
label_1011a8:
    // 0x1011a8: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x1011a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1011ac: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1011acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1011b0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1011b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1011b4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1011b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1011b8: 0x248418f0  addiu       $a0, $a0, 0x18F0
    ctx->pc = 0x1011b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6384));
    // 0x1011bc: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1011bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1011c0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1011c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1011c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1011c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1011c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1011cc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1011ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1011d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1011d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1011d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1011d8: 0xafc200a4  sw          $v0, 0xA4($fp)
    ctx->pc = 0x1011d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 2));
    // 0x1011dc: 0x8fc500a4  lw          $a1, 0xA4($fp)
    ctx->pc = 0x1011dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 164)));
    // 0x1011e0: 0xc040178  jal         func_1005E0
    ctx->pc = 0x1011E0u;
    SET_GPR_U32(ctx, 31, 0x1011E8u);
    ctx->pc = 0x1011E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011E0u;
    // 0x1011e4: 0x27c60090  addiu       $a2, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E0u, 0x1011E0u, 0x1011E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011E8u;
label_1011e8:
    // 0x1011e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1011e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1011ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1011ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1011f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1011F0u;
    {
        const bool branch_taken_0x1011f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1011f0) {
            ctx->pc = 0x101200u;
            goto label_101200;
        }
    }
    ctx->pc = 0x1011F8u;
    // 0x1011f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1011F8u;
    {
        const bool branch_taken_0x1011f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F8u;
        // 0x1011fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011f8) {
            ctx->pc = 0x101220u;
            goto label_101220;
        }
    }
    ctx->pc = 0x101200u;
label_101200:
    // 0x101200: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x101204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101208: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10120c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10120Cu;
    {
        const bool branch_taken_0x10120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10120Cu;
        // 0x101210: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10120c) {
            ctx->pc = 0x1011A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1011a8;
        }
    }
    ctx->pc = 0x101214u;
    // 0x101214: 0x0  nop
    ctx->pc = 0x101214u;
    // NOP
label_101218:
    // 0x101218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10121c: 0x0  nop
    ctx->pc = 0x10121cu;
    // NOP
label_101220:
    // 0x101220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x101220u;
    {
        const bool branch_taken_0x101220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101220) {
            ctx->pc = 0x101250u;
            goto label_101250;
        }
    }
    ctx->pc = 0x101228u;
    // 0x101228: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x101228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x10122c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x10122cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x101230: 0x24425fc0  addiu       $v0, $v0, 0x5FC0
    ctx->pc = 0x101230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24512));
    // 0x101234: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x101234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x101238: 0x24841910  addiu       $a0, $a0, 0x1910
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    // 0x10123c: 0xafc200ac  sw          $v0, 0xAC($fp)
    ctx->pc = 0x10123cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 2));
    // 0x101240: 0x27c500ac  addiu       $a1, $fp, 0xAC
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 172));
    // 0x101244: 0xc040894  jal         func_102250
    ctx->pc = 0x101244u;
    SET_GPR_U32(ctx, 31, 0x10124Cu);
    ctx->pc = 0x101248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101244u;
    // 0x101248: 0x24c61290  addiu       $a2, $a2, 0x1290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102250u, 0x101244u, 0x10124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10124Cu;
label_10124c:
    // 0x10124c: 0x0  nop
    ctx->pc = 0x10124cu;
    // NOP
label_101250:
    // 0x101250: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x101250u;
    SET_GPR_U32(ctx, 31, 0x101258u);
    ctx->pc = 0x101254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101250u;
    // 0x101254: 0x27c40060  addiu       $a0, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x101250u, 0x101258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101258u;
label_101258:
    // 0x101258: 0xc040224  jal         func_100890
    ctx->pc = 0x101258u;
    SET_GPR_U32(ctx, 31, 0x101260u);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x101258u, 0x101260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101260u;
label_101260:
    // 0x101260: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x101260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x101264: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x101264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101268: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x101268u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10126c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10126cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10127c: 0x3e00008  jr          $ra
    ctx->pc = 0x10127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10127Cu;
        // 0x101280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101284u;
}
