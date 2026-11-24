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

// Function: sub_00358BE0
// Address: 0x358be0 - 0x358d3c
void sub_00358BE0_0x358be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358BE0_0x358be0");
#endif

    switch (ctx->pc) {
        case 0x358c00u: goto label_358c00;
        case 0x358c14u: goto label_358c14;
        case 0x358c68u: goto label_358c68;
        case 0x358c78u: goto label_358c78;
        case 0x358c8cu: goto label_358c8c;
        case 0x358c94u: goto label_358c94;
        case 0x358ca8u: goto label_358ca8;
        case 0x358cb0u: goto label_358cb0;
        case 0x358cb8u: goto label_358cb8;
        case 0x358cdcu: goto label_358cdc;
        case 0x358d00u: goto label_358d00;
        case 0x358d14u: goto label_358d14;
        case 0x358d20u: goto label_358d20;
        default: break;
    }

    ctx->pc = 0x358be0u;

    // 0x358be0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x358be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x358be4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x358be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x358be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x358be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x358bec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x358becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x358bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358bf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x358bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358bf8: 0xc0c0858  jal         func_302160
    ctx->pc = 0x358BF8u;
    SET_GPR_U32(ctx, 31, 0x358C00u);
    ctx->pc = 0x358BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BF8u;
    // 0x358bfc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x358BF8u, 0x358C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C00u;
label_358c00:
    // 0x358c00: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x358c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x358c04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x358c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x358c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c0c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x358C0Cu;
    SET_GPR_U32(ctx, 31, 0x358C14u);
    ctx->pc = 0x358C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C0Cu;
    // 0x358c10: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x358C0Cu, 0x358C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C14u;
label_358c14:
    // 0x358c14: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x358C14u;
    {
        const bool branch_taken_0x358c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C14u;
        // 0x358c18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c14) {
            ctx->pc = 0x358C68u;
            goto label_358c68;
        }
    }
    ctx->pc = 0x358C1Cu;
    // 0x358c1c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x358c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x358c20: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x358c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358c24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x358C24u;
    {
        const bool branch_taken_0x358c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358c24) {
            ctx->pc = 0x358C68u;
            goto label_358c68;
        }
    }
    ctx->pc = 0x358C2Cu;
    // 0x358c2c: 0xde240520  ld          $a0, 0x520($s1)
    ctx->pc = 0x358c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1312)));
    // 0x358c30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x358c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x358c34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358c38: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x358c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x358c3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x358c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x358c40: 0xfe230520  sd          $v1, 0x520($s1)
    ctx->pc = 0x358c40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1312), GPR_U64(ctx, 3));
    // 0x358c44: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x358c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x358c48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x358C48u;
    {
        const bool branch_taken_0x358c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x358c48) {
            ctx->pc = 0x358C68u;
            goto label_358c68;
        }
    }
    ctx->pc = 0x358C50u;
    // 0x358c50: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x358c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x358c54: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x358c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x358c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358C58u;
    {
        const bool branch_taken_0x358c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C58u;
        // 0x358c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c58) {
            ctx->pc = 0x358C68u;
            goto label_358c68;
        }
    }
    ctx->pc = 0x358C60u;
    // 0x358c60: 0xc0d7898  jal         func_35E260
    ctx->pc = 0x358C60u;
    SET_GPR_U32(ctx, 31, 0x358C68u);
    ctx->pc = 0x35E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E260u, 0x358C60u, 0x358C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C68u;
label_358c68:
    // 0x358c68: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x358C68u;
    {
        const bool branch_taken_0x358c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x358C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C68u;
        // 0x358c6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358c68) {
            ctx->pc = 0x358CA8u;
            goto label_358ca8;
        }
    }
    ctx->pc = 0x358C70u;
    // 0x358c70: 0xc0c085c  jal         func_302170
    ctx->pc = 0x358C70u;
    SET_GPR_U32(ctx, 31, 0x358C78u);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x358C70u, 0x358C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C78u;
label_358c78:
    // 0x358c78: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x358c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x358c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c80: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x358c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x358c84: 0xc097674  jal         func_25D9D0
    ctx->pc = 0x358C84u;
    SET_GPR_U32(ctx, 31, 0x358C8Cu);
    ctx->pc = 0x358C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C84u;
    // 0x358c88: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D9D0u, 0x358C84u, 0x358C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C8Cu;
