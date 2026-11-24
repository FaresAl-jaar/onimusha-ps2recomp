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

// Function: sub_0034ED60
// Address: 0x34ed60 - 0x34eea4
void sub_0034ED60_0x34ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ED60_0x34ed60");
#endif

    switch (ctx->pc) {
        case 0x34ed7cu: goto label_34ed7c;
        case 0x34ed84u: goto label_34ed84;
        case 0x34ee50u: goto label_34ee50;
        default: break;
    }

    ctx->pc = 0x34ed60u;

    // 0x34ed60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34ed64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34ed68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34ed6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34ed6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ed74: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34ED74u;
    SET_GPR_U32(ctx, 31, 0x34ED7Cu);
    ctx->pc = 0x34ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ED74u;
    // 0x34ed78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34ED74u, 0x34ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED7Cu;
label_34ed7c:
    // 0x34ed7c: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34ED7Cu;
    SET_GPR_U32(ctx, 31, 0x34ED84u);
    ctx->pc = 0x34ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ED7Cu;
    // 0x34ed80: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34ED7Cu, 0x34ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED84u;
label_34ed84:
    // 0x34ed84: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x34ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x34ed88: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x34ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34ed8c: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x34ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x34ed90: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x34ed90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34ed94: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x34ED94u;
    {
        const bool branch_taken_0x34ed94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED94u;
        // 0x34ed98: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed94) {
            ctx->pc = 0x34EE88u;
            goto label_34ee88;
        }
    }
    ctx->pc = 0x34ED9Cu;
    // 0x34ed9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34eda0: 0x2463f6d0  addiu       $v1, $v1, -0x930
    ctx->pc = 0x34eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964944));
    // 0x34eda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34eda8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34edac: 0x400008  jr          $v0
    ctx->pc = 0x34EDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34EDB8u: goto label_34edb8;
            case 0x34EDF8u: goto label_34edf8;
            case 0x34EE10u: goto label_34ee10;
            case 0x34EE28u: goto label_34ee28;
            case 0x34EE40u: goto label_34ee40;
            case 0x34EE78u: goto label_34ee78;
            case 0x34EE88u: goto label_34ee88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EDACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34EDB4u;
    // 0x34edb4: 0x0  nop
    ctx->pc = 0x34edb4u;
    // NOP
label_34edb8:
    // 0x34edb8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x34edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x34edbc: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x34edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x34edc0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x34edc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x34edc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x34EDC4u;
    {
        const bool branch_taken_0x34edc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDC4u;
        // 0x34edc8: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edc4) {
            ctx->pc = 0x34EDE0u;
            goto label_34ede0;
        }
    }
    ctx->pc = 0x34EDCCu;
    // 0x34edcc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x34edccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34edd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EDD0u;
    {
        const bool branch_taken_0x34edd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edd0) {
            ctx->pc = 0x34EDE0u;
            goto label_34ede0;
        }
    }
    ctx->pc = 0x34EDD8u;
    // 0x34edd8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x34edd8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x34eddc: 0x0  nop
    ctx->pc = 0x34eddcu;
    // NOP
label_34ede0:
    // 0x34ede0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34ede4: 0x24430032  addiu       $v1, $v0, 0x32
    ctx->pc = 0x34ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x34ede8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34edec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x34EDECu;
    {
        const bool branch_taken_0x34edec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDECu;
        // 0x34edf0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edec) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EDF4u;
    // 0x34edf4: 0x0  nop
    ctx->pc = 0x34edf4u;
    // NOP
label_34edf8:
    // 0x34edf8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34edfc: 0x24430037  addiu       $v1, $v0, 0x37
    ctx->pc = 0x34edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
    // 0x34ee00: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ee04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34EE04u;
    {
        const bool branch_taken_0x34ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE04u;
        // 0x34ee08: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee04) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EE0Cu;
    // 0x34ee0c: 0x0  nop
    ctx->pc = 0x34ee0cu;
    // NOP
label_34ee10:
    // 0x34ee10: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34ee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34ee14: 0x2443003c  addiu       $v1, $v0, 0x3C
    ctx->pc = 0x34ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x34ee18: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ee1c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x34EE1Cu;
    {
        const bool branch_taken_0x34ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE1Cu;
        // 0x34ee20: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee1c) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EE24u;
    // 0x34ee24: 0x0  nop
    ctx->pc = 0x34ee24u;
    // NOP
label_34ee28:
    // 0x34ee28: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34ee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34ee2c: 0x24430041  addiu       $v1, $v0, 0x41
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 65));
    // 0x34ee30: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ee34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34EE34u;
    {
        const bool branch_taken_0x34ee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE34u;
        // 0x34ee38: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee34) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EE3Cu;
    // 0x34ee3c: 0x0  nop
    ctx->pc = 0x34ee3cu;
    // NOP
label_34ee40:
    // 0x34ee40: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34ee44: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34ee48: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34EE48u;
    SET_GPR_U32(ctx, 31, 0x34EE50u);
    ctx->pc = 0x34EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE48u;
    // 0x34ee4c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34EE48u, 0x34EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE50u;
label_34ee50:
    // 0x34ee50: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34ee50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34ee54: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34ee58: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34ee5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34ee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ee60: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x34ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x34ee64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34ee68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ee6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34EE6Cu;
    {
        const bool branch_taken_0x34ee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE6Cu;
        // 0x34ee70: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee6c) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EE74u;
    // 0x34ee74: 0x0  nop
    ctx->pc = 0x34ee74u;
    // NOP
label_34ee78:
    // 0x34ee78: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ee7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EE7Cu;
    {
        const bool branch_taken_0x34ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE7Cu;
        // 0x34ee80: 0x34420047  ori         $v0, $v0, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee7c) {
            ctx->pc = 0x34EE90u;
            goto label_34ee90;
        }
    }
    ctx->pc = 0x34EE84u;
    // 0x34ee84: 0x0  nop
    ctx->pc = 0x34ee84u;
    // NOP
label_34ee88:
    // 0x34ee88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee8c: 0x0  nop
    ctx->pc = 0x34ee8cu;
    // NOP
label_34ee90:
    // 0x34ee90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ee94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34ee94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ee98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE9Cu;
        // 0x34eea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EEA4u;
}
