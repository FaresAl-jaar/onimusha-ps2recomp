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

// Function: sub_00338300
// Address: 0x338300 - 0x338620
void sub_00338300_0x338300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338300_0x338300");
#endif

    switch (ctx->pc) {
        case 0x338330u: goto label_338330;
        case 0x338348u: goto label_338348;
        case 0x3383c8u: goto label_3383c8;
        case 0x3383e8u: goto label_3383e8;
        case 0x338450u: goto label_338450;
        case 0x338570u: goto label_338570;
        default: break;
    }

    ctx->pc = 0x338300u;

    // 0x338300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33830c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x338310: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x338310u;
    {
        const bool branch_taken_0x338310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338310u;
        // 0x338314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338310) {
            ctx->pc = 0x338610u;
            goto label_338610;
        }
    }
    ctx->pc = 0x338318u;
    // 0x338318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x338318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33831c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33831cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338320: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x338320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
    // 0x338324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338328: 0x3444967f  ori         $a0, $v0, 0x967F
    ctx->pc = 0x338328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
    // 0x33832c: 0x0  nop
    ctx->pc = 0x33832cu;
    // NOP
label_338330:
    // 0x338330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x338330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x338334: 0x2502006c  addiu       $v0, $t0, 0x6C
    ctx->pc = 0x338334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 108));
    // 0x338338: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x338338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33833c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33833cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x338340: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338344: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x338344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_338348:
    // 0x338348: 0x15250009  bne         $t1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x338348u;
    {
        const bool branch_taken_0x338348 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 5));
        if (branch_taken_0x338348) {
            ctx->pc = 0x338370u;
            goto label_338370;
        }
    }
    ctx->pc = 0x338350u;
    // 0x338350: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x338350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x338354: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x338358: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x338358u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33835c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x33835Cu;
    {
        const bool branch_taken_0x33835c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33835c) {
            ctx->pc = 0x338398u;
            goto label_338398;
        }
    }
    ctx->pc = 0x338364u;
    // 0x338364: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x338364u;
    {
        const bool branch_taken_0x338364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338364u;
        // 0x338368: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338364) {
            ctx->pc = 0x338398u;
            goto label_338398;
        }
    }
    ctx->pc = 0x33836Cu;
    // 0x33836c: 0x0  nop
    ctx->pc = 0x33836cu;
    // NOP
label_338370:
    // 0x338370: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x338370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x338374: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x338374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x338378: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x338378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33837c: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x33837cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x338380: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x338380u;
    {
        const bool branch_taken_0x338380 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x338384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338380u;
        // 0x338384: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338380) {
            ctx->pc = 0x338390u;
            goto label_338390;
        }
    }
    ctx->pc = 0x338388u;
    // 0x338388: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x338388u;
    {
        const bool branch_taken_0x338388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338388u;
        // 0x33838c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338388) {
            ctx->pc = 0x338398u;
            goto label_338398;
        }
    }
    ctx->pc = 0x338390u;
label_338390:
    // 0x338390: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x338390u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x338394: 0x0  nop
    ctx->pc = 0x338394u;
    // NOP
label_338398:
    // 0x338398: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x338398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x33839c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x33839cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x3383a0: 0x29220008  slti        $v0, $t1, 0x8
    ctx->pc = 0x3383a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3383a4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3383a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3383a8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3383A8u;
    {
        const bool branch_taken_0x3383a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383A8u;
        // 0x3383ac: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383a8) {
            ctx->pc = 0x338348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338348;
        }
    }
    ctx->pc = 0x3383B0u;
    // 0x3383b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3383b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3383b4: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x3383b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3383b8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3383B8u;
    {
        const bool branch_taken_0x3383b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3383BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383B8u;
        // 0x3383bc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383b8) {
            ctx->pc = 0x338330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338330;
        }
    }
    ctx->pc = 0x3383C0u;
    // 0x3383c0: 0xc0d9044  jal         func_364110
    ctx->pc = 0x3383C0u;
    SET_GPR_U32(ctx, 31, 0x3383C8u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x3383C0u, 0x3383C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383C8u;
label_3383c8:
    // 0x3383c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3383c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383cc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3383CCu;
    {
        const bool branch_taken_0x3383cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3383cc) {
            ctx->pc = 0x338448u;
            goto label_338448;
        }
    }
    ctx->pc = 0x3383D4u;
    // 0x3383d4: 0x86030f50  lh          $v1, 0xF50($s0)
    ctx->pc = 0x3383d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3920)));
    // 0x3383d8: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3383D8u;
    {
        const bool branch_taken_0x3383d8 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3383d8) {
            ctx->pc = 0x3383F0u;
            goto label_3383f0;
        }
    }
    ctx->pc = 0x3383E0u;
    // 0x3383e0: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3383E0u;
    SET_GPR_U32(ctx, 31, 0x3383E8u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3383E0u, 0x3383E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383E8u;
label_3383e8:
    // 0x3383e8: 0xa6020f50  sh          $v0, 0xF50($s0)
    ctx->pc = 0x3383e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3920), (uint16_t)GPR_U32(ctx, 2));
    // 0x3383ec: 0x0  nop
    ctx->pc = 0x3383ecu;
    // NOP
