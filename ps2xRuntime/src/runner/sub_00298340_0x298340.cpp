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

// Function: sub_00298340
// Address: 0x298340 - 0x298408
void sub_00298340_0x298340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298340_0x298340");
#endif

    switch (ctx->pc) {
        case 0x298370u: goto label_298370;
        case 0x298398u: goto label_298398;
        case 0x2983c0u: goto label_2983c0;
        case 0x2983e0u: goto label_2983e0;
        default: break;
    }

    ctx->pc = 0x298340u;

    // 0x298340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29834c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298354: 0x948308ec  lhu         $v1, 0x8EC($a0)
    ctx->pc = 0x298354u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2284)));
    // 0x298358: 0x948508ea  lhu         $a1, 0x8EA($a0)
    ctx->pc = 0x298358u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2282)));
    // 0x29835c: 0x601827  not         $v1, $v1
    ctx->pc = 0x29835cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x298360: 0xa39024  and         $s2, $a1, $v1
    ctx->pc = 0x298360u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x298364: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x298364u;
    {
        const bool branch_taken_0x298364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x298368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298364u;
        // 0x298368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298364) {
            ctx->pc = 0x2983A8u;
            goto label_2983a8;
        }
    }
    ctx->pc = 0x29836Cu;
    // 0x29836c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29836cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298370:
    // 0x298370: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x298374: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298374u;
    {
        const bool branch_taken_0x298374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298374) {
            ctx->pc = 0x298398u;
            goto label_298398;
        }
    }
    ctx->pc = 0x29837Cu;
    // 0x29837c: 0x111083  sra         $v0, $s1, 2
    ctx->pc = 0x29837cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 2));
    // 0x298380: 0x32260003  andi        $a2, $s1, 0x3
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x298384: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x298384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298388: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x298388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29838c: 0x904708ee  lbu         $a3, 0x8EE($v0)
    ctx->pc = 0x29838cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2286)));
    // 0x298390: 0xc0a6104  jal         func_298410
    ctx->pc = 0x298390u;
    SET_GPR_U32(ctx, 31, 0x298398u);
    ctx->pc = 0x298394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298390u;
    // 0x298394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298410u, 0x298390u, 0x298398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298398u;
label_298398:
    // 0x298398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29839c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x29839cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2983a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2983A0u;
    {
        const bool branch_taken_0x2983a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2983A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983A0u;
        // 0x2983a4: 0x129042  srl         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983a0) {
            ctx->pc = 0x298370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298370;
        }
    }
    ctx->pc = 0x2983A8u;
label_2983a8:
    // 0x2983a8: 0x960408ea  lhu         $a0, 0x8EA($s0)
    ctx->pc = 0x2983a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2282)));
    // 0x2983ac: 0x960308ec  lhu         $v1, 0x8EC($s0)
    ctx->pc = 0x2983acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2284)));
    // 0x2983b0: 0x802027  not         $a0, $a0
    ctx->pc = 0x2983b0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2983b4: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x2983b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2983b8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2983B8u;
    {
        const bool branch_taken_0x2983b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983B8u;
        // 0x2983bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983b8) {
            ctx->pc = 0x2983F0u;
            goto label_2983f0;
        }
    }
    ctx->pc = 0x2983C0u;
label_2983c0:
    // 0x2983c0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2983c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2983c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2983C4u;
    {
        const bool branch_taken_0x2983c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2983c4) {
            ctx->pc = 0x2983E0u;
            goto label_2983e0;
        }
    }
    ctx->pc = 0x2983CCu;
    // 0x2983cc: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x2983ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
    // 0x2983d0: 0x32460003  andi        $a2, $s2, 0x3
    ctx->pc = 0x2983d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2983d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2983d8: 0xc0a611c  jal         func_298470
    ctx->pc = 0x2983D8u;
    SET_GPR_U32(ctx, 31, 0x2983E0u);
    ctx->pc = 0x2983DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983D8u;
    // 0x2983dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298470u, 0x2983D8u, 0x2983E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983E0u;
label_2983e0:
    // 0x2983e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2983e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2983e4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x2983e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2983e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2983E8u;
    {
        const bool branch_taken_0x2983e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2983ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983E8u;
        // 0x2983ec: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983e8) {
            ctx->pc = 0x2983C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2983c0;
        }
    }
    ctx->pc = 0x2983F0u;
label_2983f0:
    // 0x2983f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2983f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2983f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2983f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2983f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2983f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2983fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2983fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298400: 0x3e00008  jr          $ra
    ctx->pc = 0x298400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298400u;
        // 0x298404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298408u;
}
