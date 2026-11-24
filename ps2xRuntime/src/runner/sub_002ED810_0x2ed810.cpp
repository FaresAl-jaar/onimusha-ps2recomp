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

// Function: sub_002ED810
// Address: 0x2ed810 - 0x2ed934
void sub_002ED810_0x2ed810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED810_0x2ed810");
#endif

    switch (ctx->pc) {
        case 0x2ed844u: goto label_2ed844;
        case 0x2ed85cu: goto label_2ed85c;
        case 0x2ed890u: goto label_2ed890;
        case 0x2ed8e8u: goto label_2ed8e8;
        case 0x2ed8f0u: goto label_2ed8f0;
        case 0x2ed900u: goto label_2ed900;
        case 0x2ed920u: goto label_2ed920;
        default: break;
    }

    ctx->pc = 0x2ed810u;

    // 0x2ed810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ed81c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed820: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ed824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ed828: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ed828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed82c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ed82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ed830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed834: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED834u;
    {
        const bool branch_taken_0x2ed834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED834u;
        // 0x2ed838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed834) {
            ctx->pc = 0x2ED850u;
            goto label_2ed850;
        }
    }
    ctx->pc = 0x2ED83Cu;
    // 0x2ed83c: 0xc0b2cd0  jal         func_2CB340
    ctx->pc = 0x2ED83Cu;
    SET_GPR_U32(ctx, 31, 0x2ED844u);
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x2ED83Cu, 0x2ED844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED844u;
label_2ed844:
    // 0x2ed844: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2ED844u;
    {
        const bool branch_taken_0x2ed844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed844) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED84Cu;
    // 0x2ed84c: 0x0  nop
    ctx->pc = 0x2ed84cu;
    // NOP
label_2ed850:
    // 0x2ed850: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x2ed850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x2ed854: 0xc09ec64  jal         func_27B190
    ctx->pc = 0x2ED854u;
    SET_GPR_U32(ctx, 31, 0x2ED85Cu);
    ctx->pc = 0x2ED858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED854u;
    // 0x2ed858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B190u, 0x2ED854u, 0x2ED85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED85Cu;
label_2ed85c:
    // 0x2ed85c: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x2ed85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2ed860: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ed860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ed864: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2ED864u;
    {
        const bool branch_taken_0x2ed864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed864) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED86Cu;
    // 0x2ed86c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2ED86Cu;
    {
        const bool branch_taken_0x2ed86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed86c) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED874u;
    // 0x2ed874: 0x8e0701ec  lw          $a3, 0x1EC($s0)
    ctx->pc = 0x2ed874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x2ed878: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2ED878u;
    {
        const bool branch_taken_0x2ed878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED878u;
        // 0x2ed87c: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed878) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED880u;
    // 0x2ed880: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x2ed880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2ed884: 0x24a50950  addiu       $a1, $a1, 0x950
    ctx->pc = 0x2ed884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
    // 0x2ed888: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed88c: 0x0  nop
    ctx->pc = 0x2ed88cu;
    // NOP
label_2ed890:
    // 0x2ed890: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2ed890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed894: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ed894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ed898: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ED898u;
    {
        const bool branch_taken_0x2ed898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed898) {
            ctx->pc = 0x2ED908u;
            goto label_2ed908;
        }
    }
    ctx->pc = 0x2ED8A0u;
    // 0x2ed8a0: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x2ed8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2ed8a4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2ed8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ed8a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ed8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ed8ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ed8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ed8b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ed8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ed8b4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x2ed8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ed8b8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2ed8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2ed8bc: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED8BCu;
    {
        const bool branch_taken_0x2ed8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ed8bc) {
            ctx->pc = 0x2ED908u;
            goto label_2ed908;
        }
    }
    ctx->pc = 0x2ED8C4u;
    // 0x2ed8c4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2ed8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ed8c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED8C8u;
    {
        const bool branch_taken_0x2ed8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed8c8) {
            ctx->pc = 0x2ED908u;
            goto label_2ed908;
        }
    }
    ctx->pc = 0x2ED8D0u;
    // 0x2ed8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ed8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ed8d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ed8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8e0: 0xc09fcf4  jal         func_27F3D0
    ctx->pc = 0x2ED8E0u;
    SET_GPR_U32(ctx, 31, 0x2ED8E8u);
    ctx->pc = 0x2ED8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8E0u;
    // 0x2ed8e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x2ED8E0u, 0x2ED8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED8E8u;
label_2ed8e8:
    // 0x2ed8e8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2ED8E8u;
    SET_GPR_U32(ctx, 31, 0x2ED8F0u);
    ctx->pc = 0x2ED8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8E8u;
    // 0x2ed8ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2ED8E8u, 0x2ED8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED8F0u;
label_2ed8f0:
    // 0x2ed8f0: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x2ed8f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x2ed8f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ed8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8f8: 0xc0a9f40  jal         func_2A7D00
    ctx->pc = 0x2ED8F8u;
    SET_GPR_U32(ctx, 31, 0x2ED900u);
    ctx->pc = 0x2ED8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED8F8u;
    // 0x2ed8fc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D00u, 0x2ED8F8u, 0x2ED900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED900u;
label_2ed900:
    // 0x2ed900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED900u;
    {
        const bool branch_taken_0x2ed900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed900) {
            ctx->pc = 0x2ED918u;
            goto label_2ed918;
        }
    }
    ctx->pc = 0x2ED908u;
label_2ed908:
    // 0x2ed908: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x2ed908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ed90c: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2ED90Cu;
    {
        const bool branch_taken_0x2ed90c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed90c) {
            ctx->pc = 0x2ED890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed890;
        }
    }
    ctx->pc = 0x2ED914u;
    // 0x2ed914: 0x0  nop
    ctx->pc = 0x2ed914u;
    // NOP
label_2ed918:
    // 0x2ed918: 0xc0a6d88  jal         func_29B620
    ctx->pc = 0x2ED918u;
    SET_GPR_U32(ctx, 31, 0x2ED920u);
    ctx->pc = 0x2ED91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED918u;
    // 0x2ed91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x2ED918u, 0x2ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED920u;
label_2ed920:
    // 0x2ed920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed92c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED92Cu;
        // 0x2ed930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED934u;
}
