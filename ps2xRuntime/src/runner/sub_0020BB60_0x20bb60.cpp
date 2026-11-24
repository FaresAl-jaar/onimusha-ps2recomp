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

// Function: sub_0020BB60
// Address: 0x20bb60 - 0x20bcac
void sub_0020BB60_0x20bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BB60_0x20bb60");
#endif

    switch (ctx->pc) {
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        case 0x20bca0u: goto label_20bca0;
        case 0x20bca4u: goto label_20bca4;
        case 0x20bca8u: goto label_20bca8;
        default: break;
    }

    ctx->pc = 0x20bb60u;

label_20bb60:
    // 0x20bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20bb64:
    // 0x20bb64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20bb68:
    // 0x20bb68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20bb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bb6c:
    // 0x20bb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20bb70:
    // 0x20bb70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20bb74:
    // 0x20bb74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20bb78:
    // 0x20bb78: 0xc087dfe  jal         func_21F7F8
label_20bb7c:
    if (ctx->pc == 0x20BB7Cu) {
        ctx->pc = 0x20BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB78u;
        // 0x20bb7c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB80u;
        goto label_20bb80;
    }
    ctx->pc = 0x20BB78u;
    SET_GPR_U32(ctx, 31, 0x20BB80u);
    ctx->pc = 0x20BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BB78u;
    // 0x20bb7c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7F8u, 0x20BB78u, 0x20BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB80u;
label_20bb80:
    // 0x20bb80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20bb84:
    // 0x20bb84: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_20bb88:
    if (ctx->pc == 0x20BB88u) {
        ctx->pc = 0x20BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB84u;
        // 0x20bb88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB8Cu;
        goto label_20bb8c;
    }
    ctx->pc = 0x20BB84u;
    {
        const bool branch_taken_0x20bb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB84u;
        // 0x20bb88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb84) {
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BB8Cu;
label_20bb8c:
    // 0x20bb8c: 0x26300284  addiu       $s0, $s1, 0x284
    ctx->pc = 0x20bb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
label_20bb90:
    // 0x20bb90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bb94:
    // 0x20bb94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20bb98:
    // 0x20bb98: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_20bb9c:
    if (ctx->pc == 0x20BB9Cu) {
        ctx->pc = 0x20BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB98u;
        // 0x20bb9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBA0u;
        goto label_20bba0;
    }
    ctx->pc = 0x20BB98u;
    {
        const bool branch_taken_0x20bb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB98u;
        // 0x20bb9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb98) {
            ctx->pc = 0x20BBD0u;
            goto label_20bbd0;
        }
    }
    ctx->pc = 0x20BBA0u;
label_20bba0:
    // 0x20bba0: 0xc082bfc  jal         func_20AFF0
label_20bba4:
    if (ctx->pc == 0x20BBA4u) {
        ctx->pc = 0x20BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA0u;
        // 0x20bba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBA8u;
        goto label_20bba8;
    }
    ctx->pc = 0x20BBA0u;
    SET_GPR_U32(ctx, 31, 0x20BBA8u);
    ctx->pc = 0x20BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBA0u;
    // 0x20bba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFF0u, 0x20BBA0u, 0x20BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBA8u;
label_20bba8:
    // 0x20bba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bbac:
    // 0x20bbac: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_20bbb0:
    if (ctx->pc == 0x20BBB0u) {
        ctx->pc = 0x20BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBACu;
        // 0x20bbb0: 0x263002a4  addiu       $s0, $s1, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBB4u;
        goto label_20bbb4;
    }
    ctx->pc = 0x20BBACu;
    {
        const bool branch_taken_0x20bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20bbac) {
            ctx->pc = 0x20BBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BBACu;
            // 0x20bbb0: 0x263002a4  addiu       $s0, $s1, 0x2A4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BBD4u;
            goto label_20bbd4;
        }
    }
    ctx->pc = 0x20BBB4u;
label_20bbb4:
    // 0x20bbb4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20bbb8:
    // 0x20bbb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20bbbc:
    // 0x20bbbc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20bbc0:
    // 0x20bbc0: 0x40f809  jalr        $v0
