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

// Function: sub_0034F210
// Address: 0x34f210 - 0x34f4e4
void sub_0034F210_0x34f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F210_0x34f210");
#endif

    switch (ctx->pc) {
        case 0x34f2b0u: goto label_34f2b0;
        case 0x34f2c4u: goto label_34f2c4;
        case 0x34f2dcu: goto label_34f2dc;
        case 0x34f2f4u: goto label_34f2f4;
        case 0x34f30cu: goto label_34f30c;
        case 0x34f320u: goto label_34f320;
        case 0x34f334u: goto label_34f334;
        case 0x34f39cu: goto label_34f39c;
        case 0x34f3b0u: goto label_34f3b0;
        case 0x34f3b8u: goto label_34f3b8;
        case 0x34f3d8u: goto label_34f3d8;
        case 0x34f408u: goto label_34f408;
        case 0x34f43cu: goto label_34f43c;
        case 0x34f46cu: goto label_34f46c;
        case 0x34f480u: goto label_34f480;
        case 0x34f4a8u: goto label_34f4a8;
        default: break;
    }

    ctx->pc = 0x34f210u;

    // 0x34f210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f224: 0x9084002a  lbu         $a0, 0x2A($a0)
    ctx->pc = 0x34f224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34f228: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x34f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x34f22c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F22Cu;
    {
        const bool branch_taken_0x34f22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F22Cu;
        // 0x34f230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f22c) {
            ctx->pc = 0x34F240u;
            goto label_34f240;
        }
    }
    ctx->pc = 0x34F234u;
    // 0x34f234: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x34F234u;
    {
        const bool branch_taken_0x34f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f234) {
            ctx->pc = 0x34F4D0u;
            goto label_34f4d0;
        }
    }
    ctx->pc = 0x34F23Cu;
    // 0x34f23c: 0x0  nop
    ctx->pc = 0x34f23cu;
    // NOP
label_34f240:
    // 0x34f240: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x34f240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34f244: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x34f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34f248: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34F248u;
    {
        const bool branch_taken_0x34f248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F248u;
        // 0x34f24c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f248) {
            ctx->pc = 0x34F278u;
            goto label_34f278;
        }
    }
    ctx->pc = 0x34F250u;
    // 0x34f250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F250u;
    {
        const bool branch_taken_0x34f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f250) {
            ctx->pc = 0x34F260u;
            goto label_34f260;
        }
    }
    ctx->pc = 0x34F258u;
    // 0x34f258: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x34F258u;
    {
        const bool branch_taken_0x34f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F258u;
        // 0x34f25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f258) {
            ctx->pc = 0x34F4D0u;
            goto label_34f4d0;
        }
    }
    ctx->pc = 0x34F260u;
label_34f260:
    // 0x34f260: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x34f260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f264: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x34f264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34f268: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x34f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x34f26c: 0xa222002a  sb          $v0, 0x2A($s1)
    ctx->pc = 0x34f26cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f270: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x34f270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x34f274: 0xa2250028  sb          $a1, 0x28($s1)
    ctx->pc = 0x34f274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 5));
label_34f278:
    // 0x34f278: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x34f278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34f27c: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x34f27cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34f280: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x34F280u;
    {
        const bool branch_taken_0x34f280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F280u;
        // 0x34f284: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f280) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F288u;
    // 0x34f288: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x34f28c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f290: 0x2463f710  addiu       $v1, $v1, -0x8F0
    ctx->pc = 0x34f290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965008));
    // 0x34f294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f29c: 0x400008  jr          $v0
    ctx->pc = 0x34F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34F2A8u: goto label_34f2a8;
            case 0x34F2B8u: goto label_34f2b8;
            case 0x34F2D0u: goto label_34f2d0;
            case 0x34F2E8u: goto label_34f2e8;
            case 0x34F300u: goto label_34f300;
            case 0x34F318u: goto label_34f318;
            case 0x34F328u: goto label_34f328;
            case 0x34F338u: goto label_34f338;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F29Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34F2A4u;
    // 0x34f2a4: 0x0  nop
    ctx->pc = 0x34f2a4u;
    // NOP
label_34f2a8:
    // 0x34f2a8: 0xc0d3d54  jal         func_34F550
    ctx->pc = 0x34F2A8u;
    SET_GPR_U32(ctx, 31, 0x34F2B0u);
    ctx->pc = 0x34F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F2A8u;
    // 0x34f2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F550u, 0x34F2A8u, 0x34F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2B0u;
