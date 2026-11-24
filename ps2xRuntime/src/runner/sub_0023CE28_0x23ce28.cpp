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

// Function: sub_0023CE28
// Address: 0x23ce28 - 0x23cfc0
void sub_0023CE28_0x23ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CE28_0x23ce28");
#endif

    switch (ctx->pc) {
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf00u: goto label_23cf00;
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf0cu: goto label_23cf0c;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf18u: goto label_23cf18;
        case 0x23cf1cu: goto label_23cf1c;
        case 0x23cf20u: goto label_23cf20;
        case 0x23cf24u: goto label_23cf24;
        case 0x23cf28u: goto label_23cf28;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf30u: goto label_23cf30;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf38u: goto label_23cf38;
        case 0x23cf3cu: goto label_23cf3c;
        case 0x23cf40u: goto label_23cf40;
        case 0x23cf44u: goto label_23cf44;
        case 0x23cf48u: goto label_23cf48;
        case 0x23cf4cu: goto label_23cf4c;
        case 0x23cf50u: goto label_23cf50;
        case 0x23cf54u: goto label_23cf54;
        case 0x23cf58u: goto label_23cf58;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cf64u: goto label_23cf64;
        case 0x23cf68u: goto label_23cf68;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf70u: goto label_23cf70;
        case 0x23cf74u: goto label_23cf74;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf7cu: goto label_23cf7c;
        case 0x23cf80u: goto label_23cf80;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        default: break;
    }

    ctx->pc = 0x23ce28u;

label_23ce28:
    // 0x23ce28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23ce2c:
    // 0x23ce2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23ce30:
    // 0x23ce30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ce30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ce34:
    // 0x23ce34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23ce38:
    // 0x23ce38: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23ce3c:
    // 0x23ce3c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_23ce40:
    // 0x23ce40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23ce44:
    // 0x23ce44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23ce48:
    // 0x23ce48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23ce4c:
    // 0x23ce4c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x23ce4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23ce50:
    // 0x23ce50: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x23ce50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23ce54:
    // 0x23ce54: 0xc08db38  jal         func_236CE0
label_23ce58:
    if (ctx->pc == 0x23CE58u) {
        ctx->pc = 0x23CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE54u;
        // 0x23ce58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE5Cu;
        goto label_23ce5c;
    }
    ctx->pc = 0x23CE54u;
    SET_GPR_U32(ctx, 31, 0x23CE5Cu);
    ctx->pc = 0x23CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE54u;
    // 0x23ce58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CE0u, 0x23CE54u, 0x23CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE5Cu;
label_23ce5c:
    // 0x23ce5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ce5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ce60:
    // 0x23ce60: 0xc08db3e  jal         func_236CF8
label_23ce64:
    if (ctx->pc == 0x23CE64u) {
        ctx->pc = 0x23CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE60u;
        // 0x23ce64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE68u;
        goto label_23ce68;
    }
    ctx->pc = 0x23CE60u;
    SET_GPR_U32(ctx, 31, 0x23CE68u);
    ctx->pc = 0x23CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE60u;
    // 0x23ce64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CF8u, 0x23CE60u, 0x23CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE68u;
label_23ce68:
    // 0x23ce68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23ce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ce6c:
    // 0x23ce6c: 0xc08db4a  jal         func_236D28
label_23ce70:
    if (ctx->pc == 0x23CE70u) {
        ctx->pc = 0x23CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE6Cu;
        // 0x23ce70: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE74u;
        goto label_23ce74;
    }
    ctx->pc = 0x23CE6Cu;
    SET_GPR_U32(ctx, 31, 0x23CE74u);
    ctx->pc = 0x23CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CE6Cu;
    // 0x23ce70: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x23CE6Cu, 0x23CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE74u;
label_23ce74:
    // 0x23ce74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ce78:
    // 0x23ce78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23ce78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ce7c:
    // 0x23ce7c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23ce7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23ce80:
    // 0x23ce80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ce84:
    // 0x23ce84: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x23ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_23ce88:
    // 0x23ce88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23ce88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23ce8c:
    // 0x23ce8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23ce90:
    if (ctx->pc == 0x23CE90u) {
        ctx->pc = 0x23CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE8Cu;
        // 0x23ce90: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE94u;
        goto label_23ce94;
    }
    ctx->pc = 0x23CE8Cu;
    {
        const bool branch_taken_0x23ce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE8Cu;
        // 0x23ce90: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce8c) {
            ctx->pc = 0x23CEB8u;
            goto label_23ceb8;
        }
    }
    ctx->pc = 0x23CE94u;
label_23ce94:
    // 0x23ce94: 0x8222006c  lb          $v0, 0x6C($s1)
    ctx->pc = 0x23ce94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_23ce98:
    // 0x23ce98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23ce9c:
    if (ctx->pc == 0x23CE9Cu) {
        ctx->pc = 0x23CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE98u;
        // 0x23ce9c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEA0u;
        goto label_23cea0;
    }
    ctx->pc = 0x23CE98u;
    {
        const bool branch_taken_0x23ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ce98) {
            ctx->pc = 0x23CE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE98u;
            // 0x23ce9c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CEBCu;
            goto label_23cebc;
        }
    }
    ctx->pc = 0x23CEA0u;