label_20bbc4:
    if (ctx->pc == 0x20BBC4u) {
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBC8u;
        goto label_20bbc8;
    }
    ctx->pc = 0x20BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BBC8u);
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBC0u, 0x20BBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BBC8u;
label_20bbc8:
    // 0x20bbc8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_20bbcc:
    if (ctx->pc == 0x20BBCCu) {
        ctx->pc = 0x20BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC8u;
        // 0x20bbcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBD0u;
        goto label_20bbd0;
    }
    ctx->pc = 0x20BBC8u;
    {
        const bool branch_taken_0x20bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC8u;
        // 0x20bbcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbc8) {
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BBD0u;
label_20bbd0:
    // 0x20bbd0: 0x263002a4  addiu       $s0, $s1, 0x2A4
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
label_20bbd4:
    // 0x20bbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bbd8:
    // 0x20bbd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20bbdc:
    // 0x20bbdc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_20bbe0:
    if (ctx->pc == 0x20BBE0u) {
        ctx->pc = 0x20BBE4u;
        goto label_20bbe4;
    }
    ctx->pc = 0x20BBDCu;
    {
        const bool branch_taken_0x20bbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20bbdc) {
            ctx->pc = 0x20BC14u;
            goto label_20bc14;
        }
    }
    ctx->pc = 0x20BBE4u;
label_20bbe4:
    // 0x20bbe4: 0xc082bfc  jal         func_20AFF0
label_20bbe8:
    if (ctx->pc == 0x20BBE8u) {
        ctx->pc = 0x20BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE4u;
        // 0x20bbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBECu;
        goto label_20bbec;
    }
    ctx->pc = 0x20BBE4u;
    SET_GPR_U32(ctx, 31, 0x20BBECu);
    ctx->pc = 0x20BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBE4u;
    // 0x20bbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFF0u, 0x20BBE4u, 0x20BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBECu;
label_20bbec:
    // 0x20bbec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20bbf0:
    // 0x20bbf0: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_20bbf4:
    if (ctx->pc == 0x20BBF4u) {
        ctx->pc = 0x20BBF8u;
        goto label_20bbf8;
    }
    ctx->pc = 0x20BBF0u;
    {
        const bool branch_taken_0x20bbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20bbf0) {
            ctx->pc = 0x20BC14u;
            goto label_20bc14;
        }
    }
    ctx->pc = 0x20BBF8u;
label_20bbf8:
    // 0x20bbf8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20bbfc:
    // 0x20bbfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20bc00:
    // 0x20bc00: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x20bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20bc04:
    // 0x20bc04: 0x40f809  jalr        $v0
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BC0Cu);
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC04u, 0x20BC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_20bc10:
    if (ctx->pc == 0x20BC10u) {
        ctx->pc = 0x20BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC0Cu;
        // 0x20bc10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC14u;
        goto label_20bc14;
    }
    ctx->pc = 0x20BC0Cu;
    {
        const bool branch_taken_0x20bc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bc0c) {
            ctx->pc = 0x20BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC0Cu;
            // 0x20bc10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BC14u;
label_20bc14:
    // 0x20bc14: 0xc0817c0  jal         func_205F00
label_20bc18:
    if (ctx->pc == 0x20BC18u) {
        ctx->pc = 0x20BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC14u;
        // 0x20bc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC1Cu;
        goto label_20bc1c;
    }
    ctx->pc = 0x20BC14u;
    SET_GPR_U32(ctx, 31, 0x20BC1Cu);
    ctx->pc = 0x20BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC14u;
    // 0x20bc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x20BC14u, 0x20BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC1Cu;
label_20bc1c:
    // 0x20bc1c: 0x82230072  lb          $v1, 0x72($s1)
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_20bc20:
    // 0x20bc20: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_20bc24:
    if (ctx->pc == 0x20BC24u) {
        ctx->pc = 0x20BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC20u;
        // 0x20bc24: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC28u;
        goto label_20bc28;
    }
    ctx->pc = 0x20BC20u;
    {
        const bool branch_taken_0x20bc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bc20) {
            ctx->pc = 0x20BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC20u;
            // 0x20bc24: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC38u;
            goto label_20bc38;
        }
    }
    ctx->pc = 0x20BC28u;
label_20bc28:
    // 0x20bc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bc2c:
    // 0x20bc2c: 0xc081970  jal         func_2065C0
label_20bc30:
    if (ctx->pc == 0x20BC30u) {
        ctx->pc = 0x20BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC2Cu;
        // 0x20bc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC34u;
        goto label_20bc34;
    }
    ctx->pc = 0x20BC2Cu;
    SET_GPR_U32(ctx, 31, 0x20BC34u);
    ctx->pc = 0x20BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC2Cu;
    // 0x20bc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065C0u, 0x20BC2Cu, 0x20BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC34u;