label_34f2b0:
    // 0x34f2b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x34F2B0u;
    {
        const bool branch_taken_0x34f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2B0u;
        // 0x34f2b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2b0) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F2B8u;
label_34f2b8:
    // 0x34f2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f2bc: 0xc0d4148  jal         func_350520
    ctx->pc = 0x34F2BCu;
    SET_GPR_U32(ctx, 31, 0x34F2C4u);
    ctx->pc = 0x34F2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F2BCu;
    // 0x34f2c0: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350520u, 0x34F2BCu, 0x34F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2C4u;
label_34f2c4:
    // 0x34f2c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x34F2C4u;
    {
        const bool branch_taken_0x34f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2C4u;
        // 0x34f2c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2c4) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F2CCu;
    // 0x34f2cc: 0x0  nop
    ctx->pc = 0x34f2ccu;
    // NOP
label_34f2d0:
    // 0x34f2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f2d4: 0xc0d4148  jal         func_350520
    ctx->pc = 0x34F2D4u;
    SET_GPR_U32(ctx, 31, 0x34F2DCu);
    ctx->pc = 0x34F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F2D4u;
    // 0x34f2d8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350520u, 0x34F2D4u, 0x34F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2DCu;
label_34f2dc:
    // 0x34f2dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34F2DCu;
    {
        const bool branch_taken_0x34f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2DCu;
        // 0x34f2e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2dc) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F2E4u;
    // 0x34f2e4: 0x0  nop
    ctx->pc = 0x34f2e4u;
    // NOP
label_34f2e8:
    // 0x34f2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f2ec: 0xc0d4148  jal         func_350520
    ctx->pc = 0x34F2ECu;
    SET_GPR_U32(ctx, 31, 0x34F2F4u);
    ctx->pc = 0x34F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F2ECu;
    // 0x34f2f0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350520u, 0x34F2ECu, 0x34F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2F4u;
label_34f2f4:
    // 0x34f2f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34F2F4u;
    {
        const bool branch_taken_0x34f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F2F4u;
        // 0x34f2f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2f4) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F2FCu;
    // 0x34f2fc: 0x0  nop
    ctx->pc = 0x34f2fcu;
    // NOP
label_34f300:
    // 0x34f300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f304: 0xc0d4148  jal         func_350520
    ctx->pc = 0x34F304u;
    SET_GPR_U32(ctx, 31, 0x34F30Cu);
    ctx->pc = 0x34F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F304u;
    // 0x34f308: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350520u, 0x34F304u, 0x34F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F30Cu;
label_34f30c:
    // 0x34f30c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34F30Cu;
    {
        const bool branch_taken_0x34f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F30Cu;
        // 0x34f310: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f30c) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F314u;
    // 0x34f314: 0x0  nop
    ctx->pc = 0x34f314u;
    // NOP
label_34f318:
    // 0x34f318: 0xc0d3e4c  jal         func_34F930
    ctx->pc = 0x34F318u;
    SET_GPR_U32(ctx, 31, 0x34F320u);
    ctx->pc = 0x34F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F318u;
    // 0x34f31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F930u, 0x34F318u, 0x34F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F320u;
label_34f320:
    // 0x34f320: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34F320u;
    {
        const bool branch_taken_0x34f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F320u;
        // 0x34f324: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f320) {
            ctx->pc = 0x34F338u;
            goto label_34f338;
        }
    }
    ctx->pc = 0x34F328u;
label_34f328:
    // 0x34f328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f32c: 0xc0d4148  jal         func_350520
    ctx->pc = 0x34F32Cu;
    SET_GPR_U32(ctx, 31, 0x34F334u);
    ctx->pc = 0x34F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F32Cu;
    // 0x34f330: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350520u, 0x34F32Cu, 0x34F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F334u;
label_34f334:
    // 0x34f334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34f334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f338:
    // 0x34f338: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x34f338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34f33c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34f33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34f340: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x34F340u;
    {
        const bool branch_taken_0x34f340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F340u;
        // 0x34f344: 0xa222002a  sb          $v0, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f340) {
            ctx->pc = 0x34F400u;
            goto label_34f400;
        }
    }
    ctx->pc = 0x34F348u;
    // 0x34f348: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x34f348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34f34c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34f350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f354: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f358: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x34f35c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x34f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x34f360: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34f364: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34f364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f368: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34f36c: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x34f36cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f370: 0x8c28cebc  lw          $t0, -0x3144($at)
    ctx->pc = 0x34f370u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x34f374: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x34f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x34f378: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x34f378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x34f37c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x34f37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x34f380: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f388: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x34f388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 7));
    // 0x34f38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f394: 0xc095130  jal         func_2544C0
    ctx->pc = 0x34F394u;
    SET_GPR_U32(ctx, 31, 0x34F39Cu);
    ctx->pc = 0x34F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F394u;
    // 0x34f398: 0xa04004f4  sb          $zero, 0x4F4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1268), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x34F394u, 0x34F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F39Cu;
label_34f39c:
    // 0x34f39c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34f3a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f3a4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34f3a8: 0xc095130  jal         func_2544C0
    ctx->pc = 0x34F3A8u;
    SET_GPR_U32(ctx, 31, 0x34F3B0u);
    ctx->pc = 0x34F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3A8u;
    // 0x34f3ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x34F3A8u, 0x34F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3B0u;
label_34f3b0:
    // 0x34f3b0: 0xc0d4344  jal         func_350D10
    ctx->pc = 0x34F3B0u;
    SET_GPR_U32(ctx, 31, 0x34F3B8u);
    ctx->pc = 0x34F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F3B0u;
    // 0x34f3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D10u, 0x34F3B0u, 0x34F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F3B8u;
label_34f3b8:
    // 0x34f3b8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x34f3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34f3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f3c0: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x34F3C0u;
    {
        const bool branch_taken_0x34f3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F3C0u;
        // 0x34f3c4: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f3c0) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F3C8u;
    // 0x34f3c8: 0x8c24f680  lw          $a0, -0x980($at)
    ctx->pc = 0x34f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964864)));
    // 0x34f3cc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x34f3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f3d0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x34F3D0u;
    {
        const bool branch_taken_0x34f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F3D0u;
        // 0x34f3d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f3d0) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F3D8u;
label_34f3d8:
    // 0x34f3d8: 0xa0830163  sb          $v1, 0x163($a0)
    ctx->pc = 0x34f3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 355), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f3dc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34f3e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x34f3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f3e4: 0x0  nop
    ctx->pc = 0x34f3e4u;
    // NOP
    // 0x34f3e8: 0x0  nop
    ctx->pc = 0x34f3e8u;
    // NOP
    // 0x34f3ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F3ECu;
    {
        const bool branch_taken_0x34f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f3ec) {
            ctx->pc = 0x34F3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f3d8;
        }
    }
    ctx->pc = 0x34F3F4u;
    // 0x34f3f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34F3F4u;
    {
        const bool branch_taken_0x34f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f3f4) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F3FCu;
    // 0x34f3fc: 0x0  nop
    ctx->pc = 0x34f3fcu;
    // NOP