label_23cea0:
    // 0x23cea0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23cea4:
    // 0x23cea4: 0xc08daf0  jal         func_236BC0
label_23cea8:
    if (ctx->pc == 0x23CEA8u) {
        ctx->pc = 0x23CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEA4u;
        // 0x23cea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEACu;
        goto label_23ceac;
    }
    ctx->pc = 0x23CEA4u;
    SET_GPR_U32(ctx, 31, 0x23CEACu);
    ctx->pc = 0x23CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CEA4u;
    // 0x23cea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23CEA4u, 0x23CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEACu;
label_23ceac:
    // 0x23ceac: 0x1000003c  b           . + 4 + (0x3C << 2)
label_23ceb0:
    if (ctx->pc == 0x23CEB0u) {
        ctx->pc = 0x23CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEACu;
        // 0x23ceb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEB4u;
        goto label_23ceb4;
    }
    ctx->pc = 0x23CEACu;
    {
        const bool branch_taken_0x23ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEACu;
        // 0x23ceb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ceac) {
            ctx->pc = 0x23CFA0u;
            goto label_23cfa0;
        }
    }
    ctx->pc = 0x23CEB4u;
label_23ceb4:
    // 0x23ceb4: 0x0  nop
    ctx->pc = 0x23ceb4u;
    // NOP
label_23ceb8:
    // 0x23ceb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cebc:
    // 0x23cebc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23cec0:
    // 0x23cec0: 0x40f809  jalr        $v0
label_23cec4:
    if (ctx->pc == 0x23CEC4u) {
        ctx->pc = 0x23CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEC0u;
        // 0x23cec4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEC8u;
        goto label_23cec8;
    }
    ctx->pc = 0x23CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CEC8u);
        ctx->pc = 0x23CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEC0u;
        // 0x23cec4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEC0u, 0x23CEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CEC8u;
label_23cec8:
    // 0x23cec8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23cecc:
    // 0x23cecc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23ced0:
    // 0x23ced0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x23ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_23ced4:
    // 0x23ced4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23ced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ced8:
    // 0x23ced8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23cedc:
    if (ctx->pc == 0x23CEDCu) {
        ctx->pc = 0x23CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CED8u;
        // 0x23cedc: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEE0u;
        goto label_23cee0;
    }
    ctx->pc = 0x23CED8u;
    {
        const bool branch_taken_0x23ced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CED8u;
        // 0x23cedc: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ced8) {
            ctx->pc = 0x23CEE8u;
            goto label_23cee8;
        }
    }
    ctx->pc = 0x23CEE0u;
label_23cee0:
    // 0x23cee0: 0xc08baa4  jal         func_22EA90
label_23cee4:
    if (ctx->pc == 0x23CEE4u) {
        ctx->pc = 0x23CEE8u;
        goto label_23cee8;
    }
    ctx->pc = 0x23CEE0u;
    SET_GPR_U32(ctx, 31, 0x23CEE8u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23CEE0u, 0x23CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CEE8u;
label_23cee8:
    // 0x23cee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ceec:
    // 0x23ceec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23cef0:
    // 0x23cef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cef4:
    // 0x23cef4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23cef8:
    // 0x23cef8: 0x40f809  jalr        $v0
label_23cefc:
    if (ctx->pc == 0x23CEFCu) {
        ctx->pc = 0x23CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF8u;
        // 0x23cefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF00u;
        goto label_23cf00;
    }
    ctx->pc = 0x23CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CF00u);
        ctx->pc = 0x23CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEF8u;
        // 0x23cefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEF8u, 0x23CF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF00u;
label_23cf00:
    // 0x23cf00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cf04:
    // 0x23cf04: 0xc08daf4  jal         func_236BD0
label_23cf08:
    if (ctx->pc == 0x23CF08u) {
        ctx->pc = 0x23CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF04u;
        // 0x23cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF0Cu;
        goto label_23cf0c;
    }
    ctx->pc = 0x23CF04u;
    SET_GPR_U32(ctx, 31, 0x23CF0Cu);
    ctx->pc = 0x23CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF04u;
    // 0x23cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BD0u, 0x23CF04u, 0x23CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF0Cu;
label_23cf0c:
    // 0x23cf0c: 0x2932823  subu        $a1, $s4, $s3
    ctx->pc = 0x23cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_23cf10:
    // 0x23cf10: 0xae250090  sw          $a1, 0x90($s1)
    ctx->pc = 0x23cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_23cf14:
    // 0x23cf14: 0xc08daf0  jal         func_236BC0
label_23cf18:
    if (ctx->pc == 0x23CF18u) {
        ctx->pc = 0x23CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF14u;
        // 0x23cf18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF1Cu;
        goto label_23cf1c;
    }
    ctx->pc = 0x23CF14u;
    SET_GPR_U32(ctx, 31, 0x23CF1Cu);
    ctx->pc = 0x23CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF14u;
    // 0x23cf18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23CF14u, 0x23CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF1Cu;