label_3383f0:
    // 0x3383f0: 0x86050f50  lh          $a1, 0xF50($s0)
    ctx->pc = 0x3383f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3920)));
    // 0x3383f4: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3383F4u;
    {
        const bool branch_taken_0x3383f4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3383F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383F4u;
        // 0x3383f8: 0x28a10016  slti        $at, $a1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383f4) {
            ctx->pc = 0x338448u;
            goto label_338448;
        }
    }
    ctx->pc = 0x3383FCu;
    // 0x3383fc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x3383FCu;
    {
        const bool branch_taken_0x3383fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x338400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383FCu;
        // 0x338400: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383fc) {
            ctx->pc = 0x338448u;
            goto label_338448;
        }
    }
    ctx->pc = 0x338404u;
    // 0x338404: 0x92030dcd  lbu         $v1, 0xDCD($s0)
    ctx->pc = 0x338404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3533)));
    // 0x338408: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x338408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33840c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x33840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x338410: 0x90a40dcd  lbu         $a0, 0xDCD($a1)
    ctx->pc = 0x338410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3533)));
    // 0x338414: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338418: 0xa0a30dcd  sb          $v1, 0xDCD($a1)
    ctx->pc = 0x338418u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3533), (uint8_t)GPR_U32(ctx, 3));
    // 0x33841c: 0xa2000dcd  sb          $zero, 0xDCD($s0)
    ctx->pc = 0x33841cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3533), (uint8_t)GPR_U32(ctx, 0));
    // 0x338420: 0x86050f50  lh          $a1, 0xF50($s0)
    ctx->pc = 0x338420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3920)));
    // 0x338424: 0x92030dce  lbu         $v1, 0xDCE($s0)
    ctx->pc = 0x338424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3534)));
    // 0x338428: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x338428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33842c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x338430: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x338430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x338434: 0x90a40dce  lbu         $a0, 0xDCE($a1)
    ctx->pc = 0x338434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3534)));
    // 0x338438: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33843c: 0xa0a30dce  sb          $v1, 0xDCE($a1)
    ctx->pc = 0x33843cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3534), (uint8_t)GPR_U32(ctx, 3));
    // 0x338440: 0xa2000dce  sb          $zero, 0xDCE($s0)
    ctx->pc = 0x338440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3534), (uint8_t)GPR_U32(ctx, 0));
    // 0x338444: 0x0  nop
    ctx->pc = 0x338444u;
    // NOP
label_338448:
    // 0x338448: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x338448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33844c: 0x0  nop
    ctx->pc = 0x33844cu;
    // NOP