label_34f400:
    // 0x34f400: 0xc0d42c0  jal         func_350B00
    ctx->pc = 0x34F400u;
    SET_GPR_U32(ctx, 31, 0x34F408u);
    ctx->pc = 0x34F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F400u;
    // 0x34f404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B00u, 0x34F400u, 0x34F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F408u;
label_34f408:
    // 0x34f408: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x34f408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34f40c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x34f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x34f410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34f414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34f418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f420: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x34f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x34f424: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x34f424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f428: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x34f428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x34f42c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f430: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x34f430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x34f434: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34F434u;
    SET_GPR_U32(ctx, 31, 0x34F43Cu);
    ctx->pc = 0x34F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F434u;
    // 0x34f438: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34F434u, 0x34F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F43Cu;
label_34f43c:
    // 0x34f43c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x34f440: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34f440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34f444: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x34f444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x34f448: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x34f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x34f44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f450: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34f454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34f454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f45c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f464: 0xc095130  jal         func_2544C0
    ctx->pc = 0x34F464u;
    SET_GPR_U32(ctx, 31, 0x34F46Cu);
    ctx->pc = 0x34F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F464u;
    // 0x34f468: 0xa04504f4  sb          $a1, 0x4F4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1268), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x34F464u, 0x34F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F46Cu;
label_34f46c:
    // 0x34f46c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x34f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x34f470: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34f470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f474: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x34f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x34f478: 0xc095130  jal         func_2544C0
    ctx->pc = 0x34F478u;
    SET_GPR_U32(ctx, 31, 0x34F480u);
    ctx->pc = 0x34F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F478u;
    // 0x34f47c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x34F478u, 0x34F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F480u;
label_34f480:
    // 0x34f480: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x34f480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34f484: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34F484u;
    {
        const bool branch_taken_0x34f484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F484u;
        // 0x34f488: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f484) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F48Cu;
    // 0x34f48c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34F48Cu;
    {
        const bool branch_taken_0x34f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F48Cu;
        // 0x34f490: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f48c) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F494u;
    // 0x34f494: 0x8c24f680  lw          $a0, -0x980($at)
    ctx->pc = 0x34f494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964864)));
    // 0x34f498: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x34f498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f49c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34F49Cu;
    {
        const bool branch_taken_0x34f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f49c) {
            ctx->pc = 0x34F4C8u;
            goto label_34f4c8;
        }
    }
    ctx->pc = 0x34F4A4u;
    // 0x34f4a4: 0x0  nop
    ctx->pc = 0x34f4a4u;
    // NOP
label_34f4a8:
    // 0x34f4a8: 0xa0830163  sb          $v1, 0x163($a0)
    ctx->pc = 0x34f4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 355), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f4ac: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x34f4b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x34f4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34f4b4: 0x0  nop
    ctx->pc = 0x34f4b4u;
    // NOP
    // 0x34f4b8: 0x0  nop
    ctx->pc = 0x34f4b8u;
    // NOP
    // 0x34f4bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34F4BCu;
    {
        const bool branch_taken_0x34f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f4bc) {
            ctx->pc = 0x34F4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f4a8;
        }
    }
    ctx->pc = 0x34F4C4u;
    // 0x34f4c4: 0x0  nop
    ctx->pc = 0x34f4c4u;
    // NOP
label_34f4c8:
    // 0x34f4c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34f4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4cc: 0x0  nop
    ctx->pc = 0x34f4ccu;
    // NOP
label_34f4d0:
    // 0x34f4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x34F4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F4DCu;
        // 0x34f4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F4E4u;
}
