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

// Function: sub_00215B60
// Address: 0x215b60 - 0x215cb4
void sub_00215B60_0x215b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215B60_0x215b60");
#endif

    switch (ctx->pc) {
        case 0x215ba4u: goto label_215ba4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215c10u: goto label_215c10;
        case 0x215c28u: goto label_215c28;
        case 0x215c38u: goto label_215c38;
        case 0x215c40u: goto label_215c40;
        case 0x215c70u: goto label_215c70;
        case 0x215c84u: goto label_215c84;
        default: break;
    }

    ctx->pc = 0x215b60u;

    // 0x215b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215b64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x215b68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215b6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b70: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x215b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x215b74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x215b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b78: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x215b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x215b7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x215b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x215b84: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x215b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b88: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x215b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x215b8c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x215b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x215b90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x215b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x215b94: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x215b94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x215b98: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x215b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215b9c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x215B9Cu;
    SET_GPR_U32(ctx, 31, 0x215BA4u);
    ctx->pc = 0x215BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B9Cu;
    // 0x215ba0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x215B9Cu, 0x215BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BA4u;
label_215ba4:
    // 0x215ba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ba8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x215BA8u;
    {
        const bool branch_taken_0x215ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ba8) {
            ctx->pc = 0x215BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215BA8u;
            // 0x215bac: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BD0u;
            goto label_215bd0;
        }
    }
    ctx->pc = 0x215BB0u;
    // 0x215bb0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x215BB0u;
    {
        const bool branch_taken_0x215bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bb0) {
            ctx->pc = 0x215C7Cu;
            goto label_215c7c;
        }
    }
    ctx->pc = 0x215BB8u;
label_215bb8:
    // 0x215bb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215bbc: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x215bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x215bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215bc4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x215bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x215bc8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x215BC8u;
    {
        const bool branch_taken_0x215bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BC8u;
        // 0x215bcc: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bc8) {
            ctx->pc = 0x215C8Cu;
            goto label_215c8c;
        }
    }
    ctx->pc = 0x215BD0u;
label_215bd0:
    // 0x215bd0: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x215BD0u;
    {
        const bool branch_taken_0x215bd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD0u;
        // 0x215bd4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bd0) {
            ctx->pc = 0x215C8Cu;
            goto label_215c8c;
        }
    }
    ctx->pc = 0x215BD8u;
    // 0x215bd8: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x215bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215bdc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x215bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215be0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x215be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215be4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x215be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215be8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x215be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x215bec: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x215becu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x215bf0: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x215bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x215bf4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x215bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x215bf8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x215bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bfc: 0xe2800b  movn        $s0, $a3, $v0
    ctx->pc = 0x215bfcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x215c00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x215c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c04: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x215c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x215c08: 0xc049522  jal         func_125488
    ctx->pc = 0x215C08u;
    SET_GPR_U32(ctx, 31, 0x215C10u);
    ctx->pc = 0x215C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C08u;
    // 0x215c0c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x215C08u, 0x215C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C10u;
label_215c10:
    // 0x215c10: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215c14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c18: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x215c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x215c1c: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x215c20: 0xc049522  jal         func_125488
    ctx->pc = 0x215C20u;
    SET_GPR_U32(ctx, 31, 0x215C28u);
    ctx->pc = 0x215C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C20u;
    // 0x215c24: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x215C20u, 0x215C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C28u;
label_215c28:
    // 0x215c28: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x215c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215c2c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x215C2Cu;
    {
        const bool branch_taken_0x215c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215c2c) {
            ctx->pc = 0x215C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215C2Cu;
            // 0x215c30: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215C64u;
            goto label_215c64;
        }
    }
    ctx->pc = 0x215C34u;
    // 0x215c34: 0x0  nop
    ctx->pc = 0x215c34u;
    // NOP
label_215c38:
    // 0x215c38: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x215C38u;
    SET_GPR_U32(ctx, 31, 0x215C40u);
    ctx->pc = 0x215C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C38u;
    // 0x215c3c: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x215C38u, 0x215C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C40u;
label_215c40:
    // 0x215c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x215c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c44: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x215c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x215c48: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x215C48u;
    {
        const bool branch_taken_0x215c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215c48) {
            ctx->pc = 0x215C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215C48u;
            // 0x215c4c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215bb8;
        }
    }
    ctx->pc = 0x215C50u;
    // 0x215c50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x215c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x215c54: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x215c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215c58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x215C58u;
    {
        const bool branch_taken_0x215c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215c58) {
            ctx->pc = 0x215C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215c38;
        }
    }
    ctx->pc = 0x215C60u;
    // 0x215c60: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x215c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_215c64:
    // 0x215c64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x215c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c68: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x215C68u;
    SET_GPR_U32(ctx, 31, 0x215C70u);
    ctx->pc = 0x215C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C68u;
    // 0x215c6c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x215C68u, 0x215C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C70u;
label_215c70:
    // 0x215c70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c74: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x215C74u;
    {
        const bool branch_taken_0x215c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215c74) {
            ctx->pc = 0x215C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215C74u;
            // 0x215c78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215C90u;
            goto label_215c90;
        }
    }
    ctx->pc = 0x215C7Cu;
label_215c7c:
    // 0x215c7c: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x215C7Cu;
    SET_GPR_U32(ctx, 31, 0x215C84u);
    ctx->pc = 0x215C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215C7Cu;
    // 0x215c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x215C7Cu, 0x215C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215C84u;
label_215c84:
    // 0x215c84: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x215c84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x215c88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215c8c:
    // 0x215c8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215c90:
    // 0x215c90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215c94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215c98: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x215c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215c9c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x215c9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ca0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x215ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215ca4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x215ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215ca8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x215ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x215cac: 0x3e00008  jr          $ra
    ctx->pc = 0x215CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215CB4u;
}