label_338450:
    // 0x338450: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x338450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338454: 0x90c50e0e  lbu         $a1, 0xE0E($a2)
    ctx->pc = 0x338454u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3598)));
    // 0x338458: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x338458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33845c: 0x2864002e  slti        $a0, $v1, 0x2E
    ctx->pc = 0x33845cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x338460: 0xa0c50e44  sb          $a1, 0xE44($a2)
    ctx->pc = 0x338460u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3652), (uint8_t)GPR_U32(ctx, 5));
    // 0x338464: 0x90c50e7a  lbu         $a1, 0xE7A($a2)
    ctx->pc = 0x338464u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3706)));
    // 0x338468: 0xa0c50eb0  sb          $a1, 0xEB0($a2)
    ctx->pc = 0x338468u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3760), (uint8_t)GPR_U32(ctx, 5));
    // 0x33846c: 0x90c50e0f  lbu         $a1, 0xE0F($a2)
    ctx->pc = 0x33846cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3599)));
    // 0x338470: 0xa0c50e45  sb          $a1, 0xE45($a2)
    ctx->pc = 0x338470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3653), (uint8_t)GPR_U32(ctx, 5));
    // 0x338474: 0x90c50e7b  lbu         $a1, 0xE7B($a2)
    ctx->pc = 0x338474u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3707)));
    // 0x338478: 0xa0c50eb1  sb          $a1, 0xEB1($a2)
    ctx->pc = 0x338478u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3761), (uint8_t)GPR_U32(ctx, 5));
    // 0x33847c: 0x90c50e10  lbu         $a1, 0xE10($a2)
    ctx->pc = 0x33847cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3600)));
    // 0x338480: 0xa0c50e46  sb          $a1, 0xE46($a2)
    ctx->pc = 0x338480u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3654), (uint8_t)GPR_U32(ctx, 5));
    // 0x338484: 0x90c50e7c  lbu         $a1, 0xE7C($a2)
    ctx->pc = 0x338484u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3708)));
    // 0x338488: 0xa0c50eb2  sb          $a1, 0xEB2($a2)
    ctx->pc = 0x338488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3762), (uint8_t)GPR_U32(ctx, 5));
    // 0x33848c: 0x90c50e11  lbu         $a1, 0xE11($a2)
    ctx->pc = 0x33848cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3601)));
    // 0x338490: 0xa0c50e47  sb          $a1, 0xE47($a2)
    ctx->pc = 0x338490u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3655), (uint8_t)GPR_U32(ctx, 5));
    // 0x338494: 0x90c50e7d  lbu         $a1, 0xE7D($a2)
    ctx->pc = 0x338494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3709)));
    // 0x338498: 0xa0c50eb3  sb          $a1, 0xEB3($a2)
    ctx->pc = 0x338498u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3763), (uint8_t)GPR_U32(ctx, 5));
    // 0x33849c: 0x90c50e12  lbu         $a1, 0xE12($a2)
    ctx->pc = 0x33849cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3602)));
    // 0x3384a0: 0xa0c50e48  sb          $a1, 0xE48($a2)
    ctx->pc = 0x3384a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3656), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384a4: 0x90c50e7e  lbu         $a1, 0xE7E($a2)
    ctx->pc = 0x3384a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3710)));
    // 0x3384a8: 0xa0c50eb4  sb          $a1, 0xEB4($a2)
    ctx->pc = 0x3384a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3764), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384ac: 0x90c50e13  lbu         $a1, 0xE13($a2)
    ctx->pc = 0x3384acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3603)));
    // 0x3384b0: 0xa0c50e49  sb          $a1, 0xE49($a2)
    ctx->pc = 0x3384b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3657), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384b4: 0x90c50e7f  lbu         $a1, 0xE7F($a2)
    ctx->pc = 0x3384b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3711)));
    // 0x3384b8: 0xa0c50eb5  sb          $a1, 0xEB5($a2)
    ctx->pc = 0x3384b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3765), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384bc: 0x90c50e14  lbu         $a1, 0xE14($a2)
    ctx->pc = 0x3384bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3604)));
    // 0x3384c0: 0xa0c50e4a  sb          $a1, 0xE4A($a2)
    ctx->pc = 0x3384c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3658), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384c4: 0x90c50e80  lbu         $a1, 0xE80($a2)
    ctx->pc = 0x3384c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3712)));
    // 0x3384c8: 0xa0c50eb6  sb          $a1, 0xEB6($a2)
    ctx->pc = 0x3384c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3766), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384cc: 0x90c50e15  lbu         $a1, 0xE15($a2)
    ctx->pc = 0x3384ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3605)));
    // 0x3384d0: 0xa0c50e4b  sb          $a1, 0xE4B($a2)
    ctx->pc = 0x3384d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3659), (uint8_t)GPR_U32(ctx, 5));
    // 0x3384d4: 0x90c50e81  lbu         $a1, 0xE81($a2)
    ctx->pc = 0x3384d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3713)));
    // 0x3384d8: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x3384D8u;
    {
        const bool branch_taken_0x3384d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3384DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D8u;
        // 0x3384dc: 0xa0c50eb7  sb          $a1, 0xEB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3767), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384d8) {
            ctx->pc = 0x338450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338450;
        }
    }
    ctx->pc = 0x3384E0u;
    // 0x3384e0: 0x705821  addu        $t3, $v1, $s0
    ctx->pc = 0x3384e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3384e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3384e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3384e8: 0x916a0e0e  lbu         $t2, 0xE0E($t3)
    ctx->pc = 0x3384e8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3598)));
    // 0x3384ec: 0x904821  addu        $t1, $a0, $s0
    ctx->pc = 0x3384ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3384f0: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x3384f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3384f4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x3384f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3384f8: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x3384f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3384fc: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x3384fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x338500: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x338500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x338504: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x338504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x338508: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x338508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x33850c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x33850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x338510: 0xa16a0e44  sb          $t2, 0xE44($t3)
    ctx->pc = 0x338510u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3652), (uint8_t)GPR_U32(ctx, 10));
    // 0x338514: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x338514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338518: 0x91640e7a  lbu         $a0, 0xE7A($t3)
    ctx->pc = 0x338518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3706)));
    // 0x33851c: 0xa1640eb0  sb          $a0, 0xEB0($t3)
    ctx->pc = 0x33851cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3760), (uint8_t)GPR_U32(ctx, 4));
    // 0x338520: 0x91240e0e  lbu         $a0, 0xE0E($t1)
    ctx->pc = 0x338520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3598)));
    // 0x338524: 0xa1240e44  sb          $a0, 0xE44($t1)
    ctx->pc = 0x338524u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3652), (uint8_t)GPR_U32(ctx, 4));
    // 0x338528: 0x91240e7a  lbu         $a0, 0xE7A($t1)
    ctx->pc = 0x338528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3706)));
    // 0x33852c: 0xa1240eb0  sb          $a0, 0xEB0($t1)
    ctx->pc = 0x33852cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3760), (uint8_t)GPR_U32(ctx, 4));
    // 0x338530: 0x91040e0e  lbu         $a0, 0xE0E($t0)
    ctx->pc = 0x338530u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3598)));
    // 0x338534: 0xa1040e44  sb          $a0, 0xE44($t0)
    ctx->pc = 0x338534u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3652), (uint8_t)GPR_U32(ctx, 4));
    // 0x338538: 0x91040e7a  lbu         $a0, 0xE7A($t0)
    ctx->pc = 0x338538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3706)));
    // 0x33853c: 0xa1040eb0  sb          $a0, 0xEB0($t0)
    ctx->pc = 0x33853cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3760), (uint8_t)GPR_U32(ctx, 4));
    // 0x338540: 0x90e40e0e  lbu         $a0, 0xE0E($a3)
    ctx->pc = 0x338540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3598)));
    // 0x338544: 0xa0e40e44  sb          $a0, 0xE44($a3)
    ctx->pc = 0x338544u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3652), (uint8_t)GPR_U32(ctx, 4));
    // 0x338548: 0x90e40e7a  lbu         $a0, 0xE7A($a3)
    ctx->pc = 0x338548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3706)));
    // 0x33854c: 0xa0e40eb0  sb          $a0, 0xEB0($a3)
    ctx->pc = 0x33854cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3760), (uint8_t)GPR_U32(ctx, 4));
    // 0x338550: 0x90c40e0e  lbu         $a0, 0xE0E($a2)
    ctx->pc = 0x338550u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3598)));
    // 0x338554: 0xa0c40e44  sb          $a0, 0xE44($a2)
    ctx->pc = 0x338554u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3652), (uint8_t)GPR_U32(ctx, 4));
    // 0x338558: 0x90c40e7a  lbu         $a0, 0xE7A($a2)
    ctx->pc = 0x338558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3706)));
    // 0x33855c: 0xa0c40eb0  sb          $a0, 0xEB0($a2)
    ctx->pc = 0x33855cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3760), (uint8_t)GPR_U32(ctx, 4));
    // 0x338560: 0x90a40e0e  lbu         $a0, 0xE0E($a1)
    ctx->pc = 0x338560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3598)));
    // 0x338564: 0xa0a40e44  sb          $a0, 0xE44($a1)
    ctx->pc = 0x338564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3652), (uint8_t)GPR_U32(ctx, 4));
    // 0x338568: 0x90a40e7a  lbu         $a0, 0xE7A($a1)
    ctx->pc = 0x338568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3706)));
    // 0x33856c: 0xa0a40eb0  sb          $a0, 0xEB0($a1)
    ctx->pc = 0x33856cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3760), (uint8_t)GPR_U32(ctx, 4));