label_23cf1c:
    // 0x23cf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cf20:
    // 0x23cf20: 0xc08daf8  jal         func_236BE0
label_23cf24:
    if (ctx->pc == 0x23CF24u) {
        ctx->pc = 0x23CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF20u;
        // 0x23cf24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF28u;
        goto label_23cf28;
    }
    ctx->pc = 0x23CF20u;
    SET_GPR_U32(ctx, 31, 0x23CF28u);
    ctx->pc = 0x23CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF20u;
    // 0x23cf24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23CF20u, 0x23CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF28u;
label_23cf28:
    // 0x23cf28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cf2c:
    // 0x23cf2c: 0xc08daa4  jal         func_236A90
label_23cf30:
    if (ctx->pc == 0x23CF30u) {
        ctx->pc = 0x23CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF2Cu;
        // 0x23cf30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF34u;
        goto label_23cf34;
    }
    ctx->pc = 0x23CF2Cu;
    SET_GPR_U32(ctx, 31, 0x23CF34u);
    ctx->pc = 0x23CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF2Cu;
    // 0x23cf30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A90u, 0x23CF2Cu, 0x23CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF34u;
label_23cf34:
    // 0x23cf34: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23cf38:
    // 0x23cf38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23cf3c:
    // 0x23cf3c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_23cf40:
    if (ctx->pc == 0x23CF40u) {
        ctx->pc = 0x23CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF3Cu;
        // 0x23cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF44u;
        goto label_23cf44;
    }
    ctx->pc = 0x23CF3Cu;
    {
        const bool branch_taken_0x23cf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF3Cu;
        // 0x23cf40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf3c) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CF44u;
label_23cf44:
    // 0x23cf44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cf48:
    // 0x23cf48: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x23cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_23cf4c:
    // 0x23cf4c: 0x60f809  jalr        $v1
label_23cf50:
    if (ctx->pc == 0x23CF50u) {
        ctx->pc = 0x23CF54u;
        goto label_23cf54;
    }
    ctx->pc = 0x23CF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23CF54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF4Cu, 0x23CF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF54u;
label_23cf54:
    // 0x23cf54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cf58:
    // 0x23cf58: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23cf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23cf5c:
    // 0x23cf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cf60:
    // 0x23cf60: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x23cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23cf64:
    // 0x23cf64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cf68:
    // 0x23cf68: 0x60f809  jalr        $v1
label_23cf6c:
    if (ctx->pc == 0x23CF6Cu) {
        ctx->pc = 0x23CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF68u;
        // 0x23cf6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF70u;
        goto label_23cf70;
    }
    ctx->pc = 0x23CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23CF70u);
        ctx->pc = 0x23CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF68u;
        // 0x23cf6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF68u, 0x23CF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF70u;
label_23cf70:
    // 0x23cf70: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23cf74:
    // 0x23cf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cf78:
    // 0x23cf78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23cf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cf7c:
    // 0x23cf7c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_23cf80:
    // 0x23cf80: 0x40f809  jalr        $v0
label_23cf84:
    if (ctx->pc == 0x23CF84u) {
        ctx->pc = 0x23CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF80u;
        // 0x23cf84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF88u;
        goto label_23cf88;
    }
    ctx->pc = 0x23CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CF88u);
        ctx->pc = 0x23CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF80u;
        // 0x23cf84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF80u, 0x23CF88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CF88u;
label_23cf88:
    // 0x23cf88: 0xc08dbb2  jal         func_236EC8
label_23cf8c:
    if (ctx->pc == 0x23CF8Cu) {
        ctx->pc = 0x23CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF88u;
        // 0x23cf8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF90u;
        goto label_23cf90;
    }
    ctx->pc = 0x23CF88u;
    SET_GPR_U32(ctx, 31, 0x23CF90u);
    ctx->pc = 0x23CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CF88u;
    // 0x23cf8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EC8u, 0x23CF88u, 0x23CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF90u;
label_23cf90:
    // 0x23cf90: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_23cf94:
    // 0x23cf94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23cf98:
    // 0x23cf98: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x23cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_23cf9c:
    // 0x23cf9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23cfa0:
    // 0x23cfa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23cfa4:
    // 0x23cfa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23cfa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23cfa8:
    // 0x23cfa8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23cfa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23cfac:
    // 0x23cfac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23cfacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23cfb0:
    // 0x23cfb0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23cfb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23cfb4:
    // 0x23cfb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23cfb8:
    // 0x23cfb8: 0x3e00008  jr          $ra
label_23cfbc:
    if (ctx->pc == 0x23CFBCu) {
        ctx->pc = 0x23CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFB8u;
        // 0x23cfbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFC0u;
        goto label_fallthrough_0x23cfb8;
    }
    ctx->pc = 0x23CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFB8u;
        // 0x23cfbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23cfb8:
    ctx->pc = 0x23CFC0u;
}
