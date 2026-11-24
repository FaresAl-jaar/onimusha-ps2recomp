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

// Function: sub_002F52A0
// Address: 0x2f52a0 - 0x2f5434
void sub_002F52A0_0x2f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F52A0_0x2f52a0");
#endif

    switch (ctx->pc) {
        case 0x2f52d8u: goto label_2f52d8;
        case 0x2f5310u: goto label_2f5310;
        case 0x2f532cu: goto label_2f532c;
        case 0x2f5364u: goto label_2f5364;
        case 0x2f539cu: goto label_2f539c;
        case 0x2f53d4u: goto label_2f53d4;
        case 0x2f5404u: goto label_2f5404;
        default: break;
    }

    ctx->pc = 0x2f52a0u;

    // 0x2f52a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f52a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f52a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f52a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f52ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f52acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f52b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f52b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f52b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F52B4u;
    {
        const bool branch_taken_0x2f52b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52B4u;
        // 0x2f52b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52b4) {
            ctx->pc = 0x2F52C8u;
            goto label_2f52c8;
        }
    }
    ctx->pc = 0x2F52BCu;
    // 0x2f52bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f52c0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2f52c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f52c4: 0x0  nop
    ctx->pc = 0x2f52c4u;
    // NOP
label_2f52c8:
    // 0x2f52c8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x2f52c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x2f52cc: 0x8c30ea24  lw          $s0, -0x15DC($at)
    ctx->pc = 0x2f52ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x2f52d0: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x2F52D0u;
    SET_GPR_U32(ctx, 31, 0x2F52D8u);
    ctx->pc = 0x2F52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52D0u;
    // 0x2f52d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x2F52D0u, 0x2F52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52D8u;
label_2f52d8:
    // 0x2f52d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f52d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f52dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F52DCu;
    {
        const bool branch_taken_0x2f52dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f52dc) {
            ctx->pc = 0x2F52F0u;
            goto label_2f52f0;
        }
    }
    ctx->pc = 0x2F52E4u;
    // 0x2f52e4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2F52E4u;
    {
        const bool branch_taken_0x2f52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52E4u;
        // 0x2f52e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52e4) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F52ECu;
    // 0x2f52ec: 0x0  nop
    ctx->pc = 0x2f52ecu;
    // NOP
label_2f52f0:
    // 0x2f52f0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2f52f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f52f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F52F4u;
    {
        const bool branch_taken_0x2f52f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52F4u;
        // 0x2f52f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52f4) {
            ctx->pc = 0x2F5308u;
            goto label_2f5308;
        }
    }
    ctx->pc = 0x2F52FCu;
    // 0x2f52fc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2F52FCu;
    {
        const bool branch_taken_0x2f52fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f52fc) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5304u;
    // 0x2f5304: 0x0  nop
    ctx->pc = 0x2f5304u;
    // NOP
label_2f5308:
    // 0x2f5308: 0xc0bd498  jal         func_2F5260
    ctx->pc = 0x2F5308u;
    SET_GPR_U32(ctx, 31, 0x2F5310u);
    ctx->pc = 0x2F530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5308u;
    // 0x2f530c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5260u, 0x2F5308u, 0x2F5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5310u;
label_2f5310:
    // 0x2f5310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5310u;
    {
        const bool branch_taken_0x2f5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5310) {
            ctx->pc = 0x2F5320u;
            goto label_2f5320;
        }
    }
    ctx->pc = 0x2F5318u;
    // 0x2f5318: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F5318u;
    {
        const bool branch_taken_0x2f5318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5318u;
        // 0x2f531c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5318) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5320u;
label_2f5320:
    // 0x2f5320: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f5320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f5324: 0xc063d4c  jal         func_18F530
    ctx->pc = 0x2F5324u;
    SET_GPR_U32(ctx, 31, 0x2F532Cu);
    ctx->pc = 0x2F5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5324u;
    // 0x2f5328: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F530u, 0x2F5324u, 0x2F532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F532Cu;
label_2f532c:
    // 0x2f532c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F532Cu;
    {
        const bool branch_taken_0x2f532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f532c) {
            ctx->pc = 0x2F5340u;
            goto label_2f5340;
        }
    }
    ctx->pc = 0x2F5334u;
    // 0x2f5334: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2F5334u;
    {
        const bool branch_taken_0x2f5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5334u;
        // 0x2f5338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5334) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F533Cu;
    // 0x2f533c: 0x0  nop
    ctx->pc = 0x2f533cu;
    // NOP
label_2f5340:
    // 0x2f5340: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5344: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2f5344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2f5348: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f5348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f534c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F534Cu;
    {
        const bool branch_taken_0x2f534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F534Cu;
        // 0x2f5350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f534c) {
            ctx->pc = 0x2F5370u;
            goto label_2f5370;
        }
    }
    ctx->pc = 0x2F5354u;
    // 0x2f5354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f535c: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2F535Cu;
    SET_GPR_U32(ctx, 31, 0x2F5364u);
    ctx->pc = 0x2F5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F535Cu;
    // 0x2f5360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2F535Cu, 0x2F5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5364u;