label_338570:
    // 0x338570: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x338570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x338574: 0x90c50ee6  lbu         $a1, 0xEE6($a2)
    ctx->pc = 0x338574u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3814)));
    // 0x338578: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x338578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33857c: 0x2864002d  slti        $a0, $v1, 0x2D
    ctx->pc = 0x33857cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x338580: 0xa0c50f1b  sb          $a1, 0xF1B($a2)
    ctx->pc = 0x338580u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3867), (uint8_t)GPR_U32(ctx, 5));
    // 0x338584: 0x90c50ee7  lbu         $a1, 0xEE7($a2)
    ctx->pc = 0x338584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3815)));
    // 0x338588: 0xa0c50f1c  sb          $a1, 0xF1C($a2)
    ctx->pc = 0x338588u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3868), (uint8_t)GPR_U32(ctx, 5));
    // 0x33858c: 0x90c50ee8  lbu         $a1, 0xEE8($a2)
    ctx->pc = 0x33858cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3816)));
    // 0x338590: 0xa0c50f1d  sb          $a1, 0xF1D($a2)
    ctx->pc = 0x338590u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3869), (uint8_t)GPR_U32(ctx, 5));
    // 0x338594: 0x90c50ee9  lbu         $a1, 0xEE9($a2)
    ctx->pc = 0x338594u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3817)));
    // 0x338598: 0xa0c50f1e  sb          $a1, 0xF1E($a2)
    ctx->pc = 0x338598u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3870), (uint8_t)GPR_U32(ctx, 5));
    // 0x33859c: 0x90c50eea  lbu         $a1, 0xEEA($a2)
    ctx->pc = 0x33859cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3818)));
    // 0x3385a0: 0xa0c50f1f  sb          $a1, 0xF1F($a2)
    ctx->pc = 0x3385a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3871), (uint8_t)GPR_U32(ctx, 5));
    // 0x3385a4: 0x90c50eeb  lbu         $a1, 0xEEB($a2)
    ctx->pc = 0x3385a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3819)));
    // 0x3385a8: 0xa0c50f20  sb          $a1, 0xF20($a2)
    ctx->pc = 0x3385a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3872), (uint8_t)GPR_U32(ctx, 5));
    // 0x3385ac: 0x90c50eec  lbu         $a1, 0xEEC($a2)
    ctx->pc = 0x3385acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3820)));
    // 0x3385b0: 0xa0c50f21  sb          $a1, 0xF21($a2)
    ctx->pc = 0x3385b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3873), (uint8_t)GPR_U32(ctx, 5));
    // 0x3385b4: 0x90c50eed  lbu         $a1, 0xEED($a2)
    ctx->pc = 0x3385b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3821)));
    // 0x3385b8: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3385B8u;
    {
        const bool branch_taken_0x3385b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3385BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385B8u;
        // 0x3385bc: 0xa0c50f22  sb          $a1, 0xF22($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3874), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385b8) {
            ctx->pc = 0x338570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338570;
        }
    }
    ctx->pc = 0x3385C0u;
    // 0x3385c0: 0x704821  addu        $t1, $v1, $s0
    ctx->pc = 0x3385c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3385c4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3385c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3385c8: 0x91280ee6  lbu         $t0, 0xEE6($t1)
    ctx->pc = 0x3385c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3814)));
    // 0x3385cc: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x3385ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3385d0: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x3385d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3385d4: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x3385d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3385d8: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x3385d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3385dc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3385e0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x3385e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3385e4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3385e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3385e8: 0xa1280f1b  sb          $t0, 0xF1B($t1)
    ctx->pc = 0x3385e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3867), (uint8_t)GPR_U32(ctx, 8));
    // 0x3385ec: 0x90e30ee6  lbu         $v1, 0xEE6($a3)
    ctx->pc = 0x3385ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3814)));
    // 0x3385f0: 0xa0e30f1b  sb          $v1, 0xF1B($a3)
    ctx->pc = 0x3385f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3867), (uint8_t)GPR_U32(ctx, 3));
    // 0x3385f4: 0x90c30ee6  lbu         $v1, 0xEE6($a2)
    ctx->pc = 0x3385f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3814)));
    // 0x3385f8: 0xa0c30f1b  sb          $v1, 0xF1B($a2)
    ctx->pc = 0x3385f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3867), (uint8_t)GPR_U32(ctx, 3));
    // 0x3385fc: 0x90a30ee6  lbu         $v1, 0xEE6($a1)
    ctx->pc = 0x3385fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3814)));
    // 0x338600: 0xa0a30f1b  sb          $v1, 0xF1B($a1)
    ctx->pc = 0x338600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3867), (uint8_t)GPR_U32(ctx, 3));
    // 0x338604: 0x90830ee6  lbu         $v1, 0xEE6($a0)
    ctx->pc = 0x338604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3814)));
    // 0x338608: 0xa0830f1b  sb          $v1, 0xF1B($a0)
    ctx->pc = 0x338608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3867), (uint8_t)GPR_U32(ctx, 3));
    // 0x33860c: 0x0  nop
    ctx->pc = 0x33860cu;
    // NOP
label_338610:
    // 0x338610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338618: 0x3e00008  jr          $ra
    ctx->pc = 0x338618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338618u;
        // 0x33861c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338620u;
}