label_20bc34:
    // 0x20bc34: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x20bc34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_20bc38:
    // 0x20bc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bc3c:
    // 0x20bc3c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_20bc40:
    if (ctx->pc == 0x20BC40u) {
        ctx->pc = 0x20BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC3Cu;
        // 0x20bc40: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC44u;
        goto label_20bc44;
    }
    ctx->pc = 0x20BC3Cu;
    {
        const bool branch_taken_0x20bc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20bc3c) {
            ctx->pc = 0x20BC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC3Cu;
            // 0x20bc40: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC64u;
            goto label_20bc64;
        }
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0xc08412c  jal         func_2104B0
label_20bc48:
    if (ctx->pc == 0x20BC48u) {
        ctx->pc = 0x20BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC44u;
        // 0x20bc48: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC4Cu;
        goto label_20bc4c;
    }
    ctx->pc = 0x20BC44u;
    SET_GPR_U32(ctx, 31, 0x20BC4Cu);
    ctx->pc = 0x20BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC44u;
    // 0x20bc48: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2104B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2104B0u, 0x20BC44u, 0x20BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC4Cu;
label_20bc4c:
    // 0x20bc4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20bc50:
    if (ctx->pc == 0x20BC50u) {
        ctx->pc = 0x20BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC4Cu;
        // 0x20bc50: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC54u;
        goto label_20bc54;
    }
    ctx->pc = 0x20BC4Cu;
    {
        const bool branch_taken_0x20bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc4c) {
            ctx->pc = 0x20BC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC4Cu;
            // 0x20bc50: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC64u;
            goto label_20bc64;
        }
    }
    ctx->pc = 0x20BC54u;
label_20bc54:
    // 0x20bc54: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_20bc58:
    // 0x20bc58: 0xc082e3e  jal         func_20B8F8
label_20bc5c:
    if (ctx->pc == 0x20BC5Cu) {
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0x24848620  addiu       $a0, $a0, -0x79E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC60u;
        goto label_20bc60;
    }
    ctx->pc = 0x20BC58u;
    SET_GPR_U32(ctx, 31, 0x20BC60u);
    ctx->pc = 0x20BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC58u;
    // 0x20bc5c: 0x24848620  addiu       $a0, $a0, -0x79E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20BC58u, 0x20BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC60u;
label_20bc60:
    // 0x20bc60: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x20bc60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_20bc64:
    // 0x20bc64: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_20bc68:
    if (ctx->pc == 0x20BC68u) {
        ctx->pc = 0x20BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC64u;
        // 0x20bc68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC6Cu;
        goto label_20bc6c;
    }
    ctx->pc = 0x20BC64u;
    {
        const bool branch_taken_0x20bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bc64) {
            ctx->pc = 0x20BC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC64u;
            // 0x20bc68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC98u;
            goto label_20bc98;
        }
    }
    ctx->pc = 0x20BC6Cu;
label_20bc6c:
    // 0x20bc6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20bc70:
    // 0x20bc70: 0xc082c2e  jal         func_20B0B8
label_20bc74:
    if (ctx->pc == 0x20BC74u) {
        ctx->pc = 0x20BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC70u;
        // 0x20bc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC78u;
        goto label_20bc78;
    }
    ctx->pc = 0x20BC70u;
    SET_GPR_U32(ctx, 31, 0x20BC78u);
    ctx->pc = 0x20BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC70u;
    // 0x20bc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B0B8u, 0x20BC70u, 0x20BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BC78u;
label_20bc78:
    // 0x20bc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20bc7c:
    // 0x20bc7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20bc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20bc80:
    // 0x20bc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc84:
    // 0x20bc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bc88:
    // 0x20bc88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20bc88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20bc8c:
    // 0x20bc8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20bc90:
    // 0x20bc90: 0x8082c2e  j           func_20B0B8
label_20bc94:
    if (ctx->pc == 0x20BC94u) {
        ctx->pc = 0x20BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC90u;
        // 0x20bc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC98u;
        goto label_20bc98;
    }
    ctx->pc = 0x20BC90u;
    ctx->pc = 0x20BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC90u;
    // 0x20bc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B0B8u;
    sub_0020B0B8_0x20b0b8(rdram, ctx, runtime); return;
    ctx->pc = 0x20BC98u;
label_20bc98:
    // 0x20bc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20bc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20bc9c:
    // 0x20bc9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20bc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20bca0:
    // 0x20bca0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20bca4:
    // 0x20bca4: 0x3e00008  jr          $ra
label_20bca8:
    if (ctx->pc == 0x20BCA8u) {
        ctx->pc = 0x20BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCA4u;
        // 0x20bca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BCACu;
        goto label_fallthrough_0x20bca4;
    }
    ctx->pc = 0x20BCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCA4u;
        // 0x20bca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20bca4:
    ctx->pc = 0x20BCACu;
}