label_2f5364:
    // 0x2f5364: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F5364u;
    {
        const bool branch_taken_0x2f5364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5364u;
        // 0x2f5368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5364) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F536Cu;
    // 0x2f536c: 0x0  nop
    ctx->pc = 0x2f536cu;
    // NOP
label_2f5370:
    // 0x2f5370: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5374: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f5374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2f5378: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2f5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2f537c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F537Cu;
    {
        const bool branch_taken_0x2f537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F537Cu;
        // 0x2f5380: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f537c) {
            ctx->pc = 0x2F53B0u;
            goto label_2f53b0;
        }
    }
    ctx->pc = 0x2F5384u;
    // 0x2f5384: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F5384u;
    {
        const bool branch_taken_0x2f5384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5384u;
        // 0x2f5388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5384) {
            ctx->pc = 0x2F5418u;
            goto label_2f5418;
        }
    }
    ctx->pc = 0x2F538Cu;
    // 0x2f538c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2f538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f5390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5394: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2F5394u;
    SET_GPR_U32(ctx, 31, 0x2F539Cu);
    ctx->pc = 0x2F5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5394u;
    // 0x2f5398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2F5394u, 0x2F539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F539Cu;
label_2f539c:
    // 0x2f539c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F539Cu;
    {
        const bool branch_taken_0x2f539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f539c) {
            ctx->pc = 0x2F5418u;
            goto label_2f5418;
        }
    }
    ctx->pc = 0x2F53A4u;
    // 0x2f53a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2F53A4u;
    {
        const bool branch_taken_0x2f53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A4u;
        // 0x2f53a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53a4) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F53ACu;
    // 0x2f53ac: 0x0  nop
    ctx->pc = 0x2f53acu;
    // NOP
label_2f53b0:
    // 0x2f53b0: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x2f53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x2f53b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F53B4u;
    {
        const bool branch_taken_0x2f53b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53B4u;
        // 0x2f53b8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53b4) {
            ctx->pc = 0x2F53E8u;
            goto label_2f53e8;
        }
    }
    ctx->pc = 0x2F53BCu;
    // 0x2f53bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F53BCu;
    {
        const bool branch_taken_0x2f53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53BCu;
        // 0x2f53c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53bc) {
            ctx->pc = 0x2F53E8u;
            goto label_2f53e8;
        }
    }
    ctx->pc = 0x2F53C4u;
    // 0x2f53c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f53c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f53c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f53c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f53cc: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2F53CCu;
    SET_GPR_U32(ctx, 31, 0x2F53D4u);
    ctx->pc = 0x2F53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53CCu;
    // 0x2f53d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2F53CCu, 0x2F53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53D4u;
label_2f53d4:
    // 0x2f53d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F53D4u;
    {
        const bool branch_taken_0x2f53d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53d4) {
            ctx->pc = 0x2F53E8u;
            goto label_2f53e8;
        }
    }
    ctx->pc = 0x2F53DCu;
    // 0x2f53dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F53DCu;
    {
        const bool branch_taken_0x2f53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53DCu;
        // 0x2f53e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53dc) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F53E4u;
    // 0x2f53e4: 0x0  nop
    ctx->pc = 0x2f53e4u;
    // NOP
label_2f53e8:
    // 0x2f53e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2f53e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2f53ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F53ECu;
    {
        const bool branch_taken_0x2f53ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ECu;
        // 0x2f53f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53ec) {
            ctx->pc = 0x2F5418u;
            goto label_2f5418;
        }
    }
    ctx->pc = 0x2F53F4u;
    // 0x2f53f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f53f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f53f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53fc: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2F53FCu;
    SET_GPR_U32(ctx, 31, 0x2F5404u);
    ctx->pc = 0x2F5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53FCu;
    // 0x2f5400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2F53FCu, 0x2F5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5404u;
label_2f5404:
    // 0x2f5404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5404u;
    {
        const bool branch_taken_0x2f5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5404) {
            ctx->pc = 0x2F5418u;
            goto label_2f5418;
        }
    }
    ctx->pc = 0x2F540Cu;
    // 0x2f540c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F540Cu;
    {
        const bool branch_taken_0x2f540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F540Cu;
        // 0x2f5410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f540c) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5414u;
    // 0x2f5414: 0x0  nop
    ctx->pc = 0x2f5414u;
    // NOP
label_2f5418:
    // 0x2f5418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f541c: 0x0  nop
    ctx->pc = 0x2f541cu;
    // NOP
label_2f5420:
    // 0x2f5420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f542c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F542Cu;
        // 0x2f5430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5434u;
}