label_358c8c:
    // 0x358c8c: 0xc0c085c  jal         func_302170
    ctx->pc = 0x358C8Cu;
    SET_GPR_U32(ctx, 31, 0x358C94u);
    ctx->pc = 0x358C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C8Cu;
    // 0x358c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x358C8Cu, 0x358C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358C94u;
label_358c94:
    // 0x358c94: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x358c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358c9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x358c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x358ca0: 0xc097674  jal         func_25D9D0
    ctx->pc = 0x358CA0u;
    SET_GPR_U32(ctx, 31, 0x358CA8u);
    ctx->pc = 0x358CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CA0u;
    // 0x358ca4: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D9D0u, 0x358CA0u, 0x358CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CA8u;
label_358ca8:
    // 0x358ca8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x358ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358cac: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x358cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_358cb0:
    // 0x358cb0: 0xc0c0870  jal         func_3021C0
    ctx->pc = 0x358CB0u;
    SET_GPR_U32(ctx, 31, 0x358CB8u);
    ctx->pc = 0x358CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CB0u;
    // 0x358cb4: 0x8e040560  lw          $a0, 0x560($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3021C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021C0u, 0x358CB0u, 0x358CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CB8u;
label_358cb8:
    // 0x358cb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x358cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x358cbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x358cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x358cc0: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x358cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358cc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x358CC4u;
    {
        const bool branch_taken_0x358cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358cc4) {
            ctx->pc = 0x358CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358cb0;
        }
    }
    ctx->pc = 0x358CCCu;
    // 0x358ccc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x358CCCu;
    {
        const bool branch_taken_0x358ccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x358ccc) {
            ctx->pc = 0x358CE8u;
            goto label_358ce8;
        }
    }
    ctx->pc = 0x358CD4u;
    // 0x358cd4: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x358CD4u;
    SET_GPR_U32(ctx, 31, 0x358CDCu);
    ctx->pc = 0x358CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CD4u;
    // 0x358cd8: 0x8e4405a0  lw          $a0, 0x5A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x358CD4u, 0x358CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358CDCu;
label_358cdc:
    // 0x358cdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358CDCu;
    {
        const bool branch_taken_0x358cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358cdc) {
            ctx->pc = 0x358D20u;
            goto label_358d20;
        }
    }
    ctx->pc = 0x358CE4u;
    // 0x358ce4: 0x0  nop
    ctx->pc = 0x358ce4u;
    // NOP
label_358ce8:
    // 0x358ce8: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x358ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x358cec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x358cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x358cf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358CF0u;
    {
        const bool branch_taken_0x358cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358cf0) {
            ctx->pc = 0x358D08u;
            goto label_358d08;
        }
    }
    ctx->pc = 0x358CF8u;
    // 0x358cf8: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x358CF8u;
    SET_GPR_U32(ctx, 31, 0x358D00u);
    ctx->pc = 0x358CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358CF8u;
    // 0x358cfc: 0x8e4405a0  lw          $a0, 0x5A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x358CF8u, 0x358D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D00u;
label_358d00:
    // 0x358d00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x358D00u;
    {
        const bool branch_taken_0x358d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358d00) {
            ctx->pc = 0x358D20u;
            goto label_358d20;
        }
    }
    ctx->pc = 0x358D08u;
label_358d08:
    // 0x358d08: 0x8e4505a0  lw          $a1, 0x5A0($s2)
    ctx->pc = 0x358d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    // 0x358d0c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x358D0Cu;
    SET_GPR_U32(ctx, 31, 0x358D14u);
    ctx->pc = 0x358D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D0Cu;
    // 0x358d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x358D0Cu, 0x358D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D14u;
label_358d14:
    // 0x358d14: 0x8e4405a0  lw          $a0, 0x5A0($s2)
    ctx->pc = 0x358d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
    // 0x358d18: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x358D18u;
    SET_GPR_U32(ctx, 31, 0x358D20u);
    ctx->pc = 0x358D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358D18u;
    // 0x358d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x358D18u, 0x358D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358D20u;
label_358d20:
    // 0x358d20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x358d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x358d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x358d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358d34: 0x3e00008  jr          $ra
    ctx->pc = 0x358D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358D34u;
        // 0x358d38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358D3Cu;
}
